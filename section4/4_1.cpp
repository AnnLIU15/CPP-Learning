/**
 * @Author: ZhaoYang
 * @Date:   2021-03-31 14:07:49
 * @Last Modified by:   ZhaoYang
 * @Last Modified time: 2021-03-31 17:06:59
 */
#include <iostream>
#include<string>
using namespace std;
struct studentInfo
{
    /* data */
    int age;
    string firstname;
    string lastname;
    char grade;

};



int main(int argc, char const *argv[])
{
    /* code */
    studentInfo firstStudent;
    cout<<"What is the first name? ";
    cin>>firstStudent.firstname;
    cout<<"What is the last name? ";
    cin>>firstStudent.lastname;
    cout<<"What letter grade do you deserve? ";
    cin>>firstStudent.grade;
    cout<<"What is you age? ";
    cin>>firstStudent.age;
    cout<<"Name: "<<firstStudent.lastname<<","
        <<firstStudent.firstname<<"\nGrade: "
        <<char(firstStudent.grade+1)
        <<"\nAge: "<<firstStudent.age;
    return 0;
}

struct studentInfo
{
    /* data */
    int age;
    string firstname;
    string lastname;
    char grade;

};