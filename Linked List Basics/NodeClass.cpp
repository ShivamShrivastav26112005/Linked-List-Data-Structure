// Node-> 2 things 
// ex-> Node a
// 1-> value of Node a (val)
// 2-> address of (next) node b 

     // 1st vedio of ll 1 hour ke bad ka content

// #include <iostream>
// using namespace std;
// class Node // Node is a special data type like int, float, char etc.
// {
//     public:
//     int val; // current value of node 
//     Node* next; // address of the next node
// };
// int main()
// {
//     Node a;
//     a.val = 10;
//     Node b;
//     b.val = 20;
//     Node c;
//     c.val = 30;
//     Node d;
//     d.val = 40;

//     // forming linked list (ll)
//     a.next = &b; // a ke next me b ka address dal diye 
//     b.next = &c;
//     c.next = &d;
//     d.next = NULL;

// }




// Node-> 2 things present 
// ex-> Node a
// 1-> value of Node a (val)
// 2-> address of (next) node b 
// and address always store in pointers(*)





// // hmm  bar bar node a,a.val = 10, node b,b.val = 20 nhi write karenge we make a contructor

// #include <iostream>
// using namespace std;
// class Node // Linked List Node
// {
//     public:
//     int val; // value of current node
//     Node* next; // store the address of next node
//     Node(int val)  // constructor -> me hm sare variable ko dal aur nhi bhi dal sakte h default constru, parametized constru
//     {
//         this->val=val;
//         this->next=NULL;
//     }
// };
// int main()
// {
//     // 10 20 30 40

//     // this is constructor
//     Node a(10);
//     Node b(20);
//     Node c(30);
//     Node d(40);
 
//     // forming ll
//     a.next = &b;
//     b.next = &c;
//     c.next = &d;
//     d.next = NULL;

//     // check it works or not using printing something

//     cout<<a.val<<endl; // 10
//     cout<<a.next<<endl; // 0x61ff00-> random or garbage address
//     cout<<&a; // 0x61ff08-> actual address of a 




//     //cout<<a.next<<endl; // 0x61ff00-> random or garbage address
//     // so, we want to print (NULL) value in (next of node a)(address of node b)



//     // // bad method to insert NULL value in next of a 
//     // a.next=NULL;
//     // b.next=NULL;
//     // c.next=NULL;
//     // d.next=NULL;

//     // // best method 
//     // // this->next=NULL;   write in constructor


// }








// same code but write in a clean way 

// #include <iostream>
// using namespace std;
// // proper node of ll (special data type->Node)
// class Node // node class 
// {
//     public:

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
//     // constructor 
//     Node a(10);
//     Node b(20);
//     Node c(30);
//     Node d(40);
 
//     // forming ll -> linking from one node to another node
//     a.next = &b;
//     b.next = &c;
//     c.next = &d;
//     d.next = NULL;


//     // cout<<b.val<<endl; // 20


//     // Node* ptr=&b;
//     // cout<<(*ptr).val<<endl;


//     // int aa=10;
//     // int* ptr=&aa;
//     // cout<<*ptr<<endl;
//     // *ptr=20;
//     // cout<<*ptr<<endl;

//     // same as 

//     // Node* ptr=&b;
//     // cout<<(*ptr).val<<endl; // 20
//     // (*ptr).val=50;
//     // cout<<(*ptr).val<<endl; // 50
//     //         // Or
//     // ptr->val = 60;
//     // cout<<(*ptr).val<<endl; // 60
//     // cout<<b.val<<endl; // 60



// // important point 
// // (*ptr). == ptr->  use arrow (->) it is propertie in c++.


// // same as 


// cout<<(*(a.next)).val<<endl; // 20 
//        // Or
// cout<<a.next->val<<endl; // 20
// a.next->val=70;
// cout<<b.val<<endl; // 70 --->b ki value change ho gyi and print without using b 
// cout<<(a.next)->val<<endl; 
// // (a.next) - (a ka next) it is a pointer 
// // aage * se hm value ko print kar skte h  (*(a.next))


// }



#include <iostream>
using namespace std;
class Node
{
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
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
 
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = NULL;


// // Note -: Imp - : (*(a.next)). == (a.next)->
// // find the value b 
// cout<<(*(a.next)).val<<endl;
//        // Or
// cout<<(a.next)->val<<endl;

// // (a.next) -> this is address of b 
// // (*(a.next)) -> this is value of b 
// // becoz we print values using (*) dereference operator 

// // find the value of c 
// cout<<(*(*(a.next)).next).val<<endl;
// cout<<((a.next)->next)->val<<endl;

// // find the value of d
// cout<<(*(*(*(a.next)).next).next).val<<endl;
// cout<<(((a.next)->next)->next)->val<<endl;


// cout<<endl;
// cout<<endl;
// cout<<endl;


//     // node-:value,next(address of next node)
//     // node a -: Node a me node a ki value and next->means node b ki address hoga
//     // important point ******** a ke next per b ki address hai & b ki address per b ki value and next means c ka address h
//     // this is linked list 
//     cout<<(a.next)->val<<endl;

 
//     cout<<a.val<<endl; // value of a is printed -> 10
//     cout<<b.val<<endl; // b ki value print ho gti using b -> 20
//     // without using b we print the value of b -> So, Proof-> linked list 
//     cout<<(a.next)->val<<endl;
//     // print the value of c with using c and without using c 
//     cout<<c.val<<endl; // with using c
//     cout<<((a.next)->next)->val<<endl; // without using c
//     // with using b 
//     cout<<(b.next)->val<<endl;

//     // print the value of d with using d and without using d
//     cout<<d.val<<endl; // with using d 
//     // cout<<(a.next).val<<endl; ***
//     cout<<(((a.next)->next)->next)->val<<endl; // without using d 
//     // with using c we print the value of d
//     cout<<(c.next)->val<<endl;
//     // with using b we print the value d 
//     cout<<((b.next)->next)->val<<endl;


// // *********** Now we use a temp node so that a is mentain our position 
// // and mai temp node ke ander a node ko daal dunga jisse a node ki value 
// // aur next (address of next node b ) bhi aa jayega
// // and mai ab print karne ke liye temp ka use karunga




// Traversing in the linked list.

// Node temp = a;
// while(temp.next!=NULL)
// {
//     cout<<temp.val<<endl;
//     // ab temp ko b per le jana hai  
//     temp=*(temp.next); // b ki value print ho jayegi ab 
//     //(temp.next) -> address of (a and temp) also becoz pura a ab temp ke ander h 
//     // *(temp.next) -> esse hm b ki value print kar skte h (*) derefer.operator se 
// }




//         Or


// Traverse in the linked list and print all the elements present in the ll
// we make a temp node and insert node a in temp node so that node is mentain their postion 

// Node temp = a;
// while(1) // or while(true)
// // if you want that your while loop is rum infinite times then write while(1) { }
// // infinite times loop chalene se rokne ke liye we apply condition.
// {
//     cout<<temp.val<<" ";
//     if(temp.next==NULL) break;
//     temp = *(temp.next);
// }

// // 10 20 30 40




//        Or 


Node temp = a;
while(1) 
{
    cout<<temp.val<<" ";
    if(temp.next==NULL) break;
    temp = *(temp.next);
}


// another best method hota hai ll me traverse karne ka and print karne ka elements ko 
//               by using pointer which is 
// ***********  next file named NodePointer  *************



}