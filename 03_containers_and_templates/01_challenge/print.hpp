// コードを入力してくださ
#include <iostream>
#include <vector>
#include <list>
#include <deque>


template <typename T>
void print_elements(T& elements){
    for (const auto& element : elements) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}