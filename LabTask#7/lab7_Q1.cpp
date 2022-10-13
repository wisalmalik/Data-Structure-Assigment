#include <iostream>
#include <math.h>
using namespace std;

bool checkpowerof3(int x)
{
    if (x == 0)
    {
        return false;
    }
    for (int i = 1; i < x; i++)
    {
        if (pow(3, i) == x)
        {
            return true;
            break;
        }
        if (pow(3, i) > x)
        {
            return false;
            break;
        }
    }
}

int main()
{
    int n;
    cout << " enter the value of n : " << endl;
    cin >> n;
    cout << checkpowerof3(n) << endl;
}