/**
 * @Author: ZhaoYang
 * @Date:   2021-03-31 14:07:49
 * @Last Modified by:   ZhaoYang
 * @Last Modified time: 2021-04-01 16:09:45
 */
#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    double donation[10];
    size_t i=0;
    double sumOf=0;
    for (;i<10&&cin>>donation[i];i++)
        ;
    if(i)
    {   
        for (size_t j=0;j<=i;j++)
            sumOf+=donation[j];
        double average=sumOf/i;
        sumOf=0;
        for (size_t j = 0; j <= i; j++)
            if(donation[j]>average)
                sumOf++;
        cout<<"=====\naverage:"<<average
            <<"=====\nbigger: "<<sumOf<<endl;
    }
    else
        cout<<"error! No input!\n";
    return 0;
}

