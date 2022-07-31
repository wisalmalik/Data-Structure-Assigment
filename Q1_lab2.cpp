#include <iostream>
// #include <array>
using namespace std;

int main()
{
    // make function

    int n;
    cout << "Enter the size of the array " << endl;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100 + 1;
    }

    cout << "output of the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    // revese the function
    cout << "reverse the array" << endl;
    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // find the mean in the array
    cout << "mean of the array " << endl;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << sum / n;

    cout << endl;
    // find Second max
    cout << "second max number" << endl;
    int max = arr[0];
    int secondMax = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            secondMax = max;
            max = arr[i];
        }
        else if (arr[i] > secondMax)
        {
            secondMax = arr[i];
        }
    }
    cout << secondMax;

    cout << endl;
    // Find mode of the array
    cout << "find mode " << endl;
    int max1 = arr[0];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == max1)
        {
            count++;
        }
        else if (arr[i] > max1)
        {
            max1 = arr[i];
            count = 1;
        }
    }
    cout << max;
    cout << endl;
    // Desplay the sum of the seven numbers in the array
    cout << " Display the sum of even indexe" << endl;
    int sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            sum2 += arr[i];
        }
    }
    cout << sum2;

    cout << endl;
    // Display the produact of add indexe
    cout << " Display the product of odd indexe" << endl;
    int product = 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0)
        {
            product *= arr[i];
        }
    }
    cout << product;

    return 0;
}
