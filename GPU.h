#ifndef GPU_H
#define GPU_H

class GPU {
private:
    char* model;
    int vramGB;

public:
    GPU(const char* model, int vramGB);
    GPU(const GPU& other);
    ~GPU();

    const char* getModel() const;
    int getVramGB() const;

    void print() const;
};

#endif
