#include <iostream>
#include <string>
#include "gate.h"

int main() {
    std::string command;
    int value = 0;
    std::cout << "FOR MORE INFO PRINT '-h' or '--help'" << std::endl;
    Gate gate(0);

    while (true) {
        // Зчитуємо команду
        std::cout << "Enter command : ";
        std::getline(std::cin, command);  // Зчитуємо рядок команди

        // Перевіряємо, чи команда містить "open"
        if (command.substr(0, 4) == "open") {
            // Витягуємо значення після команди
            try {
                value = std::stoi(command.substr(5));  // Преобразуємо в число
                gate.open(value);  // Викликаємо функцію open з отриманим значенням
            } catch (std::invalid_argument& e) {
                std::cerr << "Invalid value for 'open' command." << std::endl;
            }
        } 

        if (command.substr(0, 5) == "close") {
            // Витягуємо значення після команди
            try {
                value = std::stoi(command.substr(6));  // Преобразуємо в число
                gate.close(value);  // Викликаємо функцію open з отриманим значенням
            } catch (std::invalid_argument& e) {
                std::cerr << "Invalid value for 'close' command." << std::endl;
            }
        } 

       if (command.substr(0, 8) == "isClosed") {
    if (gate.isClosed()) {
        std::cout << "Gate is closed" << std::endl;
    } else {
        std::cout << "Gate is open" << std::endl;
	    }
	}

     if (command.substr(0, 10) == "getOpening") {
    if (gate.getOpening()) {
        std::cout << "Gate is open for : " << gate.getOpening() <<"%"<<std::endl;
    } else {
        std::cout << "Gate is for 0%" << std::endl;
        }
    }

     if (command.substr(0, 2) == "-h" || command.substr(0, 6) == "--help" ) {

        std::cout <<"All comands to use :"<<std::endl;
        std::cout <<"'open %'---------for opening gate (in %)"<<std::endl;
        std::cout <<"'close %'--------for closeing gate (in %)"<<std::endl;
        std::cout <<"'isClosed %'-----for checking if gate close"<<std::endl;
        std::cout <<"'getOpening %'---for checking % of gate oening "<<std::endl;


    }
}



    return 0;
}
