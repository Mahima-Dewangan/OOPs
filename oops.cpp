#include<bits/stdc++.h>
using namespace std;

class teacher 
{
    // properties or attributes
    private:
    double salary;

    public:
    string name;
    string dept;
    string subject;
    
    // methods : functions inside the class
    // memeber function : as the functions here are the members of this class
    void changeDept(string newDept) 
    {
        dept = newDept;
    }

    // setter function : basically used to set the value of the private variable
    void setSalary(double s )
    {
        salary = s;
    }

    // getter : basically used to get the value of the private variable 
    double getSalary(){
        return salary;
    }

};

int main ()
{
    teacher t1;
  

    // to access any variable of the class , we use the dot operator
    t1.name = "Mahima";
    t1.dept = " Computer Science";
    t1.subject = "C++";
    t1.setSalary(25000);  // the setter function is the public method 


    cout<<t1.name<<endl;
    cout<<t1.getSalary()<<endl;   ///the getter function is the public method using which we can access the variable salary. 

    return 0;
}