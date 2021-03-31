/**
 * @Author: ZhaoYang
 * @Date:   2021-03-31 14:07:49
 * @Last Modified by:   ZhaoYang
 * @Last Modified time: 2021-03-31 19:52:00
 */
#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    float num;
    double sumOfNum=0;
    do
    {
        cout<<"Input Number: ";
        cin>>num;
        sumOfNum+=num;
        cout<<"Sum of Input: "<<sumOfNum<<endl;
    } while (0!=num);
    cout<<"Finish!";
    return 0;
}

