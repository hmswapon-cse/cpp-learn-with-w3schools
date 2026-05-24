#include<iostream>
using namespace std;

namespace MyNamespace{
    int x = 42;
}
using  namespace MyNamespace;
int main(){
    // cout<< MyNamespace::x;
    cout<<x<<"\n";

    std::cout<<"Hello world!\n";
    cout<<"Hellow world!\n";
    return 0;
}