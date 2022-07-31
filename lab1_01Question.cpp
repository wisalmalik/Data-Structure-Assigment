// Populate an array of your size choice and write a program to find the largest and
// smallest element in that array.

#include<iostream>
using namespace std;

void largestValue(int *array,int size){
    cout <<"Display the array " <<endl;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] <<" ";
      
    }
    cout <<endl;

    int counter = 0;
    int *curr = array;
    for (int i = 0; i < size; i++)
    {
        if (*curr > counter)
        {
             counter = *curr ;
            curr++;
        }
        
    }
    cout <<"the largest number is :" << counter <<endl;

}

void smallNumber(int *array , int size){
    cout <<"Display the array " <<endl;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] <<" ";
    
    }
    cout <<endl;
    int *curr = array;
    int counter = array[0];
     for (int i = 0; i < size; i++)
    {
        if ( *curr <= counter  )
        {
             counter = *curr ;
            curr++;
        }
        
    }
    cout <<"the Small number is :" << counter <<endl;

}

int main(){
    int size;
    int * array = new int[size];
    cout <<"Enter the size of the array" <<endl;
    cin>>size;
    cout <<"enter the element in the array" <<endl;
    for (int i = 0; i < size; i++)
    {
        cin>> array[i];
    }
    largestValue(array,size);
    smallNumber(array,size);
    


    return 0;
}