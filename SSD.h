#ifndef SSD_H
#define SSD_H

class SSD {
private:
    char* brand;
    int capacityGB;

public:
    SSD(const char* brand, int capacityGB);
    SSD(const SSD& other);
    ~SSD();

    const char* getBrand() const;
    int getCapacityGB() const;

    void print() const;
};

#endif
