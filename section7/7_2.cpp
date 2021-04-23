/**
 * @Author: ZhaoYang
 * @Date:   2021-03-31 14:07:49
 * @Last Modified by:   ZhaoYang
 * @Last Modified time: 2021-04-22 19:34:39
 */
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    double sorce[10] = {0};
    short i = 0;
    double sum_of = 0;
    for (; i < 10; i++)
    {
        printf("第%d次分数输入:", 1 + i);
        scanf("%lf", &sorce[i]);
        if (sorce[i] < 0)
            break;
        sum_of += sorce[i];
    }
    for (size_t j = 0; j < i; j++)
    {
        printf("第%ld次成绩为: %f\n", j + 1, sorce[j]);
    }
    printf("平均成绩为: %.4f\n", sum_of / (i));

    return 0;
}
