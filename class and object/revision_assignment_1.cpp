#include<iostream>
using namespace std;
class friends{
    public:
    char name[20];
    char address[20];
    char number[10];

    void getdata()
    {

       cout<<"enter the name :";
       cin>>name;
       
       cout<<"enter your address:";
       cin>> address;

       cout<<"enter your number";
       cin>>number;  
    }
    void showdata()
    {

        cout<<"the name is :"<<name<<endl;
        cout<<"the address is :"<<address<<endl;
        cout<<"the phone number is :"<<number<<endl;
    }
};
int main()
{
    friends f1,f2,f3;
    f1.getdata();
    f1.showdata();
    f2.getdata();
    f2.showdata();
    f3.getdata();
    f3.showdata();

return 0;
}