/**
 * @Author: ZhaoYang
 * @Date:   2021-03-25 12:28:04
 * @Last Modified by:   ZhaoYang
 * @Last Modified time: 2021-03-25 12:30:52
 */
#include <iostream>

using namespace std;
void mice();
void runs();
int main()
{
    /* code */
    mice();
    mice();
    runs();
    runs();
    return 0;
}
void mice()
{
    cout << "Three blind mice\n";
}
void runs()
{
    cout << "See how they run\n";
}
