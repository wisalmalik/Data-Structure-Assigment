// Implement a function that finds common elements in two arrays. You can assume that
// the sets are stored using arrays. So, if array1 = {1,2,3,4,5,6,3,2} and array2 is {1,3,5,7},
// then array3
// should be {1,3,5}. Note array3 should not have any duplicate elements. You have to:

#include<iostream>
using namespace std;

void CommonElement(int *array, int *array2,int *array3 ,int size){
    int *curr1 = array;
    int *curr2 = array2;
    int *curr3 = array3;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (array[i] == array2[j])
            {
                  array3[i] = array[i];
                    break;
            }
        }
    
        
    }
    cout << "common elemets are " <<endl;
    for (int k = 0; k < size; k++)
    {
        cout << array3[k]<<" ";
    }    
    
    

}



int main(){
        //first array 
     int size;
    int * array = new int[size];
    cout <<"Enter the size of the array" <<endl;
    cin>>size;
    cout <<"enter the element in the array" <<endl;
    for (int i = 0; i < size; i++)
    {
        cin>> array[i];
    }
     cout <<endl;
    cout<<"Display of the Array 1"<<endl;
    for (int j = 0; j <size ; j++)
    {
        cout << array[j] <<" ";
    }

// Second array
    cout<<endl;
     int size2;
    int * array2 = new int[size2];
    cout <<"Enter the size of the array" <<endl;
    cin>>size2;
    cout <<"enter the element in the array" <<endl;
    for (int k = 0; k < size2; k++)
    {
        cin>> array2[k];
    }
     cout <<endl;
    cout<<"Display of the Array 1"<<endl;
    for (int l = 0; l <size2 ; l++)
    {
        cout << array2[l] <<" ";
    }
    int *array3 = new int[size];

   CommonElement(array,array2,array3, size);

    
    return 0;
}