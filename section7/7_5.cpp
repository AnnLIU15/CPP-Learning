/**
 * @Author: ZhaoYang
 * @Date:   2021-03-31 14:07:49
 * @Last Modified by:   ZhaoYang
 * @Last Modified time: 2021-04-22 20:09:14
 */
#include <iostream>

using namespace std;
double factorial(int i);

int main(int argc, char const *argv[])
{
    /* code */
    int i;
    while (1)
    {
        cout<<"输入(?!):";

        cin>>i;
        if(i<0)
            break;
        else
            cout<<factorial(i)<<endl;
    }
    
    return 0;
}
double factorial(int i)
{
    return (i==0?1:i*factorial(i-1));
}

