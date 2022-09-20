#include<iostream>
#include<string.h>
using namespace std;
class Student
{
    private:
        int age,roll,Class;
        char name[20];
    public:
        Student()
        {
            strcpy(name,"Raj");
            age=15;
            roll=14;
            Class=10;
        }
        void setdetails(char n[20],int cl,int r,int a)
        {
            strcpy(name,n);
            age=a;
            roll=r;
            Class=cl;
        }
        void displayDetails()
        {
            cout<<"Name="<<name<<endl;
            cout<<"Class="<<Class<<endl;
            cout<<"Age="<<age<<endl;
            cout<<"Roll no.="<<roll<<endl;
        }
};
int main()
{
    Student s1;
    s1.displayDetails();
    //s1.setdetails("Amit",8,22,13);  // 1 warning generated:- ISO C++ forbids converting a string constant to 'char*'
    return 0;
}