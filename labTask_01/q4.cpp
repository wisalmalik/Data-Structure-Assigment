#include <iostream>
using namespace std;
void swaping(int* a, int* b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}
int seg(int arr[], int size)
{
    int j = 0, i;
    for (i = 0; i < size; i++) {
        if (arr[i] <= 0) {
            swaping(&arr[i], &arr[j]);
            j++;
        }
    }
 
    return j;
}
int MissingPositive(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++) {
        if (abs(arr[i]) - 1 < size && arr[abs(arr[i]) - 1] > 0)
            arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
    }
    for (i = 0; i < size; i++)
        if (arr[i] > 0)
            return i + 1;
 
    return size + 1;

    int shift = seg(arr, size);
    return MissingPositive(arr + shift,
                               size - shift);
}
int main()
{
    int arr[] = {1, 3, 6, 4, 1, 2};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    int missing = MissingPositive(arr, arr_size);
    cout << "so the missing number is " << missing;
    return 0;
}
 