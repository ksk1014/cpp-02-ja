#include "tire.hpp"

Tire::Tire(int size, Type type)
    : size(size), type(type)
    {};

int Tire::getTireSize(){
    return size;
};

