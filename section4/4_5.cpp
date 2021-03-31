/**
 * @Author: ZhaoYang
 * @Date:   2021-03-31 14:07:49
 * @Last Modified by:   ZhaoYang
 * @Last Modified time: 2021-03-31 18:19:20
 */
#include <iostream>
#include<string>
using namespace std;
struct CandyBat
{
    /* data */
    string brand;
    float weight;
    int calories;
};


int main(int argc, char const *argv[])
{
    /* code */
    CandyBat snack={"Mocha Munch",2.3,350};
    cout<<snack.brand<<'\t'<<snack.weight<<'\t'<<snack.calories<<'\n';
    return 0;
}

