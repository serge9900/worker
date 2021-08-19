#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

class cv 
{
    private:
        string name;
        int salary;
        string position;
        int experience;
    public:

    cv ()
    {
        name="";
        salary=0;
        position="";
        experience=0;
    }


    void setsalary(int _salary);
    void setposition(string _position);
    void setexperience (int _experience);
    void setname(string _name);

    int getselary();
    string getposition();
    int getexperience();
    string getname();

    void print();
};