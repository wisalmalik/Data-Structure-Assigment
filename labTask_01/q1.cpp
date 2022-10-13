#include<iostream>
using namespace std;
int Largest_Numb(int *s){
    int max=*s;
    int *p=s+1;
    for(int i=1;i<6;i++){
        if(*p>max){
            max=*p;
        }
        p++;
    }
    return max;
}

int Smallest_Numb(int *s){
    int min=*s;
    int *p=s+1;
    for(int i=1;i<6;i++){
        if(*p<min){
            min=*p;
        }
        p++;
    }
    return min;
}
int main(){
    int *s;
    int array[6]={2,8,4,3,10,5};
    s=array;
    int min=Smallest_Numb(s);
    int max=Largest_Numb(s);
    cout<<"Min = "<<min<<endl;
    cout<<"Max = "<<max;
}