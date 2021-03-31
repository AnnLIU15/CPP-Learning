/**
 * @Author: ZhaoYang
 * @Date:   2021-03-25 12:34:39
 * @Last Modified by:   ZhaoYang
 * @Last Modified time: 2021-03-25 13:33:19
 */
#include <iostream>

using namespace std;
void disp(int, int);

int main()
{
    /* code */
    int mins, hours;
    cout << "Enter the number of hours:";
    cin >> hours;
    cout << "\nEnter the number of mins:";
    cin >> mins;
    disp(hours, mins);
    return 0;
}

void disp(int hours, int mins)
{
    cout << hours << ":" << mins;
}
