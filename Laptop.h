#ifndef LAPTOP_H
#define LAPTOP_H

#include "CPU.h"
#include "SSD.h"
#include "GPU.h"
#include "RAM.h"

class Laptop {
private:
    char* name;
    char* color;
    double price;

    CPU cpu;
    SSD ssd;
    GPU gpu;
    RAM ram;

    static int laptopCount;

public:
    Laptop(const char* name, const char* color, double price, 
           CPU cpu, SSD ssd, GPU gpu, RAM ram);

    Laptop(const char* name, double price, CPU cpu, SSD ssd, GPU gpu, RAM ram);

    Laptop(const Laptop& other);

    ~Laptop();

    static int getLaptopCount();

    const char* getName() const;
    const char* getColor() const;
    double getPrice() const;
    void setPrice(double newPrice);

    void printInfo() const;
};

#endif
