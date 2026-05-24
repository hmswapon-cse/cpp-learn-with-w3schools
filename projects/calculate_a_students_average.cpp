#include<iostream>
using namespace std;
char gradeFunction(double avg){
    if(avg>=90) return 'A';
    else if(avg>=80) return 'B';
    else if(avg>=70) return 'C';
    else if(avg>=60) return 'D';
    else return 'F';
}

int main(){
    int count;
    double sum = 0, grade;

    cout<<"How many grades (1 to 5)? ";
    cin>>count;

    if(count<1 ||  count>5){
        cout<<"Invalid number. You must enter between 1 and 5 grades.\n";
        return 1;
    }

    for(int i = 1;i<=count;i++){
        cout<<"Enter grade "<<i<<": ";
        cin>>grade;
        sum += grade;
    }

    double avg = sum/count;
    cout<<"Average: "<<avg<<"\n";
    cout<<"Letter grade: "<<gradeFunction(avg)<<"\n";
    
    return 0;
}