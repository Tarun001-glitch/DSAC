#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int val){
    this->data=val;
    this->next=NULL;

    }


};
// class List{
// public:
// Node* head;
// Node* tail;
// List(){
//     head=tail=NULL;
// }

    void push_head(Node* &head,int data){
        
        Node* newNode=new Node(data);
        newNode-> next=head;
        head=newNode;
    }
    void print( Node* head){
        Node* temp= head;
        while(temp!=NULL){
            cout<< temp->data<<"->";
            temp=temp->next;

        }
        cout<< "NULL"<<endl;

    }
int main(){
    Node* node4=new Node(10);
    cout<<node4->data<<" "<<node4->next<<endl;
    push_head(node4,50);
    print(node4);
     
     
    return 0;
}
