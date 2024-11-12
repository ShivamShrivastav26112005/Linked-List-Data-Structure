// 1st vedio of the ll esme 1.5 hour ke aage ka content h

// #include<iostream>
// using namespace std;
// // Node Class 
// class Node{
// public:
//     int val;
//     Node* next;
//     // constructor
//     Node(int val)
//     {
//         this->val=val;
//         this->next=NULL;
//     }
// };
// int main()
// {

// //     Node a(10);
// //     Node b(20);
// //     Node c(30);
// //     Node d(40);
// //     a.next=&b;
// //     b.next=&c;
// //     c.next=&d;

// //            Or 

// // We Make a Node Pointer from starting 

// // Node* a = new Node(10);  // Node() this is by default constructor
// // Node* b = new Node(20);
// // Node* c = new Node(30);
// // Node* d = new Node(40);
// // a->next=b;
// // b->next=c;
// // c->next=d;

  
// }






                                    // same code  

// #include<iostream>
// using namespace std;
// class Node{
// public:
//     int val;
//     Node* next;
//     Node(int val)
//     {
//         this->val=val;
//         this->next=NULL;
//     }
// };
// int main()
// {
// // best way 
// Node* a = new Node(10); 
// Node* b = new Node(20);
// Node* c = new Node(30);
// Node* d = new Node(40);
// a->next=b;
// b->next=c;
// c->next=d;

// // printing value of the individuals Nodes in the ll using pointers 
// // using arrows (->) in place of (*) dereference operator.
// cout<<a->val<<endl;
// cout<<a->next->val<<endl; // a->next == b
// cout<<a->next->next->val<<endl; // a->next->next == c
// cout<<a->next->next->next->val;

// cout<<endl;

// // print all values of the ll (values of the all nodes) 
// // traversing in the linked list 
// // Display the elements of the linked list with the help of temporary node 
// // this is a function 
// Node* temp=a; // we make a Node pointer named temp which store the address of a
// while(temp!=NULL)
// {
//     cout<<temp->val<<" ";
//     temp=temp->next; // temp->next first yh calculate hogi and temp me store ho jayegi
// }
// //   10 20 30 40 


// }











// #include<iostream>
// using namespace std;
// class Node{
// public:
//     int val;
//     Node* next;
//     Node(int val)
//     {
//         this->val=val;
//         this->next=NULL;
//     }
// };
// // this display fun print all the ele. of the ll. 
// void display(Node* head)
// {
//      Node* temp = head;
//      while(temp!=NULL)
//      {
//         cout<<temp->val<<" ";
//         temp=temp->next;
//      }
// }
// int main()
// {
// Node* a = new Node(10); 
// Node* b = new Node(20);
// Node* c = new Node(30);
// Node* d = new Node(40);
// a->next=b;
// b->next=c;
// c->next=d;

// // we make a function of display and pass only our node a and print all ele. of the ll
// display(a);

// }



// // Implementation of the Node class -:

// #include<iostream>
// using namespace std;
// class Node{
//     public: 
//     int val;
//     Node* next;
//     // constructor -: as the same name as the class.
//     Node(int val){
//         this->val=val;
//         this->next=NULL;
//     }
// };
// void display(Node* head){
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->val<<" ";
//         temp=temp->next;
//     }
// }
// int main(){
//     Node* a=new Node(10);
//     Node* b=new Node(20);
//     Node* c=new Node(30);
//     Node* d=new Node(40);

//     a->next=b;
//     b->next=c;
//     c->next=d;
//     d->next=NULL;

//     // print the ele.s of the linked list 
//     // display the ele.s by passing only head of the linked list 
//     display(a);

// }
// // 10 20 30 40 




// Manual Linked List 
// delete() -> use of delete() keyword .

#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};

int main()
{
    Node* a = new Node(10); 
    Node* b = new Node(20);
    Node* c = new Node(30);

    a->next=b;
    b->next=c;
    
    // Node* h=a; // node a per h ko rakha diya 
    // delete(h); // actual me h/a node delete ho jayega
    // cout<<a->val<<endl;

    Node* temp=b;
    delete(b); // our b node is deleted 
    cout<<b->val<<endl;

}
