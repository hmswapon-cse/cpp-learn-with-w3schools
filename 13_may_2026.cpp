#include<iostream>
#include<string>
using namespace std;

int main(){
/*int x = 10;
int y = 3;

cout<<x+y<<"\n";
cout<<x-y<<"\n";
cout<<x*y<<"\n";
cout<<x/y<<"\n";
cout<<x%y<<"\n";	

int z = 5;
++z;
cout<<z<<"\n";

--z;
cout<<z<<"\n";*/


/*int x = 10;
int y = 3;
cout<<(x/y)<<endl;

double a = 10.0;
double b = 3.0;
cout<<(a/b)<<endl;*/

/*int x = 5;
x++;
cout<<x<<endl;

int y = 5;
++y;
--y;
cout<<y<<endl;
*/

/*int peopleInRoom = 0;
peopleInRoom++;
peopleInRoom++;
peopleInRoom++;
cout<<peopleInRoom<<endl;

peopleInRoom--;
cout<<peopleInRoom<<endl;*/

/*int savings = 100;
savings +=50;
cout<<"Total savings: "<<savings<<endl;*/


/*int age = 18;
cout<<(age>=18)<<"\n";
cout<<(age<18)<<"\n";

int passwordLength = 5;
cout<<(passwordLength >=8)<<"\n";
cout<<(passwordLength<8)<<"\n";

string firstName = "Hm ";
string lastName = "swapon";
string fullName = firstName.append(lastName);
cout<<fullName;

string txt = "Hm swapon";
cout<<"The length of text string is: "<<txt.length()<<endl;

string txt2 = "Md. Harun Or Rashid Swapon";
cout<<"Length: "<<txt2.size();

string myString = "Hm swapon";
cout<<myString[0];

cout<<myString[myString.length()-1];
string myString = "nm swapon";
myString[0] = 'H';
cout<<myString;

string myString = "Hm swapon";
cout<<myString<<"\n";

cout<<myString.at(0)<<"\n";
cout<<myString.at(1)<<"\n";
cout<<myString.at(myString.length()-1)<<"\n";

myString.at(0)='s';
cout<<myString;*/

// string txt ="Hello everyone, welcome to my \"Hm swapon\" youtube channel \\ Facebook page";
// cout<<txt<<endl;

// cout<<"It\'s my second channel"<<endl;

// string firstName;
// cout<<"Type your first name: ";
// cin>>firstName;
// cout<<"Your Name is: "<<firstName;

string fullName;
cout<<"Type your name: ";
getline(cin, fullName);
cout<<"Your name is: "<<fullName<<endl;

return 0;
}