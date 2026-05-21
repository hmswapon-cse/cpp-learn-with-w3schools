#include<iostream>
using namespace std;
class FindLargeNumber{
public:
    int  a, b,c;
    void inputData(){
        cout<<"What is a? : ";
        cin>>a;
        cout<<"What is b? : ";
        cin>>b;
        cout<<"What is c? : ";
        cin>>c;
    }
    void findLargeNumber(){
        if(a>=b && a>=c){
            cout<<a;
        }else if(b>=a && b>=c){
            cout<<b;
        }else{
            cout<<c;
        }
    }

};
int main(){
   FindLargeNumber findLargeNumberObj;
   findLargeNumberObj.inputData();
   findLargeNumberObj.findLargeNumber();

   return 0;
}