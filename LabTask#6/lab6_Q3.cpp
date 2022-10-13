#include <iostream>
using namespace std;


// Queu array base 

class Queue
{
private:
       int *arr;
       int size;
       int rear;
       int front;
       int elements;

public:
    Queue(int s)
    {
        size = s;
        rear=-1;
        front=0;
        elements = 0;
        arr=new int[size];
    }
    ~Queue()
    {
        delete []arr;
    }

    void enqueue(int value)
    {
        if (elements==size-1)
        {
            cout<<"Queue overflow"<<endl;
        }

        else if (rear==size-1)
        {
            rear=0;
        }

        else
        {
            rear++;
            arr[rear]=value;
            elements++;
        }
           
    }

    int dequeue()
    {   int val;
        if (elements==0)
        {
            cout<<"Queue underflow"<<endl;
        }
         
        else if (front==size-1)
        {
            front=0;
        }

        else
        {
            val=arr[front];
            front++;
            elements--;
        }

        return val;
        
    }

    void display()
    {
        if (elements==0)
        {
            cout<<"Queue underflow"<<endl;
        }

        else
        {
            while (elements!=0)
            {
                cout<<arr[front]<<endl;
                dequeue();
            }
            
        }
            
    }

};


int main()
{
    Queue q(10);
    // q.enqueue(4);
    // q.enqueue(3);
    // q.enqueue(6);
    // q.dequeue();
    // q.display();

    int val, op, pos;

    do
    {
        cout << "Enter the option to perform the task: " << endl;
        cout << "1: Enqueue the queue" << endl;
        cout << "2: Dequeue the Queue ." << endl;
        cout << "3: print the queue." << endl;
        cout << "4: for Exit enter the 0 ." << endl;
        cin >> op;

        switch (op)
        {
        case 0:
            break;

        case 1:
            cout << "Enter the value in the Queu : " << endl;
            cin >> val;
            q.enqueue(val);
            cout << endl;
            break;

        case 2:
            cout << "dequeue from the Queu : " << endl;
            q.dequeue();
            break;

        case 3:
            
            cout << "Print the Queue: " << endl;
            q.display();
            break;
        }
       

    }

    while (op != 0);
    return 0;
}


