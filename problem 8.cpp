#include<iostream>
using namespace std;

int main(){
    int num1,num2,num3,smallest;
    cout<<"enter num1:"<<endl;
    cin>>num1;
    
    cout<<"enter num2:"<<endl;
    cin>>num2;
    
    cout<<"enter num3:"<<endl;
    cin>>num3;
    
    smallest=num1;
    
    if(num2<smallest){
        smallest=num2;
    }
    if(num3<smallest){
        smallest=num3;
    }
    cout<<"smallest number is:"<<smallest;
    return 0;
}