#include<iostream>
#include<set>
using namespace std;

int main(){
    // set<string> cars = {"Volvo","BMW","Ford","Mazda"};
    // for(string car: cars){
    //     cout<<car<<"\n";
    // }

    // set<int> numbers = {1,7,3,2,5,9};
    // for(int number: numbers){

    //     cout<<number<<"\n";
    // }

    // set<int, greater<int>> numbers = {1,7,3,2,5,9};
    // for(int number:numbers){
    //     cout<<number<<"\n";
    // }
    // set<string> cars = {"Volvo","BMW","Ford","BMW","Mazda"};
    // for(string car: cars){
    //     cout<<car<<"\n";
    // }

    set<string> cars ={"Volvo","BMW","Ford","Mazda"};
    cars.insert("Tesla");
    cars.insert("VW");
    cars.insert("Toyota");
    cars.insert("Audi");

    cars.erase("Volvo");
    cars.erase("Mazda");
    // cars.clear();
    for(string car: cars){
        cout<<car<<"\n";
    }

    cout<<cars.size();
    cout<<cars.empty();
    return 0;
}