#include "worker_header.hpp"

void cv::setsalary(int _salary){
        salary= _salary;
}

void cv::setposition(string _position){
        position = _position;
}

void cv::setexperience (int _experience){
    experience = _experience;
}

void cv::setname(string _name){
    name = _name;
}

int cv::getselary(){
    return salary;
}

string cv::getposition(){
    return position;
}

int cv::getexperience(){
    return experience;
}

string cv::getname(){
    return name;
}
void cv::print()
    {
        cout<<"Name:\t\t"<<this->name<<endl;
        cout<<"Salary:\t\t$"<<this->salary<<endl;
        cout<<"Position:\t"<<this->position<<endl;
        cout<<"Experiance:\t"<<this->experience<<" years"<<endl<<endl;
    }