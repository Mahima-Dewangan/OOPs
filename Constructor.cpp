#include<bits/stdc++.h>
using namespace std;

class Teacher
{
    private :
    double salary;

    public:
    string name;
    string subject;
    string dept;

    // constructor  : non- parameterized constructor
    Teacher()
    {
        // cout<<"Hi , I am a constructor";

        // Now , we want to set the department as computer science for each teacher
        dept = "Computer Science";
    }


    // parameterized constructor
    // Teacher(string n , string d , string s , double sal)
    // {
    //     name = n;
    //     dept = d;
    //     subject = s;
    //     salary = sal;
    // }


    // this pointer 
    Teacher(string name , string dept , string subject , double salary)
    {
        this->name = name ; //this->name : points to the object's name , and RHS name points to the constructor's parameter name
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }


    // copy constructor
    Teacher (Teacher &obj)
    {
        cout<<"I am a custom copy constructor";
        this->name = obj.name;
        this->dept = obj.dept;
        this->subject = obj.subject;
        this->salary = obj.salary;
    }

    // setter function
    void setSalary(double s)
    {
        salary = s;
    }

    // getter function
    double getSalary()
    {
        return salary ;
    }

    void getInfo(){
        cout<<"name : "<<name<<endl;
        cout<<"subject : "<<subject<<endl;
    }
};

int main()
{
    Teacher t1; //constructor call
    cout<<t1.dept<<endl;

    Teacher t2("Mahima" , "Computer Science" , "C++" , 25000);
    t2.getInfo();

    Teacher t3(t2); //custom copy constructor gets invoked
     

}