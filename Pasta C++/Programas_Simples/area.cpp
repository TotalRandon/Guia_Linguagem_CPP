#include <iostream>
#include <iomanip>

using namespace std;

float triangulo(double base, double altura)
{
    return (base * altura)/2;
}

float circulo(double raio)
{
    double pi = 3.14159;
    return pi * (raio * raio);
}

float trapezio(double Base, double base, double altura)
{
    return (Base + base) * altura / 2;
}

float quadrado(double lado)
{
    return lado * lado;
}

float retangulo(double lado, double altura)
{
    return lado * altura;
}

int main()
{
    double a, b, c;
    double area[5];

    cin >> a >> b >> c;
    area[0] = triangulo(a, c);
    area[1] = circulo(c);
    area[2] = trapezio(a, b, c);
    area[3] = quadrado(b);
    area[4] = retangulo(a, b);

    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << area[0] << endl;
    cout << "CIRCULO: " << area[1] << endl;
    cout << "TRAPEZIO: " << area[2] << endl;
    cout << "QUADRADO: " << area[3] << endl;
    cout << "RETANGULO: " << area[4] << endl;

    return 0;
}