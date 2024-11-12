// 1st vedio of the ll esme starting ka 1 hour ka content h


// make a class and object 
// #include<iostream>
// using namespace std;
// class Student
// {
//     public:
//     int rno;
//     string name;
//     float marks;
// };
// int main()
// {
//    Student s;
//    s.rno=3;
//    s.name="Shivam";
//    s.marks=99; 
//    cout<<s.name;
// }




// #include<iostream>
// using namespace std;
// class Student
// {
//     public:
//     int rno;
//     string name;
//     float marks;
// };
// int main()
// {
//    Student s;
// //    s.rno=3;
//    s.name="Shivam";
//    s.marks=99; 
//    cout<<s.name<<endl;
//    cout<<s.rno;
// }

// // Shivam
// // 1972822384 -> garbage value
// // becoz we can't initialize our rollno.




// here we use 3 lines in main() function s.name,s.rno,s.marks.
// we also improve this by using {constructor}

// #include<iostream>
// using namespace std;
// class Student{
// public:
//     string name;
//     int rno;
//     float marks;
//     // we make constructor-> also a function and call like a normal function 
//     Student(string n, int r, float m) // Constructor
//     {
//         name=n;
//         rno=r;
//         marks=m;
//     }
// };
// int main()
// {
//    // object 
//    Student s("Shivam",76,98.5);
//    // class name -> Student 
//    // object name -> s
//    // print or access 
//    cout<<s.name<<endl;
//    cout<<s.marks;
// }

// // {Shivam} goes to constructor {n} and then n ko hmne class ke {name} me daal diya






    //    *********** Special case **********
   // use of this keyword 



// #include<iostream>
// using namespace std;
// class Student
// {
//     public:

//     int rno;
//     string name;
//     float marks;
//     // make a constructor
//     Student(int rno, string name, float marks) 
//     // we write same name in the constructor(rno)as a class name(rno)  
//     { 
//         // here computer get confused.
//         rno=rno;
//         name=name;
//         marks=marks;
//         // so we use this keyword 
//     }
// };
// int main()
// {
//    Student s(55,"Shivam",98.9);
//    cout<<s.rno<<endl;
//    cout<<s.name;
// }
// // 4199136 -> this is a garbage value 



   // use of this keyword 


// #include<iostream>
// using namespace std;
// class Student
// {
//     public:

//     int rno;
//     string name;
//     float marks;
    
//     Student(int rno, string name, float marks) 
//     { // we use this keyword 
//         this->rno=rno;
//         this->name=name;
//         this->marks=marks;
//         //  this->rno=rno; means class Student ke (rno) me Student const. ka (rno) daal do
//     }
// };
// int main()
// {
//    Student s(55,"Shivam",98.9);
//    cout<<s.rno<<endl;
//    cout<<s.name;
// }

// // 55
// // Shivam




// // very very imp -> 2nd method 
// #include<iostream>
// using namespace std;
// class Student
// {
//     public:
//     int rno;
//     string name;
//     float marks;
    
//     Student(int rno, string name, float marks) 
//     { 
//         this->rno=rno;
//         this->name=name;
//         this->marks=marks;
       
//     }
// };
// // void change(Student s)
// // {
// //     s.name="Ram";
// // }

// // same as upper change function only change Student name s to x 
// void change(Student x)  // x  name ka ek new dabba bn gya usme Shivam se Ram change hua 
// {
//     x.name="Ram";
// }
// int main()
// {
//     // ** name -> change / update 
//    Student s(55,"Shivam",98.9);
//    cout<<s.name<<endl;
// // 1st method-> name hmara change ho gya fun ke andar hi.
// //    s.name="Ram"; 
// //    cout<<s.name;

// // 2nd method -> change the name by using function .
//    change(s); // we make a fun name change for change the name Shivam to Ram 
//    cout<<s.name;
// }




// Output->
// name is not change means (it is pass by value)
// Shivam
// Shivam

// hmne koi chij change ki but vh change nhi hui means (it is pass by value)




// We take Some other integer example for our better understanding
// how works pass by value and pass by reference.

// #include<iostream>
// using namespace std;
// class Student
// {
//     public:
//     int rno;
//     string name;
//     float marks;
    
//     Student(int rno, string name, float marks) 
//     { 
//         this->rno=rno;
//         this->name=name;
//         this->marks=marks;
       
//     }
// };
// // void change(Student x)
// // {
// //     x.name="Ram";
// // }

// // void change(int x)
// // {
// //     x=5;
// // }

// void change(int &x) // x ka name kuchh bhi ho skta h yh change hoga by reference 
// {
//     x=5;
// }

// int main()
// {
  
// //    Student s(55,"Shivam",98.9);
// //    cout<<s.name<<endl;
// //    change(s); 
// //    cout<<s.name;
// int x=4;
// cout<<x<<endl;
// change(x);
// cout<<x;
// }

// // it is not change becoz it is pass by value not reference 
// // 4
// // 4

// // use -> (&) operator change -> by reference(&)
// // void change(int &x)
// // 4
// // 5



// now it is solved and our name is changed 



// #include<iostream>
// using namespace std;
// class Student
// {
//     public:
//     string name;
//     int rno;
//     float marks;
    
//     Student(string name, int rno, float marks) 
//     { 
//         this->name=name;
//         this->rno=rno;
//         this->marks=marks;
//     }
// };
// // very imp 
// void change(Student &s) // (by reference (s) send hua) and s ka name kucha bhi ho skta h
// {
//     s.name="Ram";
// }

// int main()
// {
//    Student s("Shivam",33,98.9);
//    cout<<s.name<<endl;
//    // 2nd method -> change the name by using function in the main fun
//    change(s); 
//    cout<<s.name;
// }

// // Shivam
// // Ram 


// ***************** hm classes me ( & ) ka use jada nhi karte hai ************** 
//  ******************* we use mostly pointers in classes ****************** 
/*


// 3rd method-> name ko change karne ka 3 method -> you will seen after 3 swapping program 

// if we want to swap any numbers then 
// 1st method-> by using pointers 

// #include<iostream>
// using namespace std;
// void swap(int* a, int* b)
// {
//     int temp=*a;
//     *a=*b;
//     *b=temp;
// }
// int main()
// {
//     int a=4;
//     int b=5;
//     cout<<a<<" "<<b<<endl;
//     swap(a,b);
//     cout<<a<<" "<<b;
// }
// 4 5
// 5 4


// // also swap like this 
// #include<iostream>
// using namespace std;
// void swap(int* x, int* y)
// {
//     int temp=*x;
//     *x=*y;
//     *y=temp;
// }
// int main()
// {
//     int a=4;
//     int b=5;
//     cout<<a<<" "<<b<<endl;
//     swap(a,b);
//     cout<<a<<" "<<b;
// }
// 4 5
// 5 4




// // also swap like this 
// #include<iostream>
// using namespace std;
// void swap(int* x, int* y)
// {
//     int temp=*x;
//     *x=*y;
//     *y=temp;
// }
// int main()
// {
//     int a=4;
//     int b=5;
//     cout<<a<<" "<<b<<endl;
//     // pointer (*) is used to store address (&) of another variable
//     int* x=&a;
//     int* y=&b;

//     swap(x,y);
//     cout<<a<<" "<<b;
// }
// 4 5
// 5 4


*/





// ***************** hm classes me ( & ) ka use jada nhi karte hai ************** 
//  ******************* we use mostly pointers in classes ****************** 


// 3rd method-> name ko change karne ka 3 method -> you will seen after 3 swapping program 
// by using pointers



// important code 


// (this) -: this is basically a pointer.

// #include<iostream>
// using namespace std;
// class Student
// {
//     public:
//     string name;
//     int rno;
//     float marks;
    
//     Student(string name, int rno, float marks) 
//     {  // (this) -: this is basically a pointer.
//        //  this->name=name; ==  (*this).name=name;

//        //  this->name=name; 
//             // Or 
//         (*this).name=name;
//         this->rno=rno;
//         this->marks=marks;
//     }
// };

// void change(Student &s) 
// {
//     s.name="Ram";
// }

// int main()
// {
//    Student s("Shivam",33,98.9);
//    Student* ptr=&s; // pointers which stores the address of Student s
//   //  we want to print our name without s.name or dot(.) opertor
// //    cout<<&ptr<<endl; // print address
// //    cout<<ptr<<endl; // print address
// //    cout<<*ptr.name; // it gives error use brackets 




// //     cout<<(*ptr).name<<endl; // Shivam 
// //     // we want to change the name of Shivam to Ram -> by using pointers
// //     (*ptr).name="Ram";
// //     cout<<(*ptr).name; // Ram

// // // Shivam
// // // Ram

//             // Or  

// // cout<<s.name<<endl;
// // (*ptr).name="Ram";
// // cout<<s.name<<endl;

// // // Shivam
// // // Ram

//             // Or


// //     // we want to change our rollno from 33 to 98 by using pointers 
// //     cout<<s.rno<<endl;
// //     (*ptr).rno=98;
// //     cout<<s.rno<<endl;

// // //    33
// // //    98



// // **********  (*ptr) ka ek simple technique hai (->) arrow operator (ptr->) ********
// // (*ptr).name="Ram";   ==    ptr->name="Raman";
// // (this) -: this is basically a pointer.
          
//     cout<<s.name<<endl;
//     ptr->name="Raman";
//     cout<<s.name;


// //  Shivam
// //  Raman


// /*

//         Revision of pointers (*)

// // ( * ) -> it is a dereference operator.

//    int x=5;
//    int* ptr=&x;
//    cout<<ptr<<endl;  // 0x61fecc
//    cout<<&ptr<<endl; // 0x61fecc
//    cout<<*ptr<<endl; // 5
//    // we want to change the value of x 
//    // means with the help of pointers we change the value of any variable
//    *ptr=6;
//    cout<<*ptr; // 6
 

//  */

// }

 


 
 // finally code 
 // we want to change the name by using pointer inside the main function 

//  #include<iostream>
//  using namespace std;
//  class Student{
//     public:
//     // // three attribute / variable / data members
//     // string name;
//     // int rno;
//     // float marks;

//     // // constructor
//     // Student(string name , int rno, float marks)
//     // {
//     //     this->name=name;
//     //     this->rno=rno;
//     //     this->marks=marks;
//     // }

//     string name;
//     int rno;
//     float marks;
//     // Constructor
//     Student(string n,int r, float m)
//     {
//         name=n;
//         rno=r;
//         marks=m;
//     }
//  };
//  // change fun -> it receive pointers 
//  void rename(Student* s)
//  {
//     s->name="Ram"; // s->name becoz (s) is now a pointer
//  }
//  int main()
//  {  
//     Student s("Shivam",10,100); // s name student hai
//     cout<<s.name<<endl; // print name
//     // change the name by using pointers 
//     // so we make a function
//     rename(&s); // change name fun
//     cout<<s.name; // after change print again name
//  }

// // Shivam
// // Ram 







// here we can't declare new variable of student 
// we make Student as a pointer from starting.
// if anything is a pointer then we access those by using arrow operator (->)
// we print something using (->) if it is a pointer




 #include<iostream>
 using namespace std;
 class Student{
    public:
    string name;
    int rno;
    float marks;
    Student(string name , int rno, float marks)
    {
        this->name=name;
        this->rno=rno;
        this->marks=marks;
    }
 };
 void rename(Student* s)
 {
    s->name="Ram"; 
 }
 int main()
 {  
    Student* s = new Student("Shivam",10,100); //Student is a pointer 
    cout<<s->name<<endl; // if student is a pointer then we use arrow opertor (->)
    rename(s); 
    cout<<s->name; 
 }

 // Shivam
 // Ram