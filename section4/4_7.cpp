/**
 * @Author: ZhaoYang
 * @Date:   2021-03-31 14:07:49
 * @Last Modified by:   ZhaoYang
 * @Last Modified time: 2021-03-31 18:52:17
 */
#include <iostream>

using namespace std;
struct Pizza
{
    string  company;
    float   diameter;
    float   weight;
};


int main(int argc, char const *argv[])
{
    /* code */
    Pizza initP;
    cin>>initP.company>>initP.diameter>>initP.weight;
    cout<<initP.company
        <<initP.diameter
        <<initP.weight;
    return 0;
}

