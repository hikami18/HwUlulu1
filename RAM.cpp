#include "RAM.h"
#include <iostream>
#include <cstring>

RAM::RAM(const char* type, int sizeGB) {
    this->type = new char[strlen(type) + 1];
    strcpy(this->type, type);
    this->sizeGB = sizeGB;
}

RAM::RAM(const RAM& other) {
    this->type = new char[strlen(other.type) + 1];
    strcpy(this->type, other.type);
    this->sizeGB = other.sizeGB;
}

RAM::~RAM() {
    delete[] type;
}

const char* RAM::getType() const { return type; }
int RAM::getSizeGB() const { return sizeGB; }

void RAM::print() const {
    std::cout << "RAM: " << type << " " << sizeGB << " GB\n";
}
