#include <iostream>
using namespace std;
int main (){
    float base,height,area;
    cout<<"enter the height of the triangle"<<endl;
    cin>>height;
    cout<<"enter the base of the triangle"<<endl;
    cin>>base;
    area=(base*height)/2;
    cout<<"the are of the triangle is "<<area<<endl;
}
//program to find the area of the triangle using typecasting for above program
/*int main(){
    
    int base=7,height=5;
    float area;
    area=(float)(base*height)/2;
    cout<<"the area of the triangle is "<<area<<endl;
    return 0;
}*/