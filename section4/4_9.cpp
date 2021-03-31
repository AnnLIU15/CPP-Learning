/**
 * @Author: ZhaoYang
 * @Date:   2021-03-31 14:07:49
 * @Last Modified by:   ZhaoYang
 * @Last Modified time: 2021-03-31 18:57:24
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
    CandyBat* snack=new CandyBat [3];
    for(int i=0;i<3;i++)
        *(snack+i)={"Mocha Munch",2.3,350};
    for(int i=0;i<3;i++)
        cout<<(snack+i)->brand<<'\t'<<(snack+i)->weight
            <<'\t'<<(snack+i)->calories<<'\n';
    return 0;
}

