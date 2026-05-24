#include<iostream>
#include<map>
using namespace std;
int main(){
    //map<string, int> people = {{"Jhon",32},{"Adele",45},{"Bo",29}};
    // cout<<"Jhon is: "<<people["Jhon"]<<"\n";
    // cout<<"Adele is: "<<people["Adele"]<<"\n";
   // cout<<"Johon is: "<<people.at("Jhon")<<"\n";
    //cout<<"Adele is: "<<people.at("Adele")<<"\n";

    // cout<<people.at("Jenny");

    //map<string, int> people ={{"Jhon",32},{"Adele",45},{"Bo",29}};
    // people["Jhon"]=50;
    // cout<<"Jhon is: "<<people["Jhon"]<<"\n";
    //people.at("Jhon") = 60;
    //cout<<"Jhon is: "<<people.at("Jhon")<<"\n";
    
    //map<string, int> people ={{"Jhon",32},{"Adele",45},{"Bo",29}};
    // people["Jenny"]=22;
    // people["liam"] = 24;
    // people["Kasper"] = 20;
    // people["Anja"] = 30;
    
    // people.insert({"Jenny",22});
    // people.insert({"Liam",24});
    // people.insert({"kasper",20});
    // people.insert({"Anja",30});

    // people.erase("Jhon");
    // //people.clear();

    // for(auto person: people){
    //     cout<<person.first<<" is: "<<person.second<<"\n";
    // }
    // cout<<people.size()<<"\n";
    // cout<<people.empty()<<"\n";
    // cout<<people.count("Bo")<<"\n";
    map<string, int,greater<string>> people = {{"Jhon",32},{"Adele",45},{"Bo",29}};
    for(auto person:people){
        cout<<person.first<<" is: "<<person.second<<"\n";
    } 
    return 0;
}