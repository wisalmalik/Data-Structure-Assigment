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
     void split(){
    DoublyLinkedList l2,l3;
    curr=head;
    for(int i=1; i<=Length; i++){

        if(curr->data%2==0){
           l3.inseration(curr->data,i);
         
        }
        else{
            l2.inseration(curr->data,i);
          
        }
        curr=curr->next;
    }
    cout<<"l2 is :"<<endl;
      l2.print();
    cout<<"l3 is :"<<endl;
      l3.print();
   }



  void print(){
        curr=head;
        if(head==NULL){
        cout<<"no values in the list to print"<<endl;}

        else{
            
            for(int i=1;i<=Length;i++){
                cout<<curr->data<<endl;
                curr=curr->next;

            }
    
        }

  }

};

int main(){

    DoublyLinkedList l1;
    l1.inseration(1,1);
    l1.inseration(2,2);
    l1.inseration(2,3);
    l1.inseration(3,4);
    l1.inseration(5,5);
    l1.inseration(6,6);
    l1.inseration(7,7);
    l1.inseration(9,8);
    l1.inseration(11,9);
    l1.inseration(12,10);
    cout<<"values in the list are"<<endl;
    l1.print();
    cout<<endl;
    l1.split();


}
