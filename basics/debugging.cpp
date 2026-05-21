#include<iostream>
using namespace std;
int main(){
    // int x = 10;
    // int y = 0;
    // int z = x/y;
    // cout<<z;
    //program crash

    // try{
    //     throw 505;
    // }
    // catch (int errorCode){
    //     cout<<"Error occured: "<<errorCode;
    // }

    // try{
    //     int age = 15;
    //     if(age>=18){
    //         cout<<"Access granted - you are old  enough.";
    //     }else{
    //         throw(age);
    //     }
    // }
    // catch(int myNum){
    //     cout<<"Access denied - You must be at least 18 years old. \n";
    //     cout<<"Age is: "<<myNum;
    // }

    // try{
    //     int age = 15;
    //     if(age>=18){
    //         cout<<"Access granted - you are old enough.";
    //     }else{
    //         throw 505;
    //     }
    // }
    // catch(int myNum){
    //     cout<<"Access denied - You must be at least 18 years old.\n";
    //     cout<<"Error number: "<<myNum;
    // }

    try{
        int age = 15;
        if(age>=18){
            cout<<"Access granted - you are old enough.";
        }else{
            throw 505;
        }
    }
    catch(...){
        cout<<"Access denied - You must be at least 18 years old.\n";
    }
    return 0;
}