#include "Laptop.h"
#include <iostream>
#include <cstring>

int Laptop::laptopCount = 0;

Laptop::Laptop(const char* name, const char* color, double price, 
               CPU cpu, SSD ssd, GPU gpu, RAM ram)
    : price(price), cpu(cpu), ssd(ssd), gpu(gpu), ram(ram) 
{
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);

    this->color = new char[strlen(color) + 1];
    strcpy(this->color, color);

    laptopCount++;
}

Laptop::Laptop(const char* name, double price, CPU cpu, SSD ssd, GPU gpu, RAM ram)
    : Laptop(name, "Black", price, cpu, ssd, gpu, ram) {}

Laptop::Laptop(const Laptop& other)
    : price(other.price), cpu(other.cpu), ssd(other.ssd), gpu(other.gpu), ram(other.ram) 
{
    this->name = new char[strlen(other.name) + 1];
    strcpy(this->name, other.name);

    this->color = new char[strlen(other.color) + 1];
    strcpy(this->color, other.color);

    laptopCount++;
}

Laptop::~Laptop() {
    delete[] name;
    delete[] color;
    laptopCount--;
}

int Laptop::getLaptopCount() {
    return laptopCount;
}

const char* Laptop::getName() const { return name; }
const char* Laptop::getColor() const { return color; }
double Laptop::getPrice() const { return price; }
void Laptop::setPrice(double newPrice) { price = newPrice; }

void Laptop::printInfo() const {
    std::cout << "=== Laptop: " << name << " (" << color << ") ===\n";
    std::cout << "Price: $" << price << "\n";
    cpu.print();
    ssd.print();
    gpu.print();
    ram.print();
    std::cout << "=============================\n";
}
