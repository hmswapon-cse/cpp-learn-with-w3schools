#include<iostream>
#include<ctime>
using namespace std;

int main(){
    // time_t timestamp = time(&timestamp);
    // struct tm datetime = *localtime(&timestamp);
    // cout<<datetime.tm_hour<<"\n";



    // time_t timestamp = time(NULL);
    // struct tm datetime = *localtime(&timestamp);
    // cout<<asctime(&datetime);

    //correct a ddate before displaying it
    // struct tm datetime;
    // datetime.tm_year = 2022 - 1900;
    // datetime.tm_mon = 0;
    // datetime.tm_mday = 32;
    // datetime.tm_hour = 0;
    // datetime.tm_min = 0;
    // datetime.tm_sec = 0;
    // datetime.tm_isdst = -1;
    // mktime(&datetime);
    // cout<<asctime(&datetime);

    
    time_t timestamp = time(NULL);
    struct tm datetime = *localtime(&timestamp);

    char output[50];
    strftime(output, 50, "%B %d, %Y",&datetime);
    cout<<output<<endl;

    strftime(output,50,"%I:%M:%S %p",&datetime);
    cout<<output<<endl;

    strftime(output, 50, "%m/%d/%y",&datetime);
    cout<<output<<endl;

    strftime(output, 50,"%a %b %d %H:%M:%S %Y",&datetime);
    cout<<output<<endl;

    



    return 0;
}