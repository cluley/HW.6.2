#include <iostream>
#include "counter.h"

int main(int argc, char** argv) {
    std::string answer;

    while (true) {
        std::cout << "Do you want to set an initital value of the counter? Enter yes/no: ";
        std::cin >> answer;
        if (answer == "yes") {
            break;
        }
        else if (answer == "no") {
            break;
        }
    }

    if (answer == "yes") {
        int input;
        std::cout << "Enter the initial value of the counter: ";
        std::cin >> input;
        Counter var(input);
        char optn;
        do {
            std::cout << "Enter operation ('+', '-', '=' or 'x'): ";
            std::cin >> optn;
            if (optn == '+') {
                var.increase();
            }
            else if (optn == '-') {
                var.decrease();
            }
            else if (optn == '=') {
                var.print();
            }
        } while (optn != 'x');
    }
    else if (answer == "no") {
        Counter var;
        char optn;
        do {
            std::cout << "Enter operation ('+', '-', '=' or 'x'): ";
            std::cin >> optn;
            if (optn == '+') {
                var.increase();
            }
            else if (optn == '-') {
                var.decrease();
            }
            else if (optn == '=') {
                var.print();
            }
        } while (optn != 'x');
    }

    std::cout << "Good bye!" << std::endl;

    return 0;
}