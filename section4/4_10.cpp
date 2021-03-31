/**
 * @Author: ZhaoYang
 * @Date:   2021-03-31 14:07:49
 * @Last Modified by:   ZhaoYang
 * @Last Modified time: 2021-03-31 19:04:47
 */
#include <iostream>
#include<array>
using namespace std;


int main(int argc, char const *argv[])
{
    /* code */
    array<float,3>raceTime;
    for(int i=0;i<3;i++)
        cin>>raceTime[i];
    cout<<"average time: "
        << (raceTime[0]+raceTime[1]+raceTime[2])/3
        <<"\nTimes: "<<raceTime.max_size()<<'\n';
    return 0;
}

