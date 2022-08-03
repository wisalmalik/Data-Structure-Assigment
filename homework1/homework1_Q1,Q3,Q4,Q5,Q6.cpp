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
//=====================================================QUESTION NO 4 ==================================================================================================
    // Question no 4
    void moveLastToFront()
    {
        node *per = NULL;
        node *curr1 = head;
        while (curr1->next != NULL)
        {
            per = curr1;
            curr1 = curr1->next;
        }
        per->next = NULL;
        curr1->next = head;
        head = curr1;
    }

//======================================================================QUESTION NO 6 ================================================================================
    // Question 6
    void Removeduplication()
    {
        node *curr2 = head;
        node *perv2 = NULL;
        node *temp2 = NULL;
        while (curr2->next != NULL)
        {
            perv2 = curr2;
            curr2 = curr2->next;
            if (curr2->data == perv2->data)
            {
                temp2 = curr2;
                curr2 = curr2->next;
                perv2->next = curr2;
                delete temp2;
            }
        }
    }
   // ===================================================================QUESTION NO 5 ===============================================================================
    // Question no 5
    void Palindrome(linkedlist &l1, linkedlist &l2)
    {

        node *curr1 = l1.head;
        for (int i = 1; curr1 != NULL; i++)
        {
            l2.insertion(curr1->data, i);
            curr1 = curr1->next;
        }

        node *curr = l1.head;
        node *prev = NULL, *next = NULL;

        while (curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;

        node *first = l2.head;
        node *second = l1.head;

        while (first->next != NULL)
        {
            if (first->data != second->data)
            {
                cout << "list is not palindrome" << endl;
                return;
            }
            first = first->next;
            second = second->next;
        }
        cout << "the list is palindrome" << endl;
    }
//=======================================================================================QUESTION NO 3 ================================================================
    // Question no 3
    void Split(int val)
    {
        node *curr1 = head;
        // cout <<"function call";
        if (length % 2 == 0)
        {
            // cout << "fun in the loop";
            int mid = length / 2;
            for (int i = 1; i < mid; i++)
            {
                curr1 = curr1->next;
            }
            node *n = new node;
            n->data = val;

            n->next = curr1->next;
            curr1->next = n;
        }
        else if (length % 2 != 0)
        {

            int mid = length / 2 + 1;
            for (int i = 1; i < mid; i++)
            {
                curr1 = curr1->next;
            }
            node *n = new node;
            n->data = val;

            n->next = curr1->next;
            curr1->next = n;
        }
        length++;
    }

//======================================================================= QUESTION NO 1  =============================================================================
    // question NO 1
    void Merging(linkedlist &l1, linkedlist &l2)
    {
        node *first = l1.head;
        node *second = l2.head;

        while (first->next != NULL)
        {
            first = first->next;
        }
        first->next = second;

        node *ptr = NULL;
        node *cpt = NULL;
        int temp;
        ptr = l1.head;
        while (ptr->next != NULL)
        {
            cpt = ptr->next;
            while (cpt != NULL)
            {
                if (ptr->data > cpt->data)
                {
                    temp = ptr->data;
                    ptr->data = cpt->data;
                    cpt->data = temp;
                }
                cpt = cpt->next;
            }
            ptr = ptr->next;
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

    linkedlist l1,l2;

    //======================== main for Question NO 1 ===============================================


     l1.insertion(2, 1);
     l1.insertion(70, 2);
     l1.insertion(10, 3);
     l1.insertion(8, 4);
     l1.insertion(9,5);

    //  l2.insertion(99,1);
    //  l2.insertion(98, 2);
    //  l2.insertion(97, 3);
    //  l2.insertion(96, 4);
    //  l2.insertion(95,5);
    //  cout <<endl<<"first list" <<endl;
    //  l1.print();
    //  cout <<endl<<" Second list" <<endl;
    //  l2.print();
    //  cout <<endl<<"Merge and sort function " <<endl;
    //  l1.Merging(l1,l2);
    //  l1.print();


//==================================== main for Question no 5 ========================================
    // l1.insertion(3, 1);
    // l1.insertion(2, 2);
    // l1.insertion(2, 3);
    // l1.insertion(3, 4);

    // l1.Palindrome(l1, l2);


// ======================================= main for Question no 4
    // cout <<endl<<"move last Node to first" <<endl;
    // l1. moveLastToFront();
    // l1.print();

// ========================================= main for the question  no 6 =========================================
    // l1.Removeduplication();
    // cout <<endl << "Remove duplicate "<<endl;
    // l1.print();


// ========================================== main for the question no 3
    // l1.Split(99);
    // cout <<"insert at the middle" <<endl;
    // l1.print();

    return 0;
}