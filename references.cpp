#include<iostream>
using namespace std;

int main(){
    string food = "Pizza";
    string &meal = food;

    meal = "Burger";
    cout<<food<<"\n";
    cout<<meal<<"\n";
    string meals = "meat";
    cout<<&food<<"\n";
    cout<<&meals;


    return 0;
}