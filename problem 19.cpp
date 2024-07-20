#include<iostream>
using namespace std;

int main(){
    int n;
    int factorial=1;
    cout<<"enter any positive integer:"<<endl;
    cin>>n;
    
    if(n<0){
        cout<<"factorial of nagative number does not exist"<<endl;;
    }
    else
    {
        for(int i=1;i<=n;++i){
            factorial=factorial*i;
        }
        cout<<"factorial of"<<n<<"is:"<<factorial<<endl;
    }
    return 0;
}