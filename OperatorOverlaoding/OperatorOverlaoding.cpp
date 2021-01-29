// OperatorOverlaoding.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//Part of this code comes from below link
//https://www.programiz.com/cpp-programming/operator-overloading

#include <iostream>

using namespace std;

class Complex {
public:
    float real;
    float imag;

public:
    Complex() : real(0), imag(0) {}
    void input() {
        cout << "Enter real and imaginary parts respectively: ";
        cin >> real;
        cout << "Enter real and imaginary parts img: ";
        cin >> imag;
    }

    // Overload the + operator
    Complex operator == (const Complex& obj) {
   

        try {
            if (this->real == obj.real) {
                throw 1;
            }
            else {
                throw 0;
            }
        }
        catch (int e) {
            if (e) {
                std::cout << " they are equal \n";
            }
            else {
                std::cout << " they are not equal \n";
            }
        }

        return *this;
    }

    void output() {
        if (imag < 0)
            cout << "Output Complex number: " << real << imag << "i";
        else
            cout << "Output Complex number: " << real << " "  << imag << "i";
    }
};

int main() {
    Complex complex1, complex2, result;

    complex1.real = 2;
    complex1.imag = 4;

    complex2.real = 5;
    complex2.imag = 4;
    result = complex1 == complex2;
    result.output();

    return 0;
}