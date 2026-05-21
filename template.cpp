#include<iostream>
using  namespace std;
template <typename T>
    T add(T a, T b){
        return a + b;
    }

int main(){
    cout<<add<int>(5,3)<<"\n";
    cout<<add<double>(2.5, 1.5)<<"\n";
    return 0;
}