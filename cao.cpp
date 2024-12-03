#include <iostream>
#include <string>
#include <cmath>
using namespace  std;
class student{
    private:
        string name;
        int rollno ;
        float total ;
        float perc ;
    public:
        void getdetails(void);
        void putdetails(void);
        
};
void student::putdetails(void)
{
    cout <<"Enter name : ";
    getline(cin,name);
    cout << "Enter rollno : ";
    cin >> rollno;
    cout << "Enter total marks out of 500 : ";
    cin >> total;
    
};
void student::getdetails(void)
{
    cout<<"student details : " << endl;
    cout << "your name is : " << name << endl;
    cout << "Your roll no is " << rollno << endl;
    cout << "total marks : " << total << endl;
    
    perc = total/500*100;
    cout << "your percentage is : " << perc ;
    
};
int main()
{
    student s1;
    s1.putdetails();
    s1.getdetails();
    return 0;
}