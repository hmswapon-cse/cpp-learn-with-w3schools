#include<iostream>
#include<string>
#include<cmath>
#include<vector>

using namespace std;
int main(){
    // int  x=10, y=6;
    // cout<<min(x,y)<<"\n";
    // cout<<max(x,y);

    // cout<<sqrt(64)<<"\n";
    // cout<<round(5.49)<<"\n";
    // cout<<log(5);

    // bool isCodingFun = true;
    // bool isFishTasty = false;
    // cout<<isCodingFun<<"\n";
    // cout<<isFishTasty;

    //  bool isCodingFun = true;
    // bool isFishTasty = false;
    // cout<<boolalpha; //enable printing "true"/"false"
    // cout<<isCodingFun<<"\n";
    // cout<<isFishTasty<<"\n";

    // cout<<noboolalpha; //disable printing "true"/"false"| nou output is (0/1)
    // cout<<isCodingFun<<"\n";
    // cout<<isFishTasty;

    // int x = 6;
    // int y = 5;
    // cout<<(x>y)<<"\n";
    // cout<<(x==6);

    // bool isGreater = x>y;
    // cout<<isGreater;

//     int myAge = 27;
//     int votingAge = 18;
//    // cout<<(myAge>=votingAge);

//     if(myAge>=votingAge){
//         cout<<"Old enough to vote!";
//     }else{
//         cout<<"Not old enough to vote";
//     }

    // if(20>18){
    //     cout<<"20 is greater than 18";
    // }

    // int x = 6, y = 5;
    // bool isGreater = x>y;
    // if(isGreater){
    //     cout<<"X is greater than Y";
    // }

    // int time = 16;
    // bool isMorning = time<12;
    // bool isDay = time<18;

    // if(isMorning){
    //     cout<<"Good morning";
    // }else if(isDay){
    //     cout<<"Good day";
    // }else{
    //     cout<<"Good evening";
    // }


    //ternary operator
    // int time = 20;
    // string result = (time<18) ? "Good morning":"Good Evening";
    // cout<<result<<"\n";

    // cout<<((time>18)?"Good morning1":"Good evening2");

    // int time = 20;
    // string result = (time<12)?"Good morning":(time<18)?"Good day":"Good evening";
    // cout<<result;

    // int x = 15;
    // int y = 25;
    // //In this example, we first check if x is greater than 10. If it is, we then check if y is greater than 20:
    // if(x>10){
    //     cout<<"X is greater than 10"<<"\n";
    //     if(y>20){
    //         cout<<"Y is also greater than 20";
    //     }
    // }

    // int age = 20;
    // bool isCitizen = true;

    // if(age>=18){
    //     cout<<"Old enough to vote"<<"\n";
    //     if(isCitizen){
    //         cout<<"And you are a citizen. You can vote!";
    //     }else{
    //         cout<<"But you must be a citizen to vote!";
    //     }
    // }else{
    //     cout<<"Not old enough to vote!";
    // }

    // int a = 200;
    // int b = 33;
    // int c = 500;

    // if(a>b && c>a){
    //     cout<<"Both conditions are true";
    // }

    // if(a>b || a>c){
    //     cout<<"At least one condition is true";
    // }

    // int a = 33;
    // int b = 200;
    // if(!(a>b)){
    //     cout<<"a is NOT greater than b";
    // }

    // bool isLoggedIn = true;
    // bool isAdmin = false;
    // int securityLevel = 3;

    // if(isLoggedIn && (isAdmin || securityLevel<=2)){
    //     cout<<"Access granted.";
    // }else{
    //     cout<<"Access denied.";
    // }

    // int doorCode = 1337;

    // if(doorCode ==1337){
    //     cout<<"Correct code.\nThe door is now open\n";
    // }else{
    //     cout<<"Wrong code.\nThe door remains closed";
    // }

    // int myNum = 10;

    // if(myNum >0){
    //     cout<<"The value is a positive number.\n";
    // }else if(myNum<0){
    //     cout<<"The value is a negative number.\n";
    // }else{
    //     cout<<"The value is 0. \n";
    // }

    // int myAge = 27;
    // int votingAge = 18;

    // if(myAge>=18){
    //     cout<<"Old enough to vote!\n";
    // }else{
    //     cout<<"Not old enough to vote.\n";
    // }

    // int age = 20;
    // bool isCitizen = true;

    // if(age>=18){
    //     cout<<"Old enough to vote!\n";
    //     if(isCitizen){
    //         cout<<"And you are a citizen. so, you can vote!.\n";
    //     }else{
    //         cout<<"But you must be a citizen to vote.\n";
    //     }
    // }else{
    //     cout<<"Not old enough to vote";
    // }

    // int  myNum = 5;
    // if(myNum%2==0){
    //     cout<<myNum<<" is even.\n";
    // }else{
    //     cout<<myNum<<" is odd.\n";
    // }

    // int temperature = 30;
    // if(temperature<0){
    //     cout<<"It's freezing!\n";
    // }else if(temperature<20){
    //     cout<<"It's cool.\n";
    // }else{
    //     cout<<"It's warm.\n";
    // }

    // int day = 0;
    // switch(day){
    //     case 1:
    //         cout<<"Sunday";
    //         break;
    //     case 2: 
    //         cout<<"Monday";
    //         break;
    //     case 3:
    //         cout<<"Tuesday";
    //         break;
    //     case 4:
    //         cout<<"Wednesday";
    //         break;
    //     case 5:
    //         cout<<"Thursday";
    //         break;
    //     case 6:
    //         cout<<"Friday";
    //         break;
    //     case 7:
    //         cout<<"Saturday";
    //         break;
    //     default:
    //         cout<<"nothing";
    // }

    // int i = 0;
    // while(i<=5){
    //     cout<<i<<"\n";
    //     i++;
    // }

    // int countDown = 3;
    // while(countDown>0){
    //     cout<<countDown<<"\n";
    //     countDown--;
    // }
    // cout<<"Happy New Year!\n";

    // int i = 7;
    // do{
    //     cout<<i<<"\n";
    //     cout<<"Hm swapon \n";
    //     i++;
    // }while(i<5);

    // int choice;

    // do
    // {
    //     cout << "1. Start Game\n";
    //     cout << "2. Settings\n";
    //     cout << "3. Exit\n";

    //     cout << "Enter choice: ";
    //     cin >> choice;

    // } while(choice != 3);

    // int number;
    // do{
    //     cout<<"Enter a positive number: ";
    //     cin>>number;
    // }while(number>0);

    // int i = 0;
    // while(i<=10){
    //     cout<<i<<"\n";
    //     i+=2;
        
    // }

    // int numbers = 12345;
    // int reverseNumbers = 0;

    // while(numbers){
    //     reverseNumbers = reverseNumbers * 10 + numbers % 10;
    //     numbers /=10; 
    // }
    // cout<<"Reverse numbers: "<<reverseNumbers<<"\n";

    // int dice = 1;
    // while(dice <=6){
    //     if(dice<6){
    //         cout<<"no Yatzy\n";
    //     }else{
    //         cout<<"Yatzy\n";
    //     }
    //     dice++;
    // }

    // for (int i = 0;i<5;i++){
    //     cout<<i<<"\n";
    // }
    // for(int i = 0; i<=10;i+=2){
    //     cout<<i<<"\n";
    // }

    // int sum = 0;
    // for(int i = 1;i<=5;i++){
    //     sum +=i;
        
    // }
    // cout<<sum<<"\n";

    // for(int i=5;i>0;i--){
    //     cout<<i<<"\n";
    // }

    // for(int i = 1; i<=2;i++){
    //     cout<<"Outer: "<<i<<"\n";

    //     for(int j = 1; j<=3;j++){
    //         cout<<"Inner: "<<j<<"\n";
    //     }
    // }

    // for(int i=1;i<=3;i++){
    //     for(int j=1;j<=3;j++){
    //         cout<<i*j<<" ";
    //     }
    //     cout<<"\n";
    // }

    // int myNumbers[5] = {10,20,30,40,50};
    // for(int num : myNumbers){
    //     cout<<num<<"\n";
    // }

    // string word = "Hello";
    // for(char c: word){
    //     cout<<c<<"\n";
    // }

    // for(int  i = 0; i<=100;i+=10){
    //     cout<<i<<"\n";
    // }
    
    // for(int i = 0;i<=10;i+=2){
    //     cout<<i<<"\n";
    // }

    // for(int i=1;i<=10;i+=2){
    //     cout<<i<<"\n";
    // }

    // for (int i=2;i<=512;i*=2){
    //     cout<<i<<"\n";
    // }

    // int number = 2;
    // int i;
    // for(i=1;i<=10;i++){
    //     cout<<number <<" x "<<i<<" = "<<number*i<<"\n";
    // }

    // for(int i=0;i<=10;i++){
    //     if(i==4){
    //         break;
    //     }
    //     cout<<i<<"\n";
    // }

    // for(int i=0;i<=10;i++){
    //     if(i==4){
    //         continue;
    //     }
    //     cout<<i<<"\n";
    // }

    // int i = 0;
    // while(i<10){
    //     cout<<i<<"\n";
    //     i++;
    //     if(i==4){
    //         break;
    //     }
    // }

    //     int i = 0;
    // while(i<10){
        
    //     if(i==4){
    //         i++;
    //         continue;
    //     }
    //     cout<<i<<"\n";
    //     i++;
    // }

    // string cars[5] = {"Volvo","BMW","Ford","Mazda","Tesla"};
    // int myNum[3] = {10,20,30};

    //cout<<cars[0];
    // cars[0]="Opel";
    // cout<<cars[0];

    // for(int i=0;i<=5;i++){
    //     cout<<cars[i]<<"\n";
    // }
    // for(string cr:cars){
    //     cout<<cr<<"\n";
    // }

    // for(int i=0;i<5;i++){
    //     cout<<i<<" = "<<cars[i]<<"\n";
    // }

    // int myNumbers[5]={10,20,30,40,50};
    // for(int num:myNumbers){
    //     cout<<num<<"\n";
    // }
    
    // string cars[5] = {"Volvo","BMW","Ford","Mazda","Tesla"};
    // for(string car:cars){
    //     cout<<car<<"\n";
    // }

//     vector<string> cars={"Volvo","BMW","Ford","Mazda","Tesla"};
//     cars.push_back("Hm swapon");
//    cout<<sizeof(cars);
//     for(string car: cars){
//     cout<<car<<"\n";
//    }
   

// string cars[5]={"Volvo","BMW","Ford","Mazda","Tesla"};
// cout<<sizeof(cars);
// int getArrayLength2 = sizeof(cars)/sizeof(cars[0]);
// cout<<getArrayLength2<<"\n";

// int myNumbers[5] = {10,20,30,40,50};
//cout<<sizeof(myNumbers);

// int getArrayLength = sizeof(myNumbers)/sizeof(myNumbers[0]);
// cout<<getArrayLength;

// int myNumbers[5] = {10,20,30,40,50};

// for(int i=0;i<sizeof(myNumbers)/sizeof(myNumbers[0]);i++){
//     cout<<myNumbers[i]<<"\n";
// }

// int ages [8]={20,22,18,35,48,26,87,70};
// float avg, sum = 0;

// int getArrayLength = sizeof(ages)/sizeof(ages[0]);
// for(int age:ages){
//     sum +=age;
// }
// avg = sum/getArrayLength;
// cout<<avg<<"\n";

// int ages [8]={20,22,18,35,48,26,87,70};
// int lowestAge = ages[0];

// for(int age: ages){
//     if(lowestAge>age){
//         lowestAge = age;
//     }
// }
// cout<<"The lowest Age is: "<<lowestAge<<endl;


// string letters[2][4] ={
//     {"A","B","C","D"},
//     {"E","F","G","H"}
// };

// cout<<letters[0][2];

// string letters[2][4] ={
//     {"A","B","C","D"},
//     {"E","F","G","H"}
// };
// letters[0][0]="X";
// cout<<letters[0][0];


// string letters[2][4] ={
//     {"A","B","C","D"},
//     {"E","F","G","H"}
// };

// for(int i=0;i<2;i++){
//     for(int j=0;j<4;j++){
//         cout<<letters[i][j]<<endl;
//     }
// }

    // string letters[2][2][2]={
    //     {
    //         {"A","B"},
    //         {"C","D"}
    //     },
    //     {
    //         {"E","F"},
    //         {"G","H"}
    //     }
    // };

    // for(int i=0;i<2;i++){
    //     for(int j=0;j<2;j++){
    //         for(int k=0;k<2;k++){
    //             cout<<letters[i][j][k]<<endl;
    //         }
    //     }
    // }

    bool ships[4][4]={
        {0,1,1,0},
        {0,0,0,0},
        {0,0,1,0},
        {0,0,1,0}
    };

    int hits = 0;
    int numberOfTurns = 0;
    while (hits<4){
        int row, collumn;
        cout<<"Selecting coordinates "<<endl;

        cout<<"Choose a row number between 0 and 3: ";
        cin>>row;

        cout<<"Choose a collumn number between 0 and 3: ";
        cin>>collumn;

        if(ships[row][collumn]){
            ships[row][collumn] = 0;

            hits++;

            cout<<"Hit!"<<(4-hits)<<" left"<<endl<<endl;
        }else{
            cout<<"Miss"<<endl<<endl;
        }

        numberOfTurns++;
    }
    cout<<"Victory!"<<endl;
    cout<<"You won in "<<numberOfTurns<<" turns";




    return 0;
}