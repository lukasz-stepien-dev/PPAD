#include <fstream>
#include <iostream>
#include <string>

class PasswordManager {
private:
    std::string username;
    std::string password;
    int shift = 3;  // Shift value for Caesar cipher

    std::string encrypt(const std::string& text) {
        std::string encrypted_text;
        for (char c : text) {
            if (isalpha(c)) {
                char base = isupper(c) ? 'A' : 'a';
                c = ((c - base + shift) % 26) + base;
            }
            encrypted_text += c;
        }
        return encrypted_text;
    }

    std::string decrypt(const std::string& text) {
        std::string decrypted_text;
        for (char c : text) {
            if (isalpha(c)) {
                char base = isupper(c) ? 'A' : 'a';
                c = ((c - base - shift + 26) % 26) + base;
            }
            decrypted_text += c;
        }
        return decrypted_text;
    }

public:
    void setData(std::string username, std::string password) {
        this->username = username;
        this->password = password;
    }

    void saveToFile(std::string fileName) {
        std::ofstream file;
        file.open(fileName);
        if (file.is_open()) {
            file << encrypt(username) << "\n" << encrypt(password);
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
            username = decrypt(username);
            password = decrypt(password);
            std::cout << "Username: " << username << "\nPassword: " << password << "\n";
        } else {
            std::cout << "Unable to open file for reading.\n";
        }
    }
};