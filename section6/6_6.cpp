/**
 * @Author: ZhaoYang
 * @Date:   2021-03-31 14:07:49
 * @Last Modified by:   ZhaoYang
 * @Last Modified time: 2021-04-01 18:35:33
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
        cout<<"\nGrand Patrons: \n";
        for (size_t i = 0; i < size; i++)
            if((p+i)->totalAmount>10000)
                cout<<(p+i)->donatorName<<endl;
        cout<<"\nPatrons: \n";
        for (size_t i = 0; i < size; i++)
            if((p+i)->totalAmount<10000)
                cout<<(p+i)->donatorName<<endl;
    }
    else
        cout<<"none!";
    return 0;
}

