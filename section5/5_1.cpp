/**
 * @Author: ZhaoYang
 * @Date:   2021-03-31 14:07:49
 * @Last Modified by:   ZhaoYang
 * @Last Modified time: 2021-03-31 19:44:31
 */
#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    /* code */
    int smaller,bigger;
    cin>>smaller>>bigger;
    if(smaller>bigger)
        swap(smaller,bigger);
    int sumNum=0;
    for(int i=smaller;i<=bigger;i++)
        sumNum+=i;
    cout<<"sum= "<<sumNum;
    
    return 0;
}