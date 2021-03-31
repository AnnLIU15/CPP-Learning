/**
 * @Author: ZhaoYang
 * @Date:   2021-03-31 14:07:49
 * @Last Modified by:   ZhaoYang
 * @Last Modified time: 2021-03-31 20:10:33
 */
#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
   string month[12]=
            {"January","February","March ","April",
            "May","June","July","August","September",
            "October","November","December"};
    int sellOfNum[3][12]={0};
    for(int j=0;j<3;j++)
    {    
        cout<<"Year"<<j+1<<endl;
        for(int i=0;i<12;i++)
        {
            
            cout<<month[i]<<":";
            cin>>sellOfNum[j][i];
        }
        }
    int sum=0;
    for(int j=0;j<3;j++)
        for(int i=0;i<12;i++)
            sum+=sellOfNum[j][i];
    cout<<"3 Year Total: "<<sum;
    return 0;
}

