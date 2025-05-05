#include<iostream>
#include<string>
using namespace std;
class student{
public:
    string myName;
    int rollno;
    void read(){
    cout<<"enter student details:"<<endl;
    cin>>myName;
    cin>>rollno;
    }
    void display(){
    cout<<"My name is:"<<myName<<endl;
    cout<<"My roll number is:"<<rollno<<endl;
    }
};
int main()
{
    student s1,s2,s3;
    s1.read();
    s2.read();
    s3.read();
    s1.display();
    s2.display();
    s3.display();
    return 0;
}
