#include<iostream>
using namespace std;

//with out vitual function
// class Animal{
//     public:
//         void sound(){
//             cout<<"Animal sound \n";
//         }
// };

// class Dog : public Animal {
//     public:
//         void sound(){
//             cout<<"Dog barks \n";
//         }
// };

//END OF WITHOUT VIRTUAL FUNCTION

//START WITH VIRTUAL FUNCITON
class Animal{
    public:
        virtual void sound(){
            cout<<"Animal sound<\n";
        }
};

class Dog : public Animal{
    public:
        void sound() override{
            cout<<"Dog barks\n";
        }
        
};



int main(){

    //without virtual function
    // Animal* a;
    // Dog d;
    // a = &d;
    // a->sound();
    //END without virtual function

    Animal* a;
    Dog d;
    a = &d;
    a-> sound();

    return 0;
}