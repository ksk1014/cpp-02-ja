#include "garage.hpp"

        // Garage::Garage(Car* car): (car){};

        void Garage::addCar(Car* car){
            cars.push_back(car);
        };

        void Garage::removeCar(Car* car){
            cars.erase(std::remove(cars.begin(), cars.end(), car), cars.end());
        };

        int Garage::getNumCars(){
            return cars.size();
        };  