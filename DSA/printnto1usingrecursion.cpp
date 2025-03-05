#include<iostream>
using namespace std;
void sum(int a){
    if(a==0) return;
    cout<<a<<endl;
    sum(a-1);

}
int main(){
    int a;
    cout<<"enter the value a: ";
    cin>>a;
    sum(a);
}