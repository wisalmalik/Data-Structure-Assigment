#include <iostream>
using namespace std;


struct node{
    int data;
    node *next;

};

class stack{
    private:
        node *top;
        node *temp;

    public:
        stack()
        {  
            top=NULL;
            temp=NULL;
        }
        
    void push(int val){
        if(top==NULL)
        {
        node *n=new node;
        n->data=val;
        n->next=NULL;
        top=n;
        }
        else
        {
        temp =  new node;
        temp->data=val;
        temp->next=top;
        top=temp;
        }
    }

    void pop()
    {
        if(top==NULL)
        {
            cout<<"underflow"<<endl;
        }

       else 
       {
        node *temp1;
        temp1=top;
        top=top->next;
        delete temp1;
        temp1=NULL;
       }
    
    }

    void print()
    {
    while(top!=NULL)
    {
        cout<<top->data<<endl;
        pop();
    }
    }

};

int main(){
    stack s;
    s.push(3);
    s.push(4);
    s.push(88);
    s.push(99);
    //s.pop();
    s.print();




    
    return 0;
}