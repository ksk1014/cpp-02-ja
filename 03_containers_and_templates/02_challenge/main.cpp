// コードを入力してください
#include "stack.hpp"
#include <vector>
#include <list>
#include <deque>
#include <iostream>

int main(){

    Stack<int> stack_int;
    int a = 1;
    std::cout << stack_int.is_empty() << std::endl;
    stack_int.push(a);
    std::cout << stack_int.is_empty() << std::endl;
    stack_int.pop();
    std::cout << stack_int.is_empty() << std::endl;

    stack_int.push(2);
    std::cout << stack_int.top() << std::endl;

    stack_int.push(3);
    std::cout << stack_int.top() << std::endl;

}