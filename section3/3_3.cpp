/**
 * @Author: ZhaoYang
 * @Date:   2021-03-25 12:49:02
 * @Last Modified by:   ZhaoYang
 * @Last Modified time: 2021-03-25 20:55:01
 */
#include <iostream>

using namespace std;
double degreeTrans(double,double,double);


int main()
{
    double degrees,mins,secs;
    /* code */
    cout<<"(____degrees,___mins,____secs):";
    cin>>degrees>>mins>>secs;
    cout<<degreeTrans(degrees,mins,secs);
    return 0;
    return 0;
}

double degreeTrans(double degrees,double mins,double secs)
{
    const short trans=60;
    
    return degrees+(mins+secs/60)/60;
}