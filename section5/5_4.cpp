/**
 * @Author: ZhaoYang
 * @Date:   2021-03-31 14:07:49
 * @Last Modified by:   ZhaoYang
 * @Last Modified time: 2021-03-31 19:58:46
 */
#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    /* code */
    float       DaphneSum=100;
    float       CleoSum=100;
    for(int i=1;;i++)
    {
        DaphneSum+=10;
        CleoSum*=1.05;
        if(DaphneSum<=CleoSum)
        {
            cout<<i<<" years"
                <<"\nCleo: "<<CleoSum
                <<"$\nDaphne: "<<DaphneSum
                <<"$\n";
            break;
        }
    }
    return 0;
}

