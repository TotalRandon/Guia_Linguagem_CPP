/*
Leia 1 valor inteiro N (2 < N < 1000). A seguir, mostre a tabuada de N:      
1 x N = N      2 x N = 2N        ...       10 x N = 10N
*/

#include <iostream>

using namespace std;

int main()
{
    int num, result;
    cin >> num;
    for (int i = 1; i <= 10; i++)
    {
        result = i * num;
        cout << i << " x " << num << " = " << result << endl; 
    }
    return 0;
}