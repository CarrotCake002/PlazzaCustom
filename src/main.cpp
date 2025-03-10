#include "main.hpp"

int plazza(float speedMultip, int nbCooks, int restockTime) {
	Reception *reception = new Reception(speedMultip, nbCooks, restockTime);
	// reception->run();
	(void)reception;
	return 0;
}

int main(int argc, char **argv) {
	float speedMultip = 0.0f;
	int nbCooks = 0;
	int restockTime = 0;

	if (Usage::parseArgs(argc, argv, &speedMultip, &nbCooks, &restockTime) != 0)
		return 84;
	return plazza(speedMultip, nbCooks, restockTime);
}
