/**
 * @Author: ZhaoYang
 * @Date:   2021-03-31 14:07:49
 * @Last Modified by:   ZhaoYang
 * @Last Modified time: 2021-03-31 14:50:07
 */
#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    /* code */
    int inch,gl;
    bool selector;
    cout<<"inch or km(0->inch)";
    cin>>selector;
    cout<<"gl and km/inch:";
    cin>>gl>>inch;
    cout<<"=========================================\n";
    if(select)
        cout<<"gl/inch:"<<1.0*gl/inch;
    else
        cout<<"gl/km:"<<1.0*gl/inch;
    return 0;
}

