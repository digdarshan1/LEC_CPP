//example of multipath inheritance
#include<iostream>
using namespace std;

class student{
    protected:
        int studID;
        char name[25];
    public:
        void getdata()
        {
            cout<<"\n Enter student ID:";
            cin>>studID;
            cout<<"\n Enter name:";
            cin>>name;
        }

void showdata()
        {
            cout<<"\n Student ID: "<<studID;
            cout<<"\n Name: "<<name;
        }
        };
        class InternalExam:virtual public student
        {
            protected:
                int marks1,marks2,marks3;
            public:
                void getdata()
                {
                    cout<<"Enter Internal marks in three subjects:";
                    cin>>marks1>>marks2>>marks3;
                }
                void showdata()
                {
                    cout<<"\n Internal Marks in Subject 1:"<<marks1;
                    cout<<"\n Internal Marks in Subject 2:"<<marks2;
                    cout<<"\n Internal Marks in Subject 3:"<<marks3;
                }
                int totInternalMarks()
                {
                    return (marks1+marks2+marks3);
                }
        };
        class ExternalExam:virtual public student
        {
            protected:
                int marks1,marks2,marks3;
            public:
                void getdata()
                {
                    cout<<"Enter External marks in three subjects:";
                    cin>>marks1>>marks2>>marks3;
                }
                void showdata()
                {
                    cout<<"\n External Marks in Subject 1:"<<marks1;
                    cout<<"\n External Marks in SUbject 2:"<<marks2;
                    cout<<"\n External Marks in Subject 3:"<<marks3;
                }
                int totExternalMarks()
                {
                    return (marks1+marks2+marks3);
                }
        };
        class result:public InternalExam,public ExternalExam
        {
            public:
                void getdata()
                {
                    InternalExam::getdata();
                    ExternalExam::getdata();
                }
                void showdata()
                {
                    InternalExam::showdata();
                    ExternalExam::showdata();
                }
                int TotalMarks()
                {
                    return (totInternalMarks()+totExternalMarks());
                }
        };
        int main()
        {
            result r;
            cout<<"Enter data for student "<<endl;
            r.getdata();
            cout<<"\n Enter marks "<<endl;
            r.getdata();
            cout<<"\n Data for the student is: "<<endl;
            r.showdata();
            cout<<"\n Total Marks= "<<r.TotalMarks();
            return 0;
        }