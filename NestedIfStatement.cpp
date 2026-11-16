#include <iostream>
using namespace std;
int main() {
int a,b,c;
cout<<"enter the value of a"<<endl;
cin>>a;
cout<<"enter the value of b"<<endl;
cin>>b;
cout<<"enter the value of c"<<endl;
cin>>c;
if(a>b && a>c){
    cout<<a<<" is the max num"<<endl;
}
else if(b>a && b>c){
    cout<<b<<" is the max num"<<endl;
}
else if(c>a && c>b){
    cout<<c<<" is the max num"<<endl;
}
else if(c==a && c==b){
    cout<<"all the numbers are equal"<<endl;
}
return 0;}