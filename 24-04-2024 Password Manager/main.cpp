#include <fstream>
#include <iostream>
#include <string>

class PasswordManager {
private:
    std::string username;
    std::string password;

public:
    void setData(std::string username, std::string password) {
        this->username = username;
        this->password = password;
    }

    void saveToFile(std::string fileName) {
        std::ofstream file;
        file.open(fileName);
        if (file.is_open()) {
            file << username << "\n" << password;
            file.close();
        } else {
            std::cout << "Unable to open file for writing.\n";
        }
    }

    void readFromFile(std::string fileName) {
        std::ifstream file;
        file.open(fileName);
        if (file.is_open()) {
            std::getline(file, username);
            std::getline(file, password);
            file.close();
            std::cout << "Username: " << username << "\nPassword: " << password << "\n";
        } else {
            std::cout << "Unable to open file for reading.\n";
        }
    }
};