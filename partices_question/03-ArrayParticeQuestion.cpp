

#include <iostream>
using namespace std;

class Array
{
public:
    // Peak Element fucntion
    void PeakArray()
    {
        int array[10] = {1, 2, 3, 4, 65, 7, 88, 9, 10};
        int counter = 0;
        for (int i = 0; i < 10; i++)
        {

            if (array[i] > counter)
            {
                counter = array[i];
            }
        }
        cout << "peak value is : " << counter << endl;
    }

    // Find the minimum and maximum element in an array
    void MinMax()
    {
        int array[10] = {99, 22, 34, 5, 6, 7, 8, 84, 2, 4};
        int max = 0;
        int min = array[0];
        for (int i = 0; i < 10; i++)
        {
            if (array[i] > max)
            {
                max = array[i];
            }
            if (min > array[i])
            {
                min = array[i];
            }
        }
        cout << "the max value is :" << max << endl;
        cout << "Th min value is :" << min << endl;
    }
    // Write a program to reverse the array
    void Reverse()
    {
        int array[50];
        int range;
        cout << "Enter the range " << endl;
        cin >> range;
        cout << "Enter the value in the Array" << endl;
        for (int i = 0; i < range; i++)
        {
            cin >> array[i];
        }
        for (int i = range; i >= 0; i--)
        {
            cout << array[i] << " ";
        }
    }
    // Write a program to sort the given array
    void sort()
    {
        int array[5] = {3, 5, 6, 8, 9};
        int temp;
        for (int i = 0; i < 5; i++)
        {
            for (int j = i + 1; j < 5; j++)
            {
                if (array[i] > array[j])
                {
                    temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
            }
        }

        for (int k = 0; k < 10; k++)
        {
            cout << array[k] << " ";
        }
    }
};

int main()
{
    Array a1;
    // a1.PeakArray();
    // a1.MinMax();
    // a1.Reverse();
    a1.sort();

    return 0;
}