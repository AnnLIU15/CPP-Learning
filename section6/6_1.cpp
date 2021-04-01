/**
 * @Author: ZhaoYang
 * @Date:   2021-03-31 14:07:49
 * @Last Modified by:   ZhaoYang
 * @Last Modified time: 2021-04-01 15:44:21
 */
#include <iostream>
#include <cctype>
#include <stack>
using namespace std;


int main(int argc, char const *argv[])
{
    /* code */
    stack<char> stackOfChar;
    char ch;
    cout<<"cin==================\n";
    do
    {
        cin.get(ch);
        if(isalnum(ch))
        stackOfChar.push(ch);
        /* code */
    } while (ch!='@');
    cout<<"cout=========================\n";
    int initSize=stackOfChar.size();
    for(int i=0;i<initSize;i++)
    {
        ch=stackOfChar.top();
        if(isalpha(ch))
            cout<<char((islower(ch)!=0?toupper(ch):tolower(ch)));
        stackOfChar.pop();
    }
    return 0;
}

