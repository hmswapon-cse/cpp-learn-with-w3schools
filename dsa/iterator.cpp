#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<set>
#include<map>
#include<algorithm>
using namespace std;
int main(){
    // vector<string>cars = {"Volvo","BMW","Ford","Mazda"};
    // vector<string>::iterator it;
    // for(it = cars.begin();it!=cars.end();++it){
    //     cout<<*it<<"\n";
    // }
    // vector<string> cars = {"Volvo","BMW","Ford","Mazda"};
    // vector<string>::iterator it;
    //it = cars.begin()+1;
    // it = cars.end()-1;

    // it = cars.begin();
    // *it =  "Tesla";

    // cout<<*it<<"\n";

    // vector<string> cars  = {"Volvo","BMW","Ford","Mazda"};
    // auto it = cars.begin();
    // cout<<*it<<"\n";


    //vector<string> cars = {"Volvo","BMW","Ford","Mazda"};
    // for(auto it = cars.begin();it!=cars.end();++it){
    //     cout<<*it<<"\n";
    // }

    // for(string car: cars){
    //     cout<<car<<"\n";
    // }

    // for(auto it = cars.begin();it!=cars.end();){
    //     if(*it =="'BMW"){
    //         it = cars.erase(it);
    //     }else{
    //         ++it;
    //     }
    // }
    // for(const string& car: cars){
    //     cout<<car<<"\n";
    // }

    //vector<string> cars = {"Volvo","BMW","Ford","Mazda"};
    // for(auto it = cars.rbegin();it!=cars.rend();++it){
    //     cout<<*it<<"\n";
    // }

    //list to iterator
    // list<string> cars = {"Volvo","BMW","Ford","Mazda"};
    // for(auto it = cars.begin();it!=cars.end();++it){
    //     cout<<*it<<"\n";
    // }

    
    // deque<string> cars = {"Volvo","BMW","Ford","Mazda"};
    // for(auto it = cars.begin();it!=cars.end();++it){
    //     cout<<*it<<"\n";
    // }

    //set to iterator
    // set<string> cars = {"Volvo","BMW","Ford","Mazda"};
    // for(auto it = cars.begin();it!=cars.end();++it){
    //     cout<<*it<<"\n";
    // }
    
    // map<string, int> people = {{"Jhon",32},{"Adele",45},{"Bo",29}};
    // for(auto it=people.begin();it!=people.end();++it){
    //     cout<<it->first<<" is: "<<it->second<<"\n";
    // }

    // vector<string> cars = {"Volvo","BMW","Ford","Mazda"};
    // sort(cars.begin(), cars.end());
    // for(string car:cars){
    //     cout<<car<<"\n";
    // }

    vector<int> numbers = {1,7,3,5,9,2};
    // sort(numbers.begin(), numbers.end());
    sort(numbers.rbegin(),numbers.rend());
    for(int num: numbers){
        cout<<num<<"\n";
    }
    
    return 0;
}   