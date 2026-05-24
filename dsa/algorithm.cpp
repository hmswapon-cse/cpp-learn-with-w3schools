#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main(){
    // vector<string> cars = {"Volvo","BMW","Ford","Mazda"};
    // sort(cars.begin(), cars.end());
    // for(string car:cars){
    //     cout<<car<<"\n";
    // }

    // vector<int> numbers = {1,7,3,5,9,2};
    // // sort(numbers.begin(), numbers.end());
    // sort(numbers.rbegin(),numbers.rend());
    // for(int  number: numbers){
    //     cout<<number<<"\n";
    // }

    // vector<int> numbers ={1,7,3,5,9,2};
    // sort(numbers.begin()+3,numbers.end());
    // for(int number: numbers){
    //     cout<<number<<"\n";
    // }

    // vector<int> numbers = {1,7,3, 5,9,2};
    // auto it = find(numbers.begin(), numbers.end(), 3);
    // if(it!=numbers.end()){
    //     cout<<"The number 3 was found!";
    // }else{
    //     cout<<"The number 3 was not found.";
    // }

    // vector<int> numbers = {1,7,3, 5,9,2}; 
    // sort(numbers.begin(), numbers.end());
    // auto it = upper_bound(numbers.begin(), numbers.end(), 7);
    // cout<<*it;

    // vector<int> numbers = {1,7,3, 5,9,2};
    // //auto it = min_element(numbers.begin(), numbers.end());
    // auto it = max_element(numbers.begin(), numbers.end());
    // cout<<*it;

    // vector<int> numbers = {1,7,3,5,9,2};
    // vector<int> copiedNumbers(6);

    // copy(numbers.begin(), numbers.end(), copiedNumbers.begin());

    // for(int number: copiedNumbers){
    //     cout<<number<<"\n";
    // }

    vector<int> numbers(6);
    fill(numbers.begin(), numbers.end(),35);
    for(int number: numbers){
        cout<<number<<"\n";
    }


    return 0;
}