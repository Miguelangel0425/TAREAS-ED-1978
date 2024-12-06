#ifndef MATRICES_H
#define MATRICES_H

template<typename T>
class Matrices {
private:
    T** mat1;
    T** mat2;
    T** result;
    int size;

public:
    Matrices(int size);
    ~Matrices();
    
    void fillRandom();
    void displayMatrices();
    void displayResult();
    T sumaRecursivaMatrices(int f, int c);

    int getSize() const;
    void setSize(int newSize);
};

#endif