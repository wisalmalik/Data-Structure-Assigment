#include <iostream>
using namespace std;

bool checkpowerof3(int x)
{
    if (x <= 0)
    {
        return false;
    }
    if (x % 3 == 0)
    {
        return checkpowerof3(x / 3);
    }
    if (x == 1)
    {
        return true;
    }
    return false;
}
int main()
{
    int n;
    cout << " enter the value of n : " << endl;
    cin >> n;
    cout << checkpowerof3(n) << endl;
}