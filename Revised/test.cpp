#include<bits/stdc++.h>
using namespace std;

class Solution{
 public:
    // constructor
    Solution(){
        cout<<"Hello Constructor!"<<endl;
    }
};

class Node{
    public:
    int data;
    Node* next;
};
int main(){
    // Creating object
    Solution obj;

    // Second class

    Node a,b;

    a.data = 11;
    b.data = 22;

    a.next = &b;
    b.next = NULL;

    cout<<a.data<<endl;
    cout<<b.data<<endl;
    cout<<a.next<<endl;
    cout<<"Shortly Access next value:"<<a.next->data<<endl; // Access next node value
    cout<<"Access Next value:"<<(*a.next).data<<endl;
    cout<<b.next<<endl;

    return 0;

}