#include<iostream>
#include<list>
using namespace std;

int main(){
    // list<string> cars = {"Volvo","BMW","Ford","Mazda"};
    // for(string car:cars){
    //     cout<<car<<"\n";
    // }

    // list<string> cars = {"Volvo","BMW","Ford","Mazda"};
    // cout<<cars.front()<<endl;
    // cout<<cars.back();

    // list<string> cars= {"Volvo","BMW","Ford","Mazda"};
    // cars.front()="Opel";
    // cars.back()="Toyota";
    // for(string car : cars){
    //     cout<<car<<"\n";
    // }

    // list<string> cars = {"Volvo","BMW","Ford","Mazda"};
    // cars.push_front("Tesla");
    // cars.push_back("VW");
    // for(string car: cars){
    //     cout<<car<<"\n";
    // }

    // list<string> cars = {"Volvo","BMW","Ford","Mazda"};
    // cars.pop_front();
    // cars.pop_back();
    // for(string car: cars){
    //     cout<<car<<"\n";
    // }

    list<string> cars = {"Volvo","BMW","Ford","Mazda"};
    // cout<<cars.size()<<"\n";
    // cout<<cars.empty();
    for(string  car: cars){
        cout<<car<<"\n";
    }
    return 0;
}