#include<iostream>
using namespace std;

struct node {
int data;
node *next;

node(int val){
    data = val;
    next = NULL;
}
};

class linklist{
    private:
    node *head;
    int lenght ;
    public:
    linklist(){
        head = NULL;
        lenght = 0;
    }
    
void inseration(int val, int pos){
    node *n = new node(val); // make new node
    if (pos == 1)
    {
        n->next=head;
        head = n;
        lenght ++;
    }
    else
    {   
        node *curr = head;
        for (int i = 1; i < (pos -1); i++)
        {
            curr = curr->next;
        }
         n-> next = curr->next;
        curr->next = n;

        lenght++;

    }
    
}
void remove(int pos){
    if (pos == 1)
    {
        node *curr = head;
        head=head->next;
        delete curr;

    }
 
    else{
        node *curr = head;
        node *pre = NULL;
        for (int i = 0; i < pos; i++)
        {
            pre = curr;
            curr = curr->next;
        }
        pre->next = curr->next;
        delete curr;
        
    }
}

};


int main(){

    return 0;
}