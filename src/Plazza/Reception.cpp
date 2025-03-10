#include "Reception.hpp"

Reception::Reception(float speedMultip, int nbCooks, int restockTime) {
    this->speedMultip = speedMultip;
    this->nbCooks = nbCooks;
    this->restockTime = restockTime;
}

void Reception::run(void) {
    std::cout << "Reception running" << std::endl;
}