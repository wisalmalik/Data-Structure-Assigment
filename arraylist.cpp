#include <iostream>
using namespace std;
class arraylist
{
private:
    int *array;
    int *curr;
    int length;
    int size;

public:
    arraylist(int s)
    {
        size = s;
        array = new int[size];
        length = 0;
    }

    ~arraylist()
    {
        delete[] array;
    }
void start(){
    curr = array;
}
void tail(){
    curr = array + length - 1;
    }
void next(){
         curr++;
    }
}
void back(){

        curr--;
        }

 void inseration(int val , int pos)
 {  
    if(length == size)
    {
        cout << "array is full" << endl;
        return;
    }
    if (pos > length-1){
        return<<"invalid position"<<endl;
    }
    start();
    for (int i = length ; i => pos; i++)
    {
        *(curr + 1) = *curr;
        back();
    }
    *curr = val;
    length++;
    void print(){
        start();
        for (int i = 0; i < length; i++)
        {
            cout << *curr << " ";
            next();
        }
        cout << endl;
    }
    

    
        

    }
 }
    int main()
    {
        arraylist l1(7);
        l1.inseration(1, 1);
        l1.inseration(2, 2);
        l1.inseration(3, 3);
        l1.inseration(4, 4);
        
        

        return 0;
    }