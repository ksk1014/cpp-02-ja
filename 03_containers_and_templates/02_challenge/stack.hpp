// コードを入力してください

#include <vector>
#include <list>
#include <deque>

template <typename T>
class Stack{
    public:
        Stack(): stack(){};

        void push(const T& value){
            stack.push_back(value);
        };
        void pop(){
            if(!stack.empty()){
            stack.pop_back();
            };
        };
        T top(){
            return stack.back();
        };
        bool is_empty() const{
            return stack.empty();
        };
    private:
        std::vector<T> stack;
};