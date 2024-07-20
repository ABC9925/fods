#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"enter any number"<<endl;
    cin>>a;
    
    if(a%3==0 && a%5==0){
        cout<<"is divisible by 3 and 5"<<endl;
    }
    else{
        cout<<"is not divisible by 3 and 5"<<endl;
    }
    return 0;
}