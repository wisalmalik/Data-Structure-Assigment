#include <iostream>
using namespace std;

struct node
{
    char data;
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
//======================================================= QUESTION NO 2 ===========================================================================
    void reverseCopy(linkedlist &l1, linkedlist &l2)
    {
        
        node* curr = l1.head;
        node *prev = NULL, *next = NULL;
  
        while (curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;

         node *curr2 = l1.head;
         for (int i = 1; curr2 !=NULL; i++)
         {
            l2.insertion(curr2->data,i);
            curr2 = curr2->next;
         }
    }
    
        
    
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
    linkedlist l1 , l2;
     l1.insertion('a', 1);
     l1.insertion('b', 2);
     l1.insertion('c', 3);
     l1.insertion('d', 4);
     l1.insertion('e', 5);
     l1.insertion('f', 6);
     l1.insertion('g', 7);
     l1.insertion('h', 8);
     l1.insertion('i', 9);
     l1.insertion('j',10);

    cout <<endl<<"The first list in normal order" <<endl; 
    l1.print();

    cout<<"The second list in the revese order "<<endl;
     l1.reverseCopy(l1,l2);

     l2.print();

    return 0;
}