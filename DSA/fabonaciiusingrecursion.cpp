#include<iostream>
using namespace std;
int fab(int a){
     if(a==1 || a==2) return 1;
     return fab(a-1) + fab(a-2);
}
int main(){
    int a;
    cout<<"enter a: ";
    cin>>a;
    cout<<fab(a);
}
