// コードを入力してください
#pragma once
#include <string>

class Driver {
    public:
        Driver(std::string name,int age);

        std::string getName() const;

    private:
        std::string name;
        int age;
};
