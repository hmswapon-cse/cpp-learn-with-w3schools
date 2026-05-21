#include<iostream>
#include<string>
using namespace std;

int main(){
    // int number;
    // cout<<"Enter a number: ";
    // while(!(cin>>number)){
    //     cout<<"Invalid input. Try again: ";
    //     cin.clear();
    //     cin.ignore(10000, '\n');
    // }
    
    // cout<<"You entered: "<<number;

    // int number;
    // do{
    //     cout<<"Choose a number between 1 and  5: ";
    //     cin>>number;
    // }while(number<1 || number>5);
    // cout<<"You chose: "<<number;

    string name;
    do{
        cout<<"Enter your name: ";
        getline(cin, name);
    }while(name.empty());
    cout<<"Hello, "<<name;

    return 0;
}