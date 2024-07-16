#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the number:"<<endl;
    cin>>n;
    
    cout<<"square of natural numbers upto"<<n<<"is"<<endl;;
    
    for(int i=1;i<=n;i++){
        cout<<" "<<(i*i*i)<<endl;
    }
    return 0;
}