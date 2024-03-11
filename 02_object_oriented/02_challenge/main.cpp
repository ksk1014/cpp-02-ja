// コードを入力してください
#include "car.hpp"
// #include "logger.hpp"
#include <array>
#include <iostream>

int main() {
    Driver driver("Suzuki",38);
    Driver keisuke("Keisuke",38);

    Car car1("Toyota", "Camry", 2020, 25'000);

    car1.setPrice(26'000);
    std::cout << car1.getPrice() << "\n";

    car1.setDriver(&keisuke);
    Driver car1_obj = *car1.getDriver();
    std::cout << car1_obj.getName() << "\n";
    std::cout << car1.getDriver()->getName() << "\n";
}