// コードを入力してください
#include "car.hpp"
// #include "logger.hpp"
#include <array>
#include <iostream>

int main() {

    Car car1("Toyota", "Camry", 2020, 25'000, 16, Type::summer);

    std::cout << "Tire size:" << car1.getTireSize() << "\n";

}