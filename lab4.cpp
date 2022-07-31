#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

class linkedlist
{
private:
    node *head;
    node *curr, *prev;
    int length;

public:
    linkedlist()
    {
        head = curr = prev = NULL;
        length = 0;
    }

    // inseration function work for the beginning , mid and last
    void insertion(int val, int pos)
    {
        curr = head;
        if (pos == 1)
        {
            node *n = new node;
            n->data = val;
            n->next = head;
            head = n;
        }

        for (int i = 2; curr != NULL; i++)
        {
            if (pos == i)
            {
                node *n = new node;
                n->data = val;

                n->next = curr->next;
                curr->next = n;
            }

            curr = curr->next;
        }
        length++; 
    }

    void insertEND(int val)
    {
        curr = head;
        while (curr->next != NULL)
        {
            curr = curr->next;
        }
        node *n = new node;
        n->data = val;
        curr->next = n;
        n->next = NULL;
        length++;
    }

    // Remove Function

    void Remove(int pos)
    {
        curr = head;
        if (head == NULL)
        {
            cout << "LIST IS EMPTY" << endl;
        }
        else if (pos == 1)
        {
            head = head->next;
            delete curr;
        }

        else
        {
            for (int i = 1; i < pos; i++)
            {
                prev = curr;
                curr = curr->next;
            }
            prev->next = curr->next;
            delete curr;
            length--;
        }
    }
    
    void average()
    {
    
        int sum = 0;
        float average=0;
    node *curr=head;
        if (head == NULL)
        {
            cout << "list is empty" << endl;
        }
        else
        {
           
           for(int i=1;i<=length;i++)
           {
            sum=sum+curr->data;
            curr=curr->next;
           }
           cout<<"Sum is : "<<sum<<endl;
             average = (float)sum / length;
            cout << "The averge is : " << average << endl;
        }
    }

void concontate(linkedlist &l1 ,linkedlist &l2)  
{   
   node *curr = l1.head;
   while (curr->next != NULL)
   {
    curr = curr->next;
   }
   curr->next = l2.head;
   
}

    // Print function

    void print()
    {
        curr = head;
        if (head == NULL)
        {
            cout << "list is empty" << endl;
        }
        else
        {
            while (curr != NULL)
            {

                cout << curr->data << " ";
                curr = curr->next;
            }
        }
    }

};

int main()
{

    linkedlist l1;
    linkedlist l2;
    l1.insertion(2,1);
    l1.insertion(3,2);
    l1.insertion(5,3);
    l1.insertion(8,4);
   // l1.insertion(44,2);
    // l1.insertEND(7);
    // l1.insertEND(9);

    l2.insertion(66,1);

    l1.Remove(2);

    // int rand_no;
    // for (int i = 1; i <= 15; i++)
    // {
    //     rand_no = rand() % 101;
    //     l1.insertion(rand_no, i);
    // }

    
    // cout<<endl;
    // l1.average();
    l1.concontate(l1,l2);
    l1.print();

    return 0;
}
