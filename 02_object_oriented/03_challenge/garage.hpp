#include "car.hpp"

class Garage{
    public:
        // Garage(std::vector<Car*> cars);
        void addCar(Car* car);
        void removeCar(Car* car);      
        int getNumCars();  

    private:
        std::vector<Car*> cars;
};