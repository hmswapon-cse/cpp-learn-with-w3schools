#include<iostream>
#include<ctime>
using namespace std;

int main(){
    // time_t timestamp = time(&timestamp);
    // struct tm datetime = *localtime(&timestamp);
    // cout<<datetime.tm_hour<<endl;

    // time_t timestamp = time(NULL);
    // struct tm datetime = *localtime(&timestamp);
    // cout<<asctime(&datetime);

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


    // time_t now;
    // time_t nextyear;
    // struct tm datetime;
    // now = time(NULL);
    // datetime = *localtime(&now);
    // datetime.tm_year = datetime.tm_year + 1;
    // datetime.tm_mon = 0;
    // datetime.tm_mday = 1;
    // datetime.tm_hour = 0;
    // datetime.tm_min = 0;
    // datetime.tm_sec = 0;
    // datetime.tm_isdst = -1;

    // nextyear = mktime(&datetime);
    // int diff = difftime(nextyear, now);
    // cout<<diff<<" seconds until next year";

    // clock_t before = clock();
    // int k = 0;
    // for(int i = 0;i<100000;i++){
    //     k+=1;
    // }
    // clock_t duration = clock() - before;
    // cout<<"Duration: "<<(float)duration / CLOCKS_PER_SEC<<" seconds ";
    
      clock_t before = clock();
  int k = 0;
  for (int i = 0; i < 100000; i++) {
    k += i;
  }
  clock_t duration = clock() - before;
  cout << "Duration: " << (float)duration / CLOCKS_PER_SEC << " seconds";
    
    return 0;
}