#include<iostream>
using namespace std;
class student{
    public:
    float marks;
    double marks;
    void getdata()
    {int m;
       cout<<"enter the marks of the student:";
       marks=m;
       cin>>marks;
    }
};
void claculateAverage (student s1,student s2)
{
    double average,sum;
    sum=s1.marks+s2.marks;
    average=sum/2
};
int main()
{
    student s1,s2;
    double avg = calculateAverage(s1,s2);

    cout<<"the average is :"<<avg<<endl;
    return 0;
}
