#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string> cars;
    cars.push("Volvo");
    cars.push("BMW");
    cars.push("Ford");
    cars.push("Mazda");
    
    //changed value front & back
    cars.front() = "Tesla";
    cars.back() = "VW";
    
    cars.pop();
    cout<<cars.front()<<"\n";
    cout<<cars.back()<<"\n";
    cout<<cars.size()<<"\n";
    cout<<cars.empty();

    return 0;
}

