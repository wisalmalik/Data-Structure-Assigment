#include <iostream>
using namespace std;

class ArrayList
{
    // private member for the array
private:
    int *arr;
    int *curr;
    int length;
    int capacity;

public:
    // constructure with agrument
    ArrayList(int s)
    {
        capacity = s;
        arr = new int[capacity];
        length = 0;
        curr = NULL;
    }
    // some supporting  fuction for the array operation
    void start()
    {
        curr = arr;
    }
    void next()
    {
        curr++;
    }
    void back()
    {
        curr--;
    }
    void tail()
    {
        curr = curr + length - 1;
    }
    bool isempty()
    {
        if (length == 0){
            return true;
        };
    }
    bool isFull()
    {
        if (capacity == length)
        {
            return true;
        };
    }

    // inseration function
    void insertion(int val, int pos)
    {
        if (length == capacity)
        {
            cout << "the list is full" << endl;
            return;
        }
        if (pos < 1 || pos > (length + 1))
        {
            cout << "invaild postion " << endl;
            return;
        }
        start();
        tail();
        for (int i = length; i >= pos; i--)
        {
            *(curr = curr + 1) = *curr;
            back();
        }
        *(curr + 1) = val;
        length++;
    }


    // Inseration only value
    void insertionval(int val)
    {
        if (length == capacity)
        {
            cout << "List is full." << endl;
            return;
        }
        start();
        curr = curr + length;
        *curr = val;
        length++;
    }


    // Remove fucntion by value
    void remove(int pos)
    {
        // if (isempty())
        // {
        //     cout <<"the array is empty" <<endl;
        //     return;
        // }
        if (pos < 1 || pos >length + 1 )
        {
            cout <<"unvaild postion" <<endl;
            return;
        }
        start();
        curr = curr + pos -1;
        for (int i = pos; i < length; i++)
        {
            *curr = *(curr+1);
            next();
        }
        
        length--;
    }

    //update function
    void upadate(int val , int pos){

        if(pos <1 || pos > length +1){
            cout <<"unvaild postion "<<endl;
            return;
        }
        start();
        curr = curr+pos-1;
        *curr=val;

  
    }

    //find function
    bool find(int val){
        //check is empty
        start();
        for (int i = 1; i < length; i++)
        {
            if(*curr == val){
                cout << "The vlue is present "<<endl;
                return true;
               
            }
             next();
        }
        cout <<" the vlaue; is not present "<<endl;
        return false;
    }

    void print()
    {

        start();
        for (int i = 0; i < length; i++)
        {
            cout << *(curr + i) << "\t";
        }
    }
};

int main()
{

    ArrayList l1(5); // call the constructure with the argument

    // inseration in the list val and position

    l1.insertion(5, 1);
    l1.insertion(3, 2);
    l1.insertion(9, 3);
    l1.insertion(2, 4);
    l1.insertion(4, 5);

    // check the isempty fuction

    // l1.insertion(66,6);

    // check the wrong postion fuction

    // l1.insertion(55,-1);
    // l1.insertion(88,9);

    // Inseration only val

    // l1.insertionval(1);
    // l1.insertionval(3);
    // l1.insertionval(5);
    // l1.insertionval(166);

    // remove function by postion
    //l1.remove(5);

    //update fucntion
    //l1.upadate(55,5);

    //Find function 
    l1.find(9);

    // print fucntion
    l1.print();

    return 0;
}