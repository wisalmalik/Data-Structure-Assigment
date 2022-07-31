#include <iostream>
using namespace std;

void pointer(int *ptr)
{
    cout << "adress of the value form function " << *ptr << endl;
}

int main()
{
    // write a program to print the address of the variable whose value input from the user

    // int *intput = new int;
    // cout << "Enter the varibale" << endl;
    // cin >> *intput;
    // cout << intput << endl;

    // Write a program to print a number which is entered from keyboard using pointer.

    // Write a function which will take pointer and display the number on screen. Take number from user and print it on screen using that function.
    //  int *ptr = new int ;
    //  cout << "enter the value "<<endl;
    //  cin>> *ptr;
    //  cout <<"addres of the value form main"<< *ptr<<endl;
    //  pointer(ptr);
    //  return 0;







    // Write a program to find out the greatest and the smallest among three numbers using pointers.
    // int x, y, z;
    // cout << "enter the first number" << endl;
    // cin >> x;
    // cout << "enter the second number " << endl;
    // cin >> y;
    // cout << "enter the 3rd Number" << endl;
    // cin >> z;
    // int *ptrr1, *ptrr2, *ptrr3;
    // ptrr1 = &x;
    // ptrr2 = &y;
    // ptrr3 = &z;

    // int counter = 0;
    // if (*ptrr1 >= *ptrr2 && *ptrr1 >= *ptrr3)
    // {
    //     counter = *ptrr1;
    // }
    // if (*ptrr2 >= *ptrr1 && *ptrr2 >= *ptrr3)
    // {
    //     counter = *ptrr2;
    // }
    // if (*ptrr3 >= *ptrr1 && *ptrr3 >= *ptrr2)
    // {
    //     counter = *ptrr3;
    // }

    // cout << " the largest number is "<< counter <<endl;

    //Write C++ program to swap two numbers using pointers

    // int x, y;
    // cout << "enter the first number" << endl;
    // cin >> x;
    // cout << "enter the second number " << endl;
    // cin >> y;
    // int *ptrr1, *ptrr2;
    // ptrr1 = &x;
    // ptrr2 = &y;

    // int swap = *ptrr1;
    // *ptrr1 = *ptrr2;
    // *ptrr2 = swap;

    // cout << "swap value "<<endl;
    // cout << "value of x "<< x <<endl;
    // cout << "value of y " << y <<endl;


    //Write C++ program to add two numbers using pointers

    //  int x, y;
    // cout << "enter the first number" << endl;
    // cin >> x;
    // cout << "enter the second number " << endl;
    // cin >> y; 
    // int *ptrr1, *ptrr2;
    // ptrr1 = &x;
    // ptrr2 = &y;

    // cout << "sum of the two number " << *ptrr1 + *ptrr2 <<endl;


    //Write C++ program to find length of string using pointer

    char *p;
    char str[60];

    cout << " Enter the string " <<endl;
    cin >> str;
    p=str;
    int counter = 0;

    while (*p !='\0')
    {
        p++;
        counter++;
    }
    cout <<"the counter of the sting is " << counter <<endl;
    

   
    


    return 0;

}