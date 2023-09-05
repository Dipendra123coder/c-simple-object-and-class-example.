#include<iostream>
using namespace std;
class Student{
public:
    string name;
    int age;
    int roll;
    student(string n,int a,int r){
    name=n;
    age=a;
    roll=r;
    }
    void set_info(){
    cout<<"enter your name"<<endl;
    cin>>name;
    cout<<"enter your age:"<<endl;
    cin>>age;
    cout<<"enter your roll"<<endl;
    cin>>roll;

    }
    void show_info(){
    cout<<"name is :"<<name<<endl;
    cout<<"roll is:"<<roll<<endl;
    cout<<"age is:"<<age<<endl;


    }
    void take(){
    if(roll==age){
        cout<<"you  are lucky";
    }
    else
        cout<<"you are unlucky";

    }

    };
    int main() {
        Student s;
         s.(string n, int age, int roll);
        s.show_info();

        s.take();
        return 0;



             }
