// コードを入力してくださ
#include "print.hpp"
#include <vector>
#include <list>
#include <deque>

int main() {
    // std::vector を使って関数をテスト
    std::vector<int> vec = {1, 2, 3, 4, 5};
    std::cout << "Printing elements of vector:" << std::endl;
    print_elements<std::vector<int>>(vec);

    // std::list を使って関数をテスト
    std::list<double> lst = {3.14, 2.71, 1.618};
    std::cout << "Printing elements of list:" << std::endl;
    print_elements<std::list<double>>(lst);

    return 0;
}