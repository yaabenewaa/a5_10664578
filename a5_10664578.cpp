#include <iostream>
#include <fstream>
using namespace std;

struct student{
int ID;
string name;
int age;
char grade;
string gender;
int score;

};

int main()
{

    ofstream ganyo;
    ganyo.open("message.txt");

    double avgAge, avgScore;

    ganyo<<"ID"<< "name"<<"age"<< "gender"<<"grade"<< "score"<< endl;

    student sample [5];

    for( int a=0; a<5; a++)
    {
        cout<<"Enter Student ID"<< endl;
        cin>> sample[a].ID;

        cout<< "Enter name"<< endl;
        cin>> sample[a].name;

        cout<<"Enter Age"<< endl;
        cin>> sample [a].age;

        cout<< "Enter grade"<<endl;
        cin>> sample[a].grade;

        cout<<"Enter gender"<<endl;
        cin>> sample[a].gender;

        cout<<"Enter Score"<< endl;
        cin>> sample[a].score;

        cout<<endl<<endl;

        if( sample[a].score>=80 && sample[a].score<=100){
            sample[a].grade='A';
        } else if (sample[a].score>=70 && sample[a].score <=79){
            sample[a].grade='B';
        } else if (sample[a].score>=60 && sample[a].score<=69){
            sample[a].grade='C';
        } else if ( sample[a].score>=50 && sample[a].score<=59){
            sample[a].grade='D';
        } else if ( sample[a].score>=40 && sample[a].score<=49){
            sample[a].grade='E';
        } else if ( sample[a].score>=0 && sample[a].score<=39){
            sample[a].grade='F';
        }

    ganyo<<a=1<<". "<<sample[a].ID<<" "<<sample[a].name<<" "<<sample[a].gender<<" "<<sample[a].age<<" "<<sample[a].score<<endl;

    }
}

    ganyo<<"average age= "<<avgAge/5<<endl;
    ganyo<<"average score= "<<avgScore/5<< endl;

    return 0;
}

}
