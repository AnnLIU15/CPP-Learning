/**
 * @Author: ZhaoYang
 * @Date:   2021-03-31 14:07:49
 * @Last Modified by:   ZhaoYang
 * @Last Modified time: 2021-03-31 20:19:25
 */
#include <iostream>
#include<string>

using namespace std;
struct car
{
    /* data */
    string manufacturer;
    int    productionYear; 
};


int main(int argc, char const *argv[])
{
    /* code */
    int numOfCar;
    cout<<"How many cars do you wish to catalog? ";
    cin>>numOfCar;
    car *var=new car[numOfCar];
    for(size_t i=0;i<numOfCar;i++)
    {
        cout<<"Car #"<<i+1<<":\n";
        cout<<"Please enter the make:";
        cin>>(var+i)->manufacturer;
        cout<<"Please enter the year made:";
        cin>>(var+i)->productionYear;
    }
    cout<<"Here is your collection:\n";
    for (size_t i=0;i<numOfCar;i++)
        cout<<(var+i)->manufacturer<<'\t'<<(var+i)->productionYear;
    delete []var;
    return 0;
}

