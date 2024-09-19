#include "Object.h"

Object::Object(int weight, int revenue) : weight(weight), revenue(revenue) {}

int Object::getWeight() const {
    return weight;
}

int Object::getRevenue() const {
    return revenue;
}