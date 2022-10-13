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

 void removeduplicate(){
        curr=head;
        Node*temp1 =NULL;
        Node *del=NULL;

       
        for (int i = 1; curr !=NULL; i++)
        {
            temp1=curr->next;
            for(int j = 1; temp1 !=NULL; j++){
                
                if(curr->data==temp1->data){
                     del=temp1;
                   temp1->prev->next=temp1->next;
                   if(temp1->next!=NULL){
                   temp1->next->prev=temp1->prev;
                   temp1=temp1->prev;
                   delete del;
                   Length--;
                }
                
            }
            temp1=temp1->next;
            
        }
        
        curr=curr->next;

    }
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
        l1.inseration(5,1);
        l1.inseration(8,2);
        l1.inseration(9,3);
        l1.inseration(6,4);
        l1.inseration(9,5);
        l1.inseration(8,6);
        l1.inseration(5,7);
        l1.inseration(8,8);
        l1.inseration(6,9);
        l1.print();
        l1.removeduplicate();
        l1.print();


}