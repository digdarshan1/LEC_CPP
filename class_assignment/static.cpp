#include<iostream>
using namespace std;
void display(){
int static i=1;
i=i+5;
cout<<i<<endl;

}
int main(){
 display();
 display();
}