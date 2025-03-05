#include<iostream>
using namespace std;
void sum(int a){
    if(a==0) return;
    sum(a-1);
    cout<<a<<endl;
}
int main(){
    int a;
    cout<<"enter the value a: ";
    cin>>a;
    sum(a);
}