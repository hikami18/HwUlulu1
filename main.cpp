#include <iostream>
#include "Laptop.h"

int main() {
    CPU cpu("Intel Core i7", 3.4);
    SSD ssd("Kingston", 1024);
    GPU gpu("NVIDIA RTX 4060", 8);
    RAM ram("DDR5", 16);

    Laptop laptop1("ASUS ROG", "Grey", 1500.0, cpu, ssd, gpu, ram);
    
    std::cout << "Original laptop info:\n";
    laptop1.printInfo();

    Laptop laptop2 = laptop1;
    std::cout << "Copied laptop info:\n";
    laptop2.printInfo();

    std::cout << "Total laptops created: " << Laptop::getLaptopCount() << "\n";

    return 0;
}
