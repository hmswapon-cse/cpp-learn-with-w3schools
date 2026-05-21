#include<iostream>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<set>
#include<map>
using namespace std;

int main(){

    vector<string> cars = {"Volvo","BMW","Ford","Mazda"};
    for(string car:cars){
        cout<<car<<endl;
    }

    return 0;
}