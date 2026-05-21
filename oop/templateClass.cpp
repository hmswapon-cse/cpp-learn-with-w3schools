#include<iostream>
using namespace std;
template<typename T>
class Box{
    public:
        T value;
        Box(T v){
            value = v;
        }
        void show(){
            cout<<"Value: "<<value<<"\n";
        }
};
int main(){

    Box<int> intBox(50);
    Box<string> strBox("Hello");
    intBox.show();
    strBox.show();

    return 0;
}