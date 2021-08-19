#include "worker_header.hpp"

int main(){
    srand(time(NULL));
    
    int salaryMax;
    cout<<"********************************************"<<endl;
    cout<<"*\t"; cout<<"salary max:\t";  cout<<"\t*\t"; cin>>salaryMax;
    cout<<"********************************************"<<endl;

    int exprienceMin;
    cout<<"********************************************"<<endl;
    cout<<"*\t"; cout<<"experiance min:\t";  cout<<"\t*\t"; cin>>exprienceMin;
    cout<<"********************************************"<<endl;

    cout << "\n\t****************************************";
    cout << "\n\t* THE RESULT AFTER CHECKING CV SOURCES *";
    cout << "\n\t****************************************\n\n";

    string names[10] = {
                        " Oliver Davis " ,
                        " Isabella Wilson " ,
                        " Charlotte Thompson " , 
                        " Aiden Lewis " ,
                        " Luna Nguyen " ,
                        " Magnolia Miller " ,
                        " Ember Gonzales " ,
                        " Holly Lee " ,
                        " Mimi Moore " ,
                        " Evelyn Carter "
                      };

    string positions[6] = { "QA",
                            "Front End",
                            "Data Analyst",
                            "Mobile App Developer",
                            "DevOps Engineer",
                            "Machine Learning Engineer"
                          };
    
    cv cv_list[10];
    int none_list =0;
    for (int i = 0; i < 10; i++){

        cv_list[i].setname(names[i]);
        cv_list[i].setsalary(rand()%1000+100);
        cv_list[i].setposition(positions[rand()%6]);
        cv_list[i].setexperience(rand()%20);
        if(cv_list[i].getselary() <= salaryMax && cv_list[i].getexperience() >= exprienceMin){
            cv_list[i].print();
            none_list ++;
        }
    }
        if (none_list ==0){
            cout<<"\n\t*********************************";
            cout<<"\n\t * sorry, we didn't find anyone *";
            cout<<"\n\t*********************************\n\n"<<endl;

        }
    return 0;
}