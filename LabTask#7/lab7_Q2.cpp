#include<iostream>
using namespace std;
int multiply(int x,int y){
    
   
    if(y==1){
        return x;
    }
        return x+multiply(x,y-1);
}


int main(){
    int a,b;
    cout<<"enter the value of a : "<<endl;
    cin>>a;
    cout<<"enter the value of b : "<<endl;
    cin>>b;
    cout<<multiply(a,b)<<endl;


}