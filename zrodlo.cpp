#include <iostream>
#include<cmath>
#include<complex>
using namespace std;
void projekt()
{
    double a,b,c,d,y1,y2,y3,p,q;
    cout << "Podaj kolejno wspolczynniki a,b,c,d wielomianu trzeciego stopnia: \n";
    cin >> a >> b >> c >> d;
    if (a != 0)
    {
        double D = 0.00;
        double u = 0.00;
        double v = 0.00;
        complex<double> e1(-1, 1.73);
        e1 *= 0.5;
        complex<double> e2(-1, -1.73);
        e2 *= 0.5;
        p = (3 * a * c - (b * b)) / (9 * a * a);
        q = ((b * b * b) / (27 * a * a * a) - (b * c) / (6 * a * a) + d / (2 * a));
        D = ((p * p * p) + (q * q));
        if (D > 0)
        {
            u = pow(abs(-q + sqrt(D)), (1.0 / 3.0));
            v = -pow(abs(-q - sqrt(D)), (1.0 / 3.0));
            y1 = u + v;
            complex<double>y2(u * e1 + v * e2);
            complex<double>y3(u * e2 + v * e1);
            double z1 = (y1 - (b / (3 * a)));
            complex<double> z2 = (y2 - (b / (3 * a)));
            complex<double> z3 = (y3 - (b / (3 * a)));
            cout << "Obliczone miejsca zerowe wielomianu: \n";
            cout << "Z1: " << round(z1 * 100) / 100 << "\n";
            cout << "Z2: " << round(z2.real() * 100) / 100 << " + " << round(y2.imag() * 100) / 100 << "i" << "\n";
            cout << "Z3: " << round(z3.real() * 100) / 100 << " + " << round(y3.imag() * 100) / 100 << "i" << "\n";
        }
        else if (D<0)
        {
            complex<double> U(-q, sqrt(-D));
            U = pow(U, (1.0 / 3.0));
            complex<double> V(-q, -sqrt(-D));
            V = pow(V, (1.0 / 3.0));
            complex<double>Y1(U + V);
            complex<double>Y2(U * e1 + V * e2);
            complex<double>Y3(U * e2 + V * e1);
            complex<double> Z1 = (Y1 - (b / (3.00 * a)));
            complex<double> Z2 = (Y2 - (b / (3.00 * a)));
            complex<double> Z3 = (Y3 - (b / (3.00 * a)));
             cout << "Obliczone miejsca zerowe wielomianu: \n";
             cout << "Z1: " << round(Z1.real() * 100) / 100 << "\n";
             cout << "Z2: " << round(Z2.real() * 100) / 100 << "\n";
             cout << "Z3: " << round(Z3.real() * 100) / 100 << "\n";
        }
    }
    else
        cout << "Podana funkcja nie jest wielomianem trzeciego stopnia";
}

int main()
{

    projekt();
    return 0;
}