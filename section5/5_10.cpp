/**
 * @Author: ZhaoYang
 * @Date:   2021-03-31 14:07:49
 * @Last Modified by:   ZhaoYang
 * @Last Modified time: 2021-03-31 20:43:44
 */
#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    /* code */
    int row;
    do
    {
        cout<<"Enter number of rows(bigger than zero): ";
        cin>>row;
    } while (row<0);
    for(size_t i=0;i<row;i++)
    {   for (size_t j = 0; j< row-i-1; j++)
            cout<<".";
        for (size_t j=row-i-1;j<row;j++)
            cout<<"*";
        cout<<'\n';
    }
        
    

    return 0;
}

