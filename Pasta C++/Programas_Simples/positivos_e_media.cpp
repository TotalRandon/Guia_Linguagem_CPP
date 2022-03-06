#include <iostream>

using namespace std;

int main()
{
    float num[5];
    float media;
    int posi = 0, i;

    for (i = 0; i < 6; i = i + 1)
    {
        cin >> num[i];
        if (num[i] > 0)
        {
            posi++;
        }
        else
        {
            num[i] = 0;
        }
    }

    media = (num[0] + num[1] + num[2] + num[3] + num[4] + num[5])/posi;

    cout << posi << " valores positivos" << endl;
    cout.precision(2);
    cout << media << endl;
    
    return 0;
}