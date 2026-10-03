#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node *next;

    Node(int data1 ,Node *next1){
        data=data1;
        next=next1;
    }
};

Node *convert_array_to_ll(vector <int> arr){
    Node *head=new Node(arr[0],nullptr);
    int n=arr.size();
    Node *last=new Node(arr[n-1],head);
    Node *mover=head;

    for(int i=1;i<n-1;i++){
        Node * temp = mover;
        Node *mover=new Node(arr[i],nullptr);
        mover=temp->next;
        temp->next=mover;
        
      }
        mover -> next = last;
      return head;
}

void print(Node *head){
    Node *temp=head;
    while(temp->next!=head){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}

int main(){
    vector <int> arr={1,2,3,4,5,6,7};
    Node *head=convert_array_to_ll(arr);
    Node *temp=head;
    print(head);
}