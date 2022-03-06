#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double raio, pi = 3.14159, area;

    cin >> raio;
    area  = pi * (raio * raio);
    //cout.fixed;
    cout << setprecision(6);
    cout << "A=" << area << endl;
    return 0;
}