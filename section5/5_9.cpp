/**
 * @Author: ZhaoYang
 * @Date:   2021-03-31 14:07:49
 * @Last Modified by:   ZhaoYang
 * @Last Modified time: 2021-03-31 20:37:19
 */
#include <iostream>
#include<string>
using namespace std;


int main(int argc, char const *argv[])
{
    /* code */
    string var;
    int cnt=-1;
    cout<<"Enter words (to stop, type the word done)\n";
    do
    {
        /* code */
        cnt++;
        cin>>var;
    } while ("done"!=var);
    cout<<"\nsum of words is: "<<cnt;
    return 0;
}

