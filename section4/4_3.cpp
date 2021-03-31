/**
 * @Author: ZhaoYang
 * @Date:   2021-03-31 14:07:49
 * @Last Modified by:   ZhaoYang
 * @Last Modified time: 2021-03-31 18:13:24
 */
#include <iostream>
#include<cstring>
using namespace std;


int main(int argc, char const *argv[])
{
    /* code */
    const int maxSize=10;
    char last[maxSize];
    char first[maxSize];
    cout<<"Enter your first name: ";
    cin>>first;
    cout<<"Enter your last name: ";
    cin>>last;
    strcat(last,", ");
    strcat(last,first);
    cout<<"Here's the imformation in a single string: "
    <<last;

    
    return 0;
}

