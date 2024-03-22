// コードを入力してください
#include "scene.hpp"

void Scene::render() const{
    for(const auto drawable: drawables){
        if(drawable == nullptr) {
            continue;
        }
        drawable->draw();
    }
}


void Scene::add(Drawable* drawable) {
    this->drawables.push_back(drawable);
}