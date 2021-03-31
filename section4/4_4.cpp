/**
 * @Author: ZhaoYang
 * @Date:   2021-03-31 14:07:49
 * @Last Modified by:   ZhaoYang
 * @Last Modified time: 2021-03-31 18:15:25
 */
#include <iostream>
#include<string>
using namespace std;


int main(int argc, char const *argv[])
{
    /* code */
    
    string last;
    string first;
    cout<<"Enter your first name: ";
    cin>>first;
    cout<<"Enter your last name: ";
    cin>>last;
    last=last+", "+first;
    cout<<"Here's the imformation in a single string: "
    <<last;

    
    return 0;
}

