/**
 * @Author: ZhaoYang
 * @Date:   2021-03-25 12:49:02
 * @Last Modified by:   ZhaoYang
 * @Last Modified time: 2021-03-25 21:05:30
 */
#include <iostream>

using namespace std;

int main()
{
    /* code */
    long time;
    cin >> time;
    long tmp=time;
    short days = 0, hours = 0, mins = 0, secs = 0;
    const int sec2min = 60;
    const int sec2hour = 60 * sec2min;
    const int sec2day = 24 * sec2hour;

    if (tmp >= sec2day)
    {
        days = tmp / sec2day;
        tmp-=days*sec2day;
    }
    if(tmp>=sec2hour)
    {
        hours=tmp / sec2hour;
        tmp-=hours*sec2hour;
    }
    if(tmp>=sec2min)
        mins=tmp/sec2min;
    secs=tmp-mins*sec2min;

    cout <<"days:"<<days<<"\nhours:"
        <<hours<<"\nmins:"<<mins<<"\nsecs:"<<secs;
    return 0;
}
