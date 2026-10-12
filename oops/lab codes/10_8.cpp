/*#include <iostream>
using namespace std;

class Complex
{
    float real, imag;

public:
    Complex()
    {
        real = 0;
        imag = 0;
    }

    Complex(float r, float i)
    {
        real = r;
        imag = i;
    }

    Complex add(Complex c)
    {
        return Complex(real + c.real, imag + c.imag);
    }



    void display()
    {
        cout << real;

        if (imag >= 0)
            cout << " + " << imag << "i";
        else
            cout << " - " << -imag << "i";

        cout << endl;
    }
};

int main()
{
    float r1, i1, r2, i2;

    cout << "Enter real and imaginary part of first complex number: ";
    cin >> r1 >> i1;

    cout << "Enter real and imaginary part of second complex number: ";
    cin >> r2 >> i2;

    Complex c1(r1, i1);
    Complex c2(r2, i2);

    Complex sum = c1.add(c2);
  
    cout << "\nAddition: ";
    sum.display();

    return 0;
}*/


#include <iostream>
using namespace std;

class Complex
{
    float real, imag;

public:
    // Default constructor
    Complex()
    {
        real = 0;
        imag = 0;
    }

    // Parameterized constructor
    Complex(float r, float i)
    {
        real = r;
        imag = i;
    }

    // Addition
    Complex add(Complex c)
    {
        return Complex(real + c.real, imag + c.imag);
    }

    // Subtraction
    Complex subtract(Complex c)
    {
        return Complex(real - c.real, imag - c.imag);
    }

    // Multiplication
    Complex multiply(Complex c)
    {
        return Complex(real * c.real - imag * c.imag,
                       real * c.imag + imag * c.real);
    }

    // Division
    Complex divide(Complex c)
    {
        float d = c.real * c.real + c.imag * c.imag;

        return Complex((real * c.real + imag * c.imag) / d,
                       (imag * c.real - real * c.imag) / d);
    }

    // Display
    void display()
    {
        cout << real;

        if (imag >= 0)
            cout << " + " << imag << "i";
        else
            cout << " - " << -imag << "i";

        cout << endl;
    }
};

int main()
{
    float r1, i1, r2, i2;

    cout << "Enter real and imaginary part of first complex number: ";
    cin >> r1 >> i1;

    cout << "Enter real and imaginary part of second complex number: ";
    cin >> r2 >> i2;

    Complex c1(r1, i1);
    Complex c2(r2, i2);

    Complex sum = c1.add(c2);
    Complex diff = c1.subtract(c2);
    Complex product = c1.multiply(c2);
    Complex quotient = c1.divide(c2);

    cout << "\nAddition: ";
    sum.display();

    cout << "Subtraction: ";
    diff.display();

    cout << "Multiplication: ";
    product.display();

    cout << "Division: ";
    quotient.display();

    return 0;
}