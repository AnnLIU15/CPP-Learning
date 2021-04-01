/**
 * @Author: ZhaoYang
 * @Date:   2021-03-31 14:07:49
 * @Last Modified by:   ZhaoYang
 * @Last Modified time: 2021-04-01 19:51:50
 */
#include <iostream>
#include <string>

using namespace std;

struct bop
{
    string donatorName;
    double  totalAmount;
};

int main(int argc, char const *argv[])
{
    /* code */
    int size;
    cout<<"How many donator? ";
    cin>>size;
    if(size>0)
    {
        bop*p=new bop[size];
        for(int i=0;i<size;i++)
        {
            cout<<i+1<<"th infomation:\nname:";
            cin>>(p+i)->donatorName;
            cout<<"lump sum:";
            cin>>(p+i)->totalAmount;
        }
        /*
        Grand Patrons
        */
        cout<<"\n"<<size<<"\n";
        for (size_t i = 0; i < size; i++)
        {  
            cout<<(p+i)->donatorName<<endl;
            cout<<(p+i)->totalAmount<<endl;
        }
                
    }
    else
        cout<<"none!";
    return 0;
}

