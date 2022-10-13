#include<iostream>
using namespace std;
struct Node
{
    int data = 0;
    Node *next = NULL;
    Node *prev = NULL;

};
class DoublyLinkedList{
    private:
    int Length;
    Node *head;
    Node *curr,*temp;
    public:
    DoublyLinkedList(){
        head=curr=temp=NULL;
        Length = 0;
    }
    void inseration(int val , int pos){
        curr = head;
        Node *n = new Node;
        if (pos = 1)
        {
            n->data = val;
            n->next = head;
            if(head != NULL){
            head->prev = n;
            }
            head = n;
        }
        else
        {
            for (int i = 1; i < (pos-1); i++)
            {
                curr= curr->next;
            }
            n->next=curr->next;
            n->prev =curr;
        if (curr->next !=NULL)
        {
        
            n->next->prev =n;
        }
            curr->next=n;
        }
        Length ++;
        
    }

    void reverse() 
    { 
    curr = head;
    Node *temp = NULL; 

    while (curr!= NULL) 
    { 
        temp = curr->prev; 
        curr->prev = curr->next; 
        curr->next = temp;             
        curr = curr->prev; 
    } 
    if(temp != NULL ) 
        head = temp->prev; 
    } 


   

    void print(){
        curr=head;
        if(head==NULL){
        cout<<"no values in the list to print"<<endl;}

        else{
            cout<<"values in the array are"<<endl;
            while(curr!=NULL){
                cout<<curr->data<<endl;
                curr=curr->next;

            }

        }
    }

};

int main(){
    DoublyLinkedList l1;
    l1.inseration(2,1);
    l1.inseration(3,2);
    l1.inseration(66,3);
    l1.inseration(77,4);
    l1.print();
    l1.reverse();
    cout <<"Reverse of the Doubly linked list" <<endl;
    l1.print();
  //  l1.Remove(3);
   // l1.print();

    return 0;
}