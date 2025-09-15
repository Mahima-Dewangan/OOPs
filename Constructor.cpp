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

    // constructor
    Teacher()
    {
        cout<<"Hi , I am a constructor";
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
};

int main()
{
    Teacher t1;

}