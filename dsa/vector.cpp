#include<iostream>
#include<vector>
using namespace std;

int main(){
    // vector<string> cars = {"Volvo", "BMW","Ford","Mazda"};
    // for(string car:cars){
    //     cout<<car<<endl;
    // }

    //  vector<string> cars = {"Volvo", "BMW","Ford","Mazda"};
    // cout<<cars[0]<<endl;
    // cout<<cars[1];

    // vector<string> cars = {"Volvo", "BMW","Ford","Mazda"};
    // cout<<cars.front()<<endl;
    // cout<<cars.back();

    // vector<string> cars = {"Volvo", "BMW","Ford","Mazda"};
    // cout<<cars.at(1)<<endl;
    // cout<<cars.at(2);

    // vector<string> cars = {"Volvo", "BMW","Ford","Mazda"};
    // cars[0]="Opel";
    // for(string car: cars){
    //     cout<<car<<endl;
    // }

    //Safer to use the .at() function
    // vector<string> cars = {"Volvo", "BMW","Ford","Mazda"};
    // cars.at(1)="Opel";
    // for(string car: cars){
    //     cout<<car<<endl;
    // }

    // vector<string> cars = {"Volvo", "BMW","Ford","Mazda"};
    // cars.push_back("Tesla");
    // cars.push_back("VW");
    // cars.push_back("Mitsubishi");
    // cars.push_back("Mini");
    // for(string car:cars){
    //     cout<<car<<endl;
    // }

    // vector<string> cars = {"Volvo", "BMW","Ford","Mazda"};
    // cars.pop_back();
    // for(string car:cars){
    //     cout<<car<<endl;
    // }

    // vector<string> cars = {"Volvo", "BMW","Ford","Mazda"};
    // cout<<cars.size();
    // return 0;

    // vector<string> cars;
    // cout<<cars.empty();

    // vector<string> cars = {"Volvo","BMW","Ford","Mazda"};
    // cout<<cars.empty();

    // vector<string> cars = {"Volvo","BMW","Ford","Mazda"};
    // for(int i=0;i<cars.size();i++){
    //     cout<<cars[i]<<endl;
    // }

    vector<string> cars = {"Volvo","BMW", "Ford","Mazda"};
    for(string car:cars){
        cout<<car<<endl;
    }
}