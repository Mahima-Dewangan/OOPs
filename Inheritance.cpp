#include<bits/stdc++.h>
using namespace std;

// class Person {
//     public:
//     string name;
//     int age;

  
//     Person()
//     {
//         cout<<"parent constructor \n";

//     }
// };

// class Student : public Person      : Single Inheritance
// {    
//     // name , age , rollno

//     public:
//     int rollno;

//     Student()
//     {
//         cout<<"child constructor..\n";

//     }

//     void getInfo()
//     {
//         cout<<" name : "<< name << endl;
//         cout<<" age : "<<age <<endl;
//         cout<<" rollno : "<<rollno<<endl;
//     }
// };

// int main()
// {
//     Student s1;
//     s1.name = "Raj shah";
//     s1.age = 23;
//     s1.rollno = 1234;

//     s1.getInfo();
//     return 0;

// }



// let's see how the parameterized constructor works 

// class Person
// {
//     public:
//     string name;
//     int age;

//     Person(string name , int age)
//     {
//         this->name = name;
//         this->age = age;

//     }

// };

// class Student : public Person
// {
//     public:
//     int rollno;

//     Student(string name , int age , int rollno) : Person(name , age)
//     {
//             this->rollno = rollno;
//     }
// };

// int main()
// {
    
//      Student s1("Raha" , 14 , 1234);
// }



// Types of Inheritance 

// 2.Multi - level Inheritance 

// class Person
// {
//     public:
//     string name;
//     int age;
// };


// class Student : public Person
// {
//     public:
//     int rollno;
// };

// class GradStudent: public Student 
// {
//     public:
//     string researchArea;
// };

// int main()
// {
//     GradStudent s1;
//     s1.name = "shu zi";
//     s1.researchArea = "Data Partition";

//     cout<<s1.name<<endl;
//     cout<<s1.researchArea<<endl;
//     return 0;
// }


// 3. Multiple Inheritance 

// class Student
// {
//     public:
//     string name;
//     int rollno;
// };

// class Teacher
// {
//     public:
//     string subject;
//     double salary;
// };

// class TA : public Student , public Teacher
// {

// };

// int main()
// {
//     TA t;
//     t.name = "Raahi";
//     t.salary = 15000;
//     cout<<t.name<<endl;
//     cout<<t.salary<<endl;
// }

// 4.Hierarchical Inheritance

// class Person
// {
//     public:
//     string name;
//     int age;
// };

// class Student : public Person
// {
//     public :
//     int rollno;
// };

// class Teacher : public Person
// {
//     public:
//     string subject;
// };

// int main()
// {
//     Student S;
//     S.name ="Sunaina";
//     S.rollno = 123;

//     Teacher T;
//     T.name = "Rakhi";
//     T.subject= "Mathematics";

//     cout<<S.name<<endl;
//     cout<<S.rollno<<endl;

//     cout<<T.name<<endl;
//     cout<<T.subject<<endl;


//     return 0;
// }



// 5.Hybrid Inheritance

class Person 
{
    public:
    int age;
    string name;
};
