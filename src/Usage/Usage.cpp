#include "Usage.hpp"

void Usage::printUsage(void) {
    std::cout << "Usage: ./main speedMultip nbCooks restockTime" << std::endl;
    std::cout << "    speedMultip:  the multiplier for the speed of the cooks           (unsigned float)" << std::endl;
    std::cout << "    nbCooks:      the number of cooks in the kitchen                  (unsigned int)" << std::endl;
    std::cout << "    restockTime:  the time it takes to restock the kitchen in ms      (unsigned int)" << std::endl;
}

int Usage::checkUsage(int argc, char **argv) {
    if (argc == 2 && (std::string(argv[1]) == "-h" || std::string(argv[1]) == "--help")) {
        printUsage();
        return 0;
    }
    return 84;
}

int Usage::parseArgs(int argc, char **argv, float *speedMultip, int *nbCooks, int *restockTime) {
    if (argc != 4) {
        Usage::printUsage();
        return 84;
    }
    try {
        *speedMultip = std::stof(argv[1]);
        *nbCooks = std::stoi(argv[2]);
        *restockTime = std::stoi(argv[3]);
    } catch (std::invalid_argument &e) {
        Usage::printUsage();
        return 84;
    }
    return 0;
}