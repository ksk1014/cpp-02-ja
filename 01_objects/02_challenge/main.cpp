// コードを入力してください
#include <iostream>
#include "rectangle.h"

int main(){

    Rectangle rectangle{ 
        rectangle.width = 4,
        rectangle.height = 5
    };

    double result {};
    result = rectangle_area(rectangle);

    std::cout << result << std::endl;

}