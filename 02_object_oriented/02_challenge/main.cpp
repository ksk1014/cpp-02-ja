// コードを入力してください
#include "car.hpp"
// #include "logger.hpp"
#include <array>
#include <iostream>

int main() {
    Driver driver("Suzuki",38);
    Driver keisuke("Keisuke",38);

    Car car1("Toyota", "Camry", 2020, 25'000, driver);
    Car car2("Honda", "Civic", 2021, 23'000, driver);
    Car car3("Ford", "Mustang", 2019, 28'000, driver);

    std::array<Car, 3> cars {car1, car2, car3};

    for (const Car& car : cars) {
        car.displayInfo();
    }

    car1.setPrice(26'000);
    std::cout << car1.getPrice() << "\n";

    car1.setDriver(keisuke);
    std::cout << car1.getDriver().getName() << "\n";
}