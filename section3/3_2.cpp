/**
 * @Author: ZhaoYang
 * @Date:   2021-03-25 12:49:02
 * @Last Modified by:   ZhaoYang
 * @Last Modified time: 2021-03-25 20:42:58
 */
#include <iostream>
#include<cmath>
using namespace std;
double inch2foot(double,double,double);

int main()
{
    double feet,inchs,pounds;
    /* code */
    cout<<"(____feet,___inchs,____pounds):";
    cin>>feet>>inchs>>pounds;
    cout<<inch2foot(feet,inchs,pounds);
    return 0;
}
double inch2foot(double feet,double inchs,double pounds)
{
    const short trans=12;
    const float inch2metre=0.0254;
    const float pound2kilo=2.2; 
    double metre=(feet/trans+inchs)*inch2metre;
    double kg=pound2kilo*pounds;
    return kg/pow(metre,2);
}