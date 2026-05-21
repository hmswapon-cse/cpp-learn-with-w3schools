#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string> cars;
    cars.push("Volvo");
    cars.push("BMW");
    cars.push("Ford");
    cars.push("Mazda");

    //cout<<cars.top();
    // cars.top()="Tesla";
    // cars.pop();
    // cout<<cars.top();
    // cout<<cars.size();
    cout<<cars.empty();
    return 0;
}