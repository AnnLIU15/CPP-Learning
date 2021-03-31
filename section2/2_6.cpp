/**
 * @Author: ZhaoYang
 * @Date:   2021-03-25 12:34:32
 * @Last Modified by:   ZhaoYang
 * @Last Modified time: 2021-03-25 13:30:15
 */
#include <iostream>

using namespace std;
void LightDistance(double var);

int main()
{
    /* code */
    cout<<"Enter the number of light years: ";
    double var;
    cin>>var;
    LightDistance(var);
    return 0;
}
void LightDistance(double var)
{
    cout<<var<<" light years = "<<63240*var<<" astronomical units.";
}
