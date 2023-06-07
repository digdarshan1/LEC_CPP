#include<iostream>
using namespace std;
class sathiharu{
    public:
    string name;
    string address;
    int age;
    sathiharu(){
        cout<<""
    }
    //constructor same name as class name 
    public:
      void ghumneprogram(){
        cout<<"oi espali ghumna jane bujhis"<<name<<"umm"<<age<<"ko umer ma hike garna sakinxa masta";
      }
};
int main(){
    sathiharu s1;
    s1.name = "pravhat";
    s1.age =20;
    s1.address ="kathmandu";
    s1.ghumneprogram();
    
    return 0;
}
