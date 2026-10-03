#include <iostream>
using namespace std;

const int MAX = 20;

void input(int poly[], int &deg)
{
    cout << "Enter highest degree: ";
    cin >> deg;

    for (int i = deg; i >= 0; i--)
    {
        cout << "Coefficient of x^" << i << ": ";
        cin >> poly[i];
    }
}

void display(int poly[], int deg)
{
    for (int i = deg; i >= 0; i--)
    {
        if (poly[i] != 0)
        {
            cout << poly[i];
            if (i > 0)
                cout << "x^" << i;
            if (i != 0)
                cout << " + ";
        }
    }
    cout << endl;
}

void add(int p1[], int d1, int p2[], int d2)
{
    int sum[MAX] = {0};
    int deg = (d1 > d2) ? d1 : d2;

    for (int i = 0; i <= deg; i++)
        sum[i] = p1[i] + p2[i];

    cout << "\nAddition: ";
    display(sum, deg);
}

void multiply(int p1[], int d1, int p2[], int d2)
{
    int product[MAX] = {0};
    int deg = d1 + d2;

    for (int i = 0; i <= d1; i++)
    {
        for (int j = 0; j <= d2; j++)
        {
            product[i + j] += p1[i] * p2[j];
        }
    }

    cout << "\nMultiplication: ";
    display(product, deg);
}

int main()
{
    int p1[MAX] = {0}, p2[MAX] = {0};
    int d1, d2;

    cout << "Enter First Polynomial\n";
    input(p1, d1);

    cout << "\nEnter Second Polynomial\n";
    input(p2, d2);

    cout << "\nFirst Polynomial: ";
    display(p1, d1);

    cout << "Second Polynomial: ";
    display(p2, d2);

    add(p1, d1, p2, d2);

    multiply(p1, d1, p2, d2);

    return 0;
}
