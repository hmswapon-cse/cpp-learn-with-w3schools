#include<iostream>
using namespace std;
int y = 6;
void myFunction(){
    int x = 5;
    cout<<y++;
    cout<<x<<"\n";
}
int main(){
    myFunction();
    cout<<y;
    return 0;
}