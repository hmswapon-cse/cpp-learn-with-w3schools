#include<iostream>
#include<ctime>
using namespace std;

int main(){
    struct tm datetime;
    time_t timestamp;
    datetime.tm_year = 2026 - 1900;
    datetime.tm_mon = 5-1;
    datetime.tm_mday = 18;
    datetime.tm_hour = 10;
    datetime.tm_min = 12;
    datetime.tm_sec = 13;

    datetime.tm_isdst = -1;

    //it's for output/print
    // timestamp =mktime(&datetime);
    // cout<<ctime(&timestamp);

    mktime(&datetime);
    string weekdays[] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    cout<<"The date is on a: "<<weekdays[datetime.tm_wday];
    return 0;
}