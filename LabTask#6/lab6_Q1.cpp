#include<iostream>
using namespace std;

class Stack {
  private:
    int top;
    int Size;
    int *arr;

  public:
    Stack(int s) 
    {
      top = -1;
      Size=s;
      arr=new int[Size];
    } 

    ~Stack() 
    {
        delete[] arr;
    }
      

  bool isEmpty() {
    if (top == -1)
      return true;
    else
      return false;
  }
  bool isFull() {
    if (top == Size-1)
      return true;
    else
      return false;
  }

  void push(int val) {
    if (isFull()) {
      cout << "stack overflow" << endl;
    } else {
      top++; // 1
      arr[top] = val;
    }
  }

  int pop() {
    if (isEmpty()) {
      cout << "stack underflow" << endl;
      return 0;
    } else
      {
      int popValue = arr[top];
      arr[top] = 0;
      top--;
      return popValue;
      }
    
  }


  int peek() {
    if (isEmpty()) {
      cout << "stack underflow" << endl;
      return 0;
    } 
      int peek=arr[top];
      cout << " the peek is" <<peek<<endl;
      return peek;
    
  }

 


  void print()
  { cout << "evaluated answer is " <<endl;
    while (top!=-1) {
      cout<<arr[top]<<endl;
      pop();
    }
  }


    

      
};

int main()
{   Stack s(4);
    s.push(2);
    s.push(4);
    s.peek();
    s.pop();
    s.print();



  
}