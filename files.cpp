#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ofstream MyFile("file.txt");
    MyFile<<("Files can be tricky, but it is fun enough!");
    MyFile.close();
    return 0;
}