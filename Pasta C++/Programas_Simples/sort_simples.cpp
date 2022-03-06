#include <iostream>

using namespace std;

int main()
{
    int i, num[2], ler[2], box;

    for (i = 0; i < 3; i++)
    {
        cin >> num[i];
        ler[i] = num[i];
    }
    if (num[0] > num[1])
    {
        box = num[0];
        num[0] = num[1];
        num[1] = box;
    }
    else if (num[1] > num[2])
    {
        box = num[1];
        num[1] = num[2];
        num[2] = box;
    }
    else if (num[2] > num[0])
    {
        box = num[2];
        num[2] = num[0];
        num[0] = box;
    }

    cout << ler[0] << endl;
    cout << ler[1] << endl;
    cout << ler[2] << endl;
    cout << endl;
    cout << num[0] << endl;
    cout << num[1] << endl;
    cout << num[2] << endl;

    return 0;
}