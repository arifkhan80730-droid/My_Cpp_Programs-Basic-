#include<iostream>
using namespace std;
int main(){
    int n,r,sum=0,temp;
    cout<<"enter the value of n:"<<endl;
    cin>>n;
    temp=n;
    while(n>0){
        r=n%10;
        n=n/10;
        sum=sum+(r*r*r);
    }
    if(sum==temp){
        cout<<"the number is an armstrong number"<<endl;
    }
    else{
        cout<<"the number is not an armstrong number"<<endl;
    }
    return 0;
}