#include <vector>
#include <chrono>
#include <iostream>
#include <list>
#include <deque>

//時間を計測する関数

//push/popをする関数
template <typename T, typename U>
class Stack{
    public:
    void push(U element){
        stack.push_back(element);
    };
    void pop(){
        if(stack.size() != 0) {
        stack.pop_back();
        };
    };
    private:
    T stack; 
};

template<typename V>
std::chrono::microseconds calc_time(V stack){
    int input = 1;
    std::chrono::high_resolution_clock::time_point start = std::chrono::high_resolution_clock::now();
    for(int i =0; i < 100000; ++i){
        stack.push(input);
        stack.pop();
    }

    std::chrono::high_resolution_clock::time_point end = std::chrono::high_resolution_clock::now();
    return std::chrono::duration_cast<std::chrono::microseconds>(end - start);
};

int main(){
    // Stack<std::vector<int>,int> instance;
    Stack<std::vector<int>,int> stack_vector;
    std::chrono::microseconds elapsed_time_vector = calc_time< Stack<std::vector<int>,int>>(stack_vector);
    std::cout << "elepased_time: (vector)" << elapsed_time_vector.count() << std::endl;
    Stack<std::list<int>,int> stack_list;
    std::chrono::microseconds elapsed_time_list = calc_time< Stack<std::list<int>,int>>(stack_list);
    std::cout << "elepased_time: (list)" << elapsed_time_list.count() << std::endl;
    Stack<std::deque<int>,int> stack_deque;
    std::chrono::microseconds elapsed_time_degue = calc_time< Stack<std::deque<int>,int>>(stack_deque);
    std::cout << "elepased_time: (deque)" << elapsed_time_degue.count() << std::endl;

    return 0;
};