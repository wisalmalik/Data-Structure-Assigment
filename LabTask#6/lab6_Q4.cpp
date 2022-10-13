#include <iostream>
using namespace std;


//Queu using linklist 
struct node 
{
    int data;
    node *next;
};

class listQueue
{
    private:
        int elements;
        node *front;
        node *back;
    public:
        listQueue()
        {
            elements = 0;
            front = back = NULL;
        }
    
    void enqueue(int value)
    {
        if (front == NULL)
        {
            node *n=new node;
            n->data = value;
            front = n;
            back = n;
            back->next = NULL;
            elements++;
        }

        else
        {
            node *n=new node;
            n->data = value;
            back->next = n;
            n->next = NULL;
            back=n;
            elements++;
        }
        
    }

    void dequeue()
    {
        if(elements==0)
        {
            cout<<"queue underflow"<<endl;
        }

        else
        {
            node *temp=front;
            front=front->next;
            delete temp;
            temp=NULL;
            elements--;
        }
        
    }

    void display()
    {
        if (elements==0)
        {
            cout<<"queue underflow"<<endl;
        }

        else
        {
            while (front!=NULL)
            {
                cout<<front->data<<endl;
                dequeue();
            }
            
        }
           
    }
        
};

int main()
{
    listQueue q;
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.display();
    q.dequeue();
    

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
    return 0;
}