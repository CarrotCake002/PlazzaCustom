#ifndef PLAZZA_RECEPTION_HPP
#define PLAZZA_RECEPTION_HPP

#include <string>
#include <vector>
#include <iostream>

class Reception {
public:
    Reception(float speedMultip, int nbCooks, int restockTime);
    ~Reception();

    void run();
    void processOrder(const std::string &order);

private:
    void parseOrder(const std::string &order);
    void dispatchOrder(const std::vector<std::string> &parsedOrder);

    float speedMultip;
    int nbCooks;
    int restockTime;
    std::vector<std::string> orders;
};

#endif // PLAZZA_RECEPTION_HPP