/**
 * @Author: ZhaoYang
 * @Date:   2021-03-31 14:07:49
 * @Last Modified by:   ZhaoYang
 * @Last Modified time: 2021-04-01 18:27:18
 */
#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    /* code */
    double tax,wage;
    cout<<"Input your wage(tvarp): ";
    while (cin>>wage)
    {
        if (wage>35000)
            tax=0.2*(wage-15000);
        else if(wage>15000)
            tax=0.15*(wage-15000)+1000;
        else if(wage>5000)
            tax=(wage-5000)*0.1;
        else if(wage>=0)
            tax=0;
        else
            break;
        cout<<"your tax is: "<<tax<<endl;
        cout<<"Input your wage(tvarp): ";
    }
    
    
    return 0;
}

