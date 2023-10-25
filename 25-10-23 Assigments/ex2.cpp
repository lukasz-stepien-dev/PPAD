#include <iostream>
#include <string>

int main() {
    std::string input;

    std::cout << "Podaj ciąg znaków: ";
    std::getline(std::cin, input);

    std::string modifiedString;
    for (char c : input) {
        if (c != ' ') {
            modifiedString += c;
        }
    }

    std::cout << "bez spacji: " << modifiedString << std::endl;

    return 0;
}
