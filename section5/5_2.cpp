/**
 * @Author: ZhaoYang
 * @Date:   2021-03-31 14:07:49
 * @Last Modified by:   ZhaoYang
 * @Last Modified time: 2021-03-31 19:48:29
 */
#include <iostream>
#include<array>
using namespace std;


int main(int argc, char const *argv[])
{
    /* code */
    array<long double,101> factorials;
    factorials[0]=1;
    for(int i=1;i<factorials.size();i++)
        factorials[i]=i*factorials[i-1];
    for(int i=0;i<factorials.size();i++)
        cout<<i<<"!="<<factorials[i]<<"\n";
    return 0;
}

