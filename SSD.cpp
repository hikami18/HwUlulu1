#include "SSD.h"
#include <iostream>
#include <cstring>

SSD::SSD(const char* brand, int capacityGB) {
    this->brand = new char[strlen(brand) + 1];
    strcpy(this->brand, brand);
    this->capacityGB = capacityGB;
}

SSD::SSD(const SSD& other) {
    this->brand = new char[strlen(other.brand) + 1];
    strcpy(this->brand, other.brand);
    this->capacityGB = other.capacityGB;
}

SSD::~SSD() {
    delete[] brand;
}

const char* SSD::getBrand() const { return brand; }
int SSD::getCapacityGB() const { return capacityGB; }

void SSD::print() const {
    std::cout << "SSD: " << brand << " " << capacityGB << " GB\n";
}
