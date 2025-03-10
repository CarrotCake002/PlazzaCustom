#ifndef USAGE_HPP
#define USAGE_HPP

#include <string>
#include <iostream>

class Usage {
public:
    static void printUsage(void);
    static int checkUsage(int argc, char **argv);
    static int parseArgs(int argc, char **argv, float *speedMultip, int *nbCooks, int *restockTime);
};

#endif // USAGE_HPP