#include <iostream>
using namespace std;
void Union(int arr1[], int arr2[], int a, int b)
{
    int i = 0;
    int j = 0;
    cout<<"array 3 = ";
    while (i < a && j < b) {
        
        if (arr1[i] < arr2[j]){
        
            cout << arr1[i++] << " ";
        }
        else if (arr2[j] < arr1[i])
            cout << arr2[j++] << " ";
 
        else {
            cout << arr2[j++] << " ";
            i++;
        }
    }
    while (i < a)
        cout << arr1[i++] << " ";
 
    while (j < b)
        cout << arr2[j++] << " ";
}

int main()
{
    int arr1[] = {1,2,3,4,5,6,};
    int arr2[] = {1,2,3,5,7};
 
    int a = sizeof(arr1) / sizeof(arr1[0]);
    int b = sizeof(arr2) / sizeof(arr2[0]);
 
    Union(arr1, arr2, a, b);
 
    return 0;
}