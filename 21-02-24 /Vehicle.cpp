#include <stdlib.h>
#include <string>
#include <iostream>
#include <utility>

class Vehicle {
private:
    std::string brand;
    std::string model;
    std::string productionYear;
public:
    Vehicle(std::string brand, std::string model, std::string productionYear)
    {
        this->brand = std::move(brand);
        this->model = std::move(model);
        this->productionYear = std::move(productionYear);
    };
    void print() const {
        std::cout << "Brand:" << this->brand << std::endl;
        std::cout << "Model:" << this->model << std::endl;
        std::cout << "Production Year:" << this->productionYear << std::endl;
        std::cout << "--------------------------------" << std::endl;
    }
};