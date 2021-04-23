/**
 * @Author: ZhaoYang
 * @Date:   2021-03-31 14:07:49
 * @Last Modified by:   ZhaoYang
 * @Last Modified time: 2021-04-22 19:34:44
 */
#include <iostream>

using namespace std;
double harmonic_mean(int, int);

int main(int argc, char const *argv[])
{
    /* code */
    double x, y;
    while (1)
    {
        //cin>>x>>y;
        scanf("%lf %lf", &x, &y);
        /*
        在scanf %lf->double %f->float
        scanf &x &y
        在printf %f->double
        printf x,y
        */
        if (0 == x || 0 == y)
            break;
        printf("%.2f and %.2f harmonic mean: %.2f\n", x, y, harmonic_mean(x, y));
    }

    return 0;
}

double harmonic_mean(int x, int y)
{
    return 2.0 * x * y / (x + y);
}