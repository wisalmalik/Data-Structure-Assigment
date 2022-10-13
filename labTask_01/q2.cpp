#include<iostream>
using namespace std;

void intersact(){
    int size;
    char c;
    int duplicate=0;
    string *p;
    string *q;
    string *r;
    string *s;
    cout<<"Enter size of array";
    cin>>size;
    string *array1 = new string [size];
    string *array2 = new string [size];
    string *array3 = new string [size];
    p=array1;

    cout<<"Enter Charcter in array  1"<<endl;

    for(int i=0;i<size;i++){

        cin>>c;
        *p=c;
        p++;

    } 
    p=array2;
    cout<<"Enter Charcter in array  2"<<endl;

    for(int i=0;i<size;i++){

        cin>>c;
        *p=c;
        p++;

    } 

    p=array1;
    q=array2;
    r=array3;
    s=array3;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){

            if(*p==*q){
                for(int k=0;k<sizeof(array3);k++){
                    if((*s!=*q)){
                        *r=*q;
                    }
                    s++;
                }
                r++;
                s=array3;
            }
             q++;


    }
    p++;
    q=array2;

    }
    r=array3;
    cout<<"Array 3 Elements:"<<endl;
    for(int i=0;i<size;i++){

        cout<<*r;
        r++;

    } 

    
}
int main(){
    intersact();
}