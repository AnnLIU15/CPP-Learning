/**
 * @Author: ZhaoYang
 * @Date:   2021-03-31 14:07:49
 * @Last Modified by:   ZhaoYang
 * @Last Modified time: 2021-04-22 20:05:11
 */
#include <iostream>

using namespace std;
void cal_percent();

int main(int argc, char const *argv[])
{
    /* code */
    cal_percent();
    return 0;
}
void cal_percent()
{
    double p = 1.0 / 27.0;
    for (size_t i = 5; i > 0; i--)
        p *= (i / (42.0 + i));

    printf("%3e", p);
}