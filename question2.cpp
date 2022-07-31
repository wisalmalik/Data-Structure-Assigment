#include <iostream>
using namespace std;
int returnString(char *arr, int x, int y)
{
    for (int i = x; i <= y; i++)
    {
        cout << arr[i];
    }
}

int main()
{
    int startindex, stopindex;
    char array[15];
    
    cout << "enter the string" << endl;
    cin >> array;
    char *p = array;
    cout << "enter the starting index " << endl;
    cin >> startindex;
    cout << "enter the stopping index " << endl;
    cin >> stopindex;

    returnString(p, startindex, stopindex);
    return 0;
    
}
