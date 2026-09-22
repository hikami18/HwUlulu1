#ifndef RAM_H
#define RAM_H

class RAM {
private:
    char* type;
    int sizeGB;

public:
    RAM(const char* type, int sizeGB);
    RAM(const RAM& other);
    ~RAM();

    const char* getType() const;
    int getSizeGB() const;

    void print() const;
};

#endif
