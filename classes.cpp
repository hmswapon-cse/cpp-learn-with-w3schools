#include<iostream>
using namespace std;
// class myClass{
// public:
//     int myNum;
//     string myString;
// };

// class myClass{
// public:
//     string brand;
//     string model;
//     int year;
// };

// class Book{
// public:
//     string title;
//     string author;
//     int year;
// };

// class MyClass{
// public:
//     void myMethod(){
//         cout<<"Hello World!";
//     }    
// };

// class MyClass{
// public:
//      void myMethod();
// };

// void MyClass::myMethod(){
//     cout<<"Hello World!";
// }

// class car{
// public:
//     int speed(int maxSpeed);
// };

// int car::speed(int maxSpeed){
//     return maxSpeed;
// }

class Dog{
public:
    void bark(){
        cout<<"Woof!";
    }
};


int main(){
    // myClass myObj;
    // myObj.myNum = 10;
    // myObj.myString = "Some text";

    // cout<<myObj.myNum<<"\n";
    // cout<<myObj.myString<<"\n";

    // myClass carObj1;
    // carObj1.brand = "BMW";
    // carObj1.model="X5";
    // carObj1.year = 1999;

    // myClass carObj2;
    // carObj2.brand = "Ford";
    // carObj2.model = "Mustang";
    // carObj2.year = 1969;

    // cout<<carObj1.brand<<" "<<carObj1.model<<" "<<carObj1.year<<"\n";
    // cout<<carObj2.brand<<" "<<carObj2.model<<" "<<carObj2.year<<"\n";

    // Book myBook1;
    // myBook1.title = "Matilda";
    // myBook1.author = "Roald Dahl";
    // myBook1.year = 1988;

    // Book myBook2;
    // myBook2.title = "The Giving Tree";
    // myBook2.author = "Shel Silverstein";
    // myBook2.year = 1964;

    // cout<<myBook1.title<<", "<<myBook1.author<<", "<<myBook1.year<<"\n";
    // cout<<myBook2.title<<", "<<myBook2.author<<", "<<myBook2.year<<"\n";
    // 
    
    // MyClass myObj;
    // myObj.myMethod();

    // MyClass myObj;
    // myObj.myMethod();

    // car myObj;
    // cout<<myObj.speed(200);

    Dog myObj;
    myObj.bark();
    
    
    return 0;
}