#include<iostream>
using namespace std;

class Vehicle{
    private:
          int platenumber;
    public:
    // int getnumber(){
    //     cout<<"enter the number of scooter:";
    //     cin>>platenumber;
    //     return platenumber;
    Vehicle(int pnum){
        platenumber = pnum;
        cout<<"the value of plate number is :"<<platenumber;
    }
    }      
};

int main(){
    Vehicle scooter(8856);
    // scooter.getnumber();
    // return 0;
    //cout<<"plate number of my scooter is :"<<scooter.platenumber;
    //platenumber =123;
    //getnumber
}


