#include<iostream>
#include "Person.h"
using namespace std;
void Person::getdata(){
    cout<<"enter name:";
    cin>>name;
    cout<<"enter age:";
    cin>>age;
}
void Person::display(){
    cout<<"\nName:"<<name;
    cout<<"\nAge:"<<age;
}