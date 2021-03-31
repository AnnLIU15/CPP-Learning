/**
 * @Author: ZhaoYang
 * @Date:   2021-03-31 14:07:49
 * @Last Modified by:   ZhaoYang
 * @Last Modified time: 2021-03-31 20:34:08
 */
#include <iostream>
#include<cstring>
using namespace std;


int main(int argc, char const *argv[])
{
    /* code */
    char var[50];
    int cnt=-1;
    cout<<"Enter words (to stop, type the word done)\n";
    do
    {
        /* code */
        cnt++;
        cin>>var;
    } while (strcmp("done",var)!=0);
    cout<<"\nsum of words is: "<<cnt;
    return 0;
}

