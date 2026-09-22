#include "GPU.h"
#include <iostream>
#include <cstring>

GPU::GPU(const char* model, int vramGB) {
    this->model = new char[strlen(model) + 1];
    strcpy(this->model, model);
    this->vramGB = vramGB;
}

GPU::GPU(const GPU& other) {
    this->model = new char[strlen(other.model) + 1];
    strcpy(this->model, other.model);
    this->vramGB = other.vramGB;
}

GPU::~GPU() {
    delete[] model;
}

const char* GPU::getModel() const { return model; }
int GPU::getVramGB() const { return vramGB; }

void GPU::print() const {
    std::cout << "GPU: " << model << " " << vramGB << " GB\n";
}
