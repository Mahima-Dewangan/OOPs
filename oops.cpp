#include<bits/stdc++.h>
using namespace std;

class teacher 
{
    // properties or attributes
    public:
    string name;
    string dept;
    string subject;
    double salary;

    // methods : functions inside the class
    // memeber function : as the functions here are the members of this class
    void changeDept(string newDept) 
    {
        dept = newDept;
    }

};

int main ()
{
    teacher t1;
  

    // to access any variable of the class , we use the dot operator
    t1.name = "Mahima";
    t1.dept = " Computer Science";
    t1.subject = "C++";
    t1.salary = 25000;

    cout<<t1.name<<endl;

    return 0;
}