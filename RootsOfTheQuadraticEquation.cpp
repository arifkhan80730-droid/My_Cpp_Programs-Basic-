#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int root1,root2,a,b,c;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"enter the value of b"<<endl;
    cin>>b;
    cout<<"enter the value of c"<<endl;
    cin>>c;
    root1=(-b+sqrt((b*b)-4*a*c))/(2*a);
    root2=(-b-sqrt((b*b)-4*a*c))/(2*a);
    cout<<"the roots of the quadratic equation are "<<root1<<" and "<<root2<<endl;
return 0;

}