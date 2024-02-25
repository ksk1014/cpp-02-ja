// コードを入力してください
#include <string>
#include "traffic_light.h"


std::string get_action(TrafficLight light) {

    std::string msg {};

    if(light == TrafficLight::red){
        msg = "Stop";
    }else if(light == TrafficLight::yellow){
        msg = "Attention";
    }else if(light == TrafficLight::green){
        msg = "Go";
    };
    return msg;
    // コードを入力してください
}