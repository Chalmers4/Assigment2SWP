
#include <iostream>
#include "greeting.h"
#include "math.h"

void displayMenu() {
    std::cout << "\nWhat would you like to do?" << std::endl;
    std::cout << "1. Greet User" << std::endl;
    std::cout << "2. Perform Arithmetic Operations" << std::endl;
    std::cout << "3. Exit" << std::endl;
}

int main() {
    int choice;
    std::string name;
    double num1, num2;

    while (true) {
        displayMenu();
        std::cout << "Enter your choice (1/2/3): ";
        std::cin >> choice;

        if (choice == 1) {
            std::cout << "Enter your name: ";
            std::cin >> name;
            std::cout << greetUser(name) << std::endl;
        } else if (choice == 2) {
            std::cout << "Enter the first number: ";
            std::cin >> num1;
            std::cout << "Enter the second number: ";
            std::cin >> num2;

            std::cout << "\nSelect an operation:" << std::endl;
            std::cout << "1. Addition" << std::endl;
            std::cout << "2. Subtraction" << std::endl;
            std::cout << "3. Multiplication" << std::endl;
            std::cout << "4. Division" << std::endl;
            std::cout << "Enter your choice (1/2/3/4): ";
            std::cin >> choice;

            try {
                switch (choice) {
                    case 1: std::cout << "Result: " << add(num1, num2) << std::endl; break;
                    case 2: std::cout << "Result: " << subtract(num1, num2) << std::endl; break;
                    case 3: std::cout << "Result: " << multiply(num1, num2) << std::endl; break;
                    case 4: std::cout << "Result: " << divide(num1, num2) << std::endl; break;
                    default: std::cout << "Invalid choice." << std::endl;
                }
            } catch (const std::invalid_argument& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
        } else if (choice == 3) {
            std::cout << "Goodbye!" << std::endl;
            break;
        } else {
            std::cout << "Invalid choice. Please try again." << std::endl;
        }
    }

    return 0;
}