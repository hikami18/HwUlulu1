#include "CPU.h"
#include <iostream>
#include <cstring>

CPU::CPU(const char* model, double frequency) {
    this->model = new char[strlen(model) + 1];
    strcpy(this->model, model);
    this->frequency = frequency;
}

CPU::CPU(const CPU& other) {
    this->model = new char[strlen(other.model) + 1];
    strcpy(this->model, other.model);
    this->frequency = other.frequency;
}

CPU::~CPU() {
    delete[] model;
}

const char* CPU::getModel() const { return model; }
double CPU::getFrequency() const { return frequency; }

void CPU::print() const {
    std::cout << "CPU: " << model << " (" << frequency << " GHz)\n";
}
