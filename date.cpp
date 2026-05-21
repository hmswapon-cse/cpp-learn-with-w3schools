#include<iostream>
#include<ctime>
using namespace std;
int main(){
    // time_t timestamp;
    // time(&timestamp);

    // cout<<ctime(&timestamp);


    struct tm datetime;
    time_t timestamp;

    datetime.tm_year =2023-1900;
    datetime.tm_mon = 1 - 1;
    datetime.tm_mday = 17;
    datetime.tm_hour = 12;
    datetime.tm_min = 30;
    datetime.tm_sec = 1;

    


    datetime.tm_isdst = -1;
    
    timestamp = mktime(&datetime);
    cout<<ctime(&timestamp);

    cout<<"Week Day: "<<datetime.tm_wday<<"\n";
    cout<<"Year Day: "<<datetime.tm_yday<<"\n";
    datetime.tm_yday = 1;
    
    return 0;
}