// ### Problem 4: Sum of Digits
// একটা integer input নিবে।
// তার digit গুলোর sum বের করবে।

// **Input:**
// `1234`

// **Output:**
// `10`
// ---

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"What is n? : ";
    cin>>n;
    int result = 0;
    while(n>0){
        result +=n%10;
        n = n/10;
    }
    cout<<result;
    
    
    return 0;
}