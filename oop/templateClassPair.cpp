#include<iostream>
using namespace std;
template<typename T1, typename T2>
class Pair{
    public:
        T1 first;
        T2 second;

        Pair(T1 a, T2 b){
            first = a;
            second = b;
        }

        void display(){
            cout<<"First: "<<first<<", Second: "<<second<<"\n";
        }
};
int main(){
    Pair<string, int> person("Hm swapon", 20);
    Pair<int, double> score(51, 9.5);
    person.display();
    score.display();
    return 0;
}