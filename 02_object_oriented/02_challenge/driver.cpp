// コードを入力してください
#include "driver.hpp"

Driver::Driver(std::string name,int age)
  : name(name), age(age){};

std::string Driver::getName(){
    return name;
};