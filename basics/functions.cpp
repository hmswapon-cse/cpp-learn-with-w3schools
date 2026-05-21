#include<iostream>
using namespace std;
// void myFunction(){
//     cout<<"I just got executed.";
// }

// void myFunction(string fname){
//     cout<<fname<<" Refsnes.\n";
// }

// void myFunction(string country="Norway"){
//     cout<<country<<"\n";
// }

// void myFunction(string fname, int age){
//     cout<<fname<<" Refsnes. "<<age<<" years old.\n";
// }

// int myFunction(int x){
//     return 5+x;
// }

// int myFunction(int x, int y){
//     return x + y;
// }

// int doubleGame(int x){
//     return x * 2;
// }

// void changeValue(int &num){
//     num = 50;
// }

// void swapNums(int &x, int &y){
//    int z = x;
//     x = y;
//     y = z;
// }

// void modifyStr(string &str){
//     str +=" World!";
// }

// void myFunction(int myNumbers[5]){
//     for(int i=0;i<5;i++){
//         cout<<myNumbers[i]<<"\n";
//     }
// }

// struct car {
//     string brand;
//     int year;
// };

// void myFunction(car c){
//     cout<<"Brand: "<<c.brand<<", year: "<<c.year<<"\n";
// }

// void updateYear(car &c){
//     c.year++;
// }

float toCelsius(float fahrenheit){
    return (5.0/9.0)*(fahrenheit - 32.0);
}


int main(){
    // myFunction("Liam", 3);
    // myFunction("Jenny",14);
    // myFunction("Anja", 30);
    

    // cout<<myFunction(3);
    // cout<<myFunction(5,3);
    // int z = myFunction(5,4);
    // cout<<z;

    // for(int i = 1;i<=5;i++){
    //     cout<<"Double of "<<i<<" is "<<doubleGame(i)<<"\n";
    // }

    // int value = 10;
    // changeValue(value);
    // cout<<value;

    // int firstNum = 10;
    // int secondNum = 20;

    // cout<<"Before swap: "<<"\n";
    // cout<<firstNum<<" "<<secondNum<<"\n";

    // swapNums(firstNum, secondNum);

    // cout<<"After swap: "<<"\n";
    // cout<<firstNum<< " "<<secondNum<<"\n";

    // string greeting = "Hello";
    // modifyStr(greeting);
    // cout<<greeting;

    // int myNumbers1[5]={10,20,30,40,50};
    // myFunction(myNumbers1);

    // car myCar = {"Toyota", 2020};
    // myFunction(myCar);

    // car myCar = {"BMW", 2020};
    // updateYear(myCar);
    // cout<<"The "<<myCar.brand<<" is now from year "<<myCar.year<<"\n";

    float f_value = 98.8;
    float result = toCelsius(f_value);

    cout<<"Fahrenheit: "<<f_value<<"\n";
    cout<<"Convert Fahrenheit to Celsius: "<<result<<"\n";

    return 0;
}