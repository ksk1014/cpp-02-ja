// コードを入力してください
#include "traffic_light.h"
#include <iostream>
#include <cassert>

int main(){

    void test_main();
    test_main();

    TrafficLight light{TrafficLight::red};
    std::string msg{};

    msg = get_action(light);
    
    // std::cout << light << std::endl;
    std::cout << msg << std::endl;

};

void test_main(){

    assert(get_action(TrafficLight::red) == "Stop");
    assert(get_action(TrafficLight::yellow) == "Caution");
    assert(get_action(TrafficLight::green) == "Go");

}

