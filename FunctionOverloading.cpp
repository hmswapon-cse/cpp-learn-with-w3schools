#include<iostream>
using namespace std;
// int plusFuncInt(int x, int y){
//     return x + y;
// }
// double plusFuncDouble(double x, double y){
//     return x + y;
// }

// int plusFunc(int x, int y){
//     return x + y;
// }

// double plusFunc(double x, double y){
//     return x + y;
// }

int plusFunc(int x, int y){
    return x + y;
}

int plusFunc(int x, int y, int z){
    return x + y + z;
}


int main(){
    // int myNum1 = plusFuncInt(8,5);
    // double myNum2= plusFuncDouble(4.3, 6.26);

    // cout<<"Int: "<<myNum1<<"\n";
    // cout<<"Double: "<<myNum2<<"\n";

    // int myNum1 = plusFunc(8,5);
    // double myNum2 = plusFunc(4.3,6.26);
    // cout<<"Int: "<<myNum1<<"\n";
    // cout<<"Double: "<<myNum2<<"\n";

    int myNum1 = plusFunc(3,7);
    int myNum2 = plusFunc(1,2,3);

    cout<<"Sum of 2 numbers: "<<myNum1<<"\n";
    cout<<"Sum of 3 numbers: "<<myNum2<<"\n";

    return 0;
}