/**
 * @Author: ZhaoYang
 * @Date:   2021-03-25 12:49:02
 * @Last Modified by:   ZhaoYang
 * @Last Modified time: 2021-03-25 20:31:58
 */
#include <iostream>

using namespace std;
double inch2foot(double inch);

int main()
{
    double inchs;
    /* code */
    cout<<"___inchs:";
    cin>>inchs;
    cout<<inch2foot(inchs);
    return 0;
}
double inch2foot(double inch)
{
    const int trans=12; 
    return trans*inch;
}
