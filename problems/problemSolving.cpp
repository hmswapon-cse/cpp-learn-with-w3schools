#include<iostream>
using namespace std;
class EvenOddCheck{
public:
    int  n;
    void evenOrOdd(){
        cout<<"Type n? :";
        cin>>n;

        if(n%2==0){
            cout<<"Even";
        }else{
            cout<<"Odd";
        }
    }

};
int main(){
    EvenOddCheck evenOddObj;
    evenOddObj.evenOrOdd();
    return 0;
}