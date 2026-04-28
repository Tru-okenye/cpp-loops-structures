#include <iostream>
using namespace std;

    struct students
    {
       string name;
       int age;
       string grade;
    };
int main(){
    students student;
    student.name= "joy";
    student.age=20;
    student.grade="B+";
    
    cout<< student.name <<endl << student.age <<endl << student.grade;

    return 0;
}