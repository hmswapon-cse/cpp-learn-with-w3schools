#include<iostream>
#include<string>
using namespace std;
int main(){
    // int myInt;
    // float myFloat;
    // double myDouble;
    // char myChar;
    // bool myBool;

    // cout<<sizeof(myInt)<<"\n";
    // cout<<sizeof(myFloat)<<"\n";
    // cout<<sizeof(myDouble)<<"\n";
    // cout<<sizeof(myChar)<<"\n";
    // cout<<sizeof(myBool)<<"\n";
    
    // int* ptr = new int;
    // *ptr = 35;
    // cout<<*ptr<<"\n";

    // delete ptr;
    // cout<< *ptr;

    int numGuests;
    cout<<"How many guest? : ";
    cin>>numGuests;

    if(numGuests<=0){
        cout<<"Number of guests must be atleast 1: \n";
        return 0;
    }
    
    string* guests = new string[numGuests];
    cin.ignore();

    for(int i=0;i<numGuests;i++){
        cout<<"Enter name for guest "<<(i+1)<<": ";
        getline(cin,guests[i]);
    }

    for(int i=0;i<numGuests;i++){
        cout<<guests[i]<<"\n";
    }
    delete[] guests;
    
    
    
    
    
    return 0;
}