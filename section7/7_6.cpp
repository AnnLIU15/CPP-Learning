/**
 * @Author: ZhaoYang
 * @Date:   2021-03-31 14:07:49
 * @Last Modified by:   ZhaoYang
 * @Last Modified time: 2021-04-23 18:23:48
 */
#include <iostream>

using namespace std;
int Fill_array(double *, int);
void Show_array(double *, int);
void Reverse_array(double *, int, int bg = 0);
int main(int argc, char const *argv[])
{
    /* code */
    double array_double[10];
    int length=10;
    length=Fill_array(array_double,length);
    Show_array(array_double,length);
    Reverse_array(array_double,length,1);
    Show_array(array_double,length);
    return 0;
}
int Fill_array(double *arr, int length)
{
    double tmp;
    int cnt = 0;
    while (cin >> tmp && cnt < length)
    {
        *(arr + cnt) = tmp;
        cnt++;
    }
    return cnt;
}
void Show_array(double *arr, int length)
{
    for (int i = 0; i < length; i++)
        printf("数组第%d个元素为:%f\n", i + 1, *(arr + i));
}
void Reverse_array(double *arr, int length, int bg)
{
    printf("从第%d个位置开始翻转\n",bg);
    for (int i = 0 + bg; i <= (length - bg)/2.0; i++)
        swap(*(arr + i), *(arr + (length - 1 - i)));
}