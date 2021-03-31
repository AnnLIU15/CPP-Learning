/**
 * @Author: ZhaoYang
 * @Date:   2021-03-31 14:07:49
 * @Last Modified by:   ZhaoYang
 * @Last Modified time: 2021-03-31 20:06:42
 */
#include <iostream>
#include<string>
using namespace std;


int main(int argc, char const *argv[])
{
    /* code */
    string month[12]=
            {"January","February","March ","April",
            "May","June","July","August","September",
            "October","November","December"};
    int sellOfNum[12]={0};
    for(int i=0;i<12;i++)
    {
        cout<<month[i]<<":";
        cin>>sellOfNum[i];
    }
    int sum=0;
    for(int i=0;i<12;i++)
        sum+=sellOfNum[i];
    cout<<"Year: "<<sum;
    return 0;
}

