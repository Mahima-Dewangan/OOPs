#include<bits/stdc++.h>
using namespace std;

// ABSTRACTION
class Shape {
   public :
   virtual void draw() =0; //pure virtual function , whose value is assigned as value 0
                        // a class which contains a pure virtual function automatically 
                        // becomes an abstract class 

};

class Circle : public Shape {
    public:
        void draw()
        {
            cout<<"drawing a circle\n";
        }
};



int main()
{
    Circle c1;
    c1.draw();
    return 0;
   
}

