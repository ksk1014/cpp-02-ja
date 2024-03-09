#include <string>
#include "driver.hpp"
class Car {
public:
    Car(std::string make, std::string model, int year, double price, Driver driver);

    void setPrice(double price);

    void setDriver(Driver driver);
    Driver getDriver();

    std::string getMake() const;
    std::string getModel() const;
    int getYear() const;
    double getPrice() const;

    void displayInfo() const;

private:
    void printPriceChange(double from, double to) const;

    std::string make;
    std::string model;
    int year;
    double price;
    Driver driver;
};
