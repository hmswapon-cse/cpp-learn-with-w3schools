#include<iostream>
#include<deque>
using namespace std;

int main(){
    // deque<string> cars = {"Volvo","BMW","Ford","Mazda"};
    // for(string car:cars){
    //     cout<<car<<"\n";
    // }

    //deque<string> cars = {"Volvo","BMW","Ford","Mazda"};
    // cout<<cars[0]<<"\n";
    // cout<<cars[1];
    // cout<<cars.front()<<"\n";
    // cout<<cars.back();

    // cout<<cars.at(1)<<"\n";
    // cout<<cars.at(2);

    // cars.at(0) = "Opel";
    // for(string car: cars){
    //     cout<<car<<"\n";
    // }

    deque<string> cars = {"Volvo","BMW","Ford","Mazda"};
    // cars.push_front("Tesla");
    // cars.push_back("VW");
    // cars.pop_front();
    // cars.pop_back();
    // for(string car: cars){
    //     cout<<car<<"\n";
    // }
    // cout<<cars.size()<<"\n";
    // cout<<cars.empty();

    // for(int i=0;i<cars.size();i++){
    //     cout<<cars[i]<<"\n";
    // }
    for(string car: cars){
        cout<<car<<"\n";
    }
    return 0;
}