#include<iostream>
#include<functional>
using namespace std;

void myFunction(function<void()>func){
    func();
    func();
}

int main(){
    // auto message = [](){
    //     cout<<"Hello World!\n";
    // };

    //message();

    // auto add = [](int  a, int b){
    //     return a + b;
    // };
    //cout<<add(5,6);


    // auto message = [](){
    //     cout<<"Hello World!\n";
    // };

    // myFunction(message);

    // for(int i =1;i<=3;i++){
    //     auto show = [i](){
    //         cout<<"Number: "<<i<<"\n";
    //     };
    //     show();
    // }

    // int x = 10;
    // auto show = [x](){
        
    //     cout<<x<<"\n";
    // };
    // x=20;
    // show();

    int x = 10;;
    auto show = [&x](){
        cout<<x<<"\n";
    };
    x = 20;
    show();
    
    
    return 0;
}