#include<bits/stdc++.h>
using namespace std;
// Polymorphism

// COMPILE TIME POLYMORPHISM

// Example of compile time  Polymorphism : Constructor Overloading

// class Student
// {
//     public:
//     int age;
//     string name;
    

//     // non- parameterized constructor
//     Student()
//     {
//         cout<<"This is a non parameterized constructor\n";
//     }

//     Student(string name)
//     {
//         this->name = name;
//     }
// };

 
// int main()
// {
//     // Student S1;
//     Student S2("Yuvi");
//     cout<<S2.name;
//     return 0;
// }



// FUNCTION OVERLOADING : Example of compile time polymorphism
/*
   Function overloading differs in the way of different type of  parameters or 
   different no of parameters 
*/

// Different type of parameters

// class Print
// {
//     public:
//     void show(int x)
//     {
//         cout<<"\nthe integer value is : "<<x;
//     }

//     void show(string s)
//     {
//         cout<<"\nthe string value is : "<<s;
//     }
// };

// int main()
// {
//     Print P ;
//     P.show(40);
//     P.show("Neha");
// }


// Different no of parameters

// class Shapes
// {
//     public:

//     void area(int x , int y)
//     {
//         cout<<"\nthe area of the rectangle is : "<<x*y;
//     }

//     void area(double r)
//     {
//         double circle = 1.4 * r*r;
//         cout<<"\n the area of the circle is : "<<circle;
//     }

//     void area(int x)
//     {
//         cout<<"\nthe area of the square is : "<<x*x;
//     }
// };

// int main()
// {
//     Shapes S;
//     S.area(5 , 6);
//     S.area(8.9);
//     S.area(7);
//     return 0;
// }



// RUN TIME POLYMORPHISM 

// Example 1 : Function Overriding 

class Parent {
    public:
   void  getinfo()
    {
        cout<<"parent class \n";
    }
};

class Child : public Parent {
     public:
     void getinfo()
     {
        cout<<"child class\n";
     }

};

int main()
{
    Child c1;
    c1.getinfo();

    Parent p1;
    p1.getinfo();
    return 0;     

}

// Example : Virtual Functions 
class Parent {
    public:
    virtual void  getinfo()
    {
        cout<<"parent class \n";
    }
};

class Child : public Parent {
     public:
     void getinfo()
     {
        cout<<"child class\n";
     }

};

int main()
{
    Child c1;
    c1.getinfo();

    Parent p1;
    p1.getinfo();
    return 0;     

}