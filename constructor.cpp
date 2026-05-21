#include<iostream>
using namespace std;
// class MyClass{
// public:
//     MyClass(){
//         cout<<"Hello, World!";
//     }
// };

// class Car{
// public:
//     string brand;
//     string model;
//     int year;

//     Car(string x, string y, int z){
//         brand = x;
//         model = y;
//         year = z;
//     }
// };

// class Car {
// public:
//     string brand;
//     string  model;
//     int year;

//     Car(string  x, string y, int z);
// };

// Car::Car(string x, string y, int z){
//     brand = x;
//     model = y;
//     year = z;
// }


class Car{
public:
    string brand;
    string model;

    Car(){
        brand = "UnKnown";
        model = "UnKnown";
    }

    Car(string b, string m){
        brand = b;
        model =  m;
    }
};



int main(){
    // MyClass myObj;

    // Car carObj1("BMW", "X5", 1999);
    // Car carObj2("Ford", "Mustang", 1969);

    // cout<<carObj1.brand<<" "<<carObj1.model<<" "<<carObj1.year<<"\n";
    // cout<<carObj2.brand<<" "<<carObj2.model<<" "<<carObj2.year<<"\n";

    Car car1;
    Car car2("BMW","X5");
    Car car3("Ford","Mustang");

    cout<<"Car1: "<<car1.brand<<" "<<car1.model<<"\n";
    cout<<"Car2: "<<car2.brand<<" "<<car2.model<<"\n";
    cout<<"Car3: "<<car3.brand<<" "<<car3.model<<"\n";


    return 0;
}