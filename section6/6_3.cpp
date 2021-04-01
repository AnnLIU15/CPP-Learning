/**
 * @Author: ZhaoYang
 * @Date:   2021-03-31 14:07:49
 * @Last Modified by:   ZhaoYang
 * @Last Modified time: 2021-04-01 16:20:27
 */
#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    /* code */
    cout<<"Please enter one of the following choices:\n"
        <<"c) carnivore\t\t\tp) pianist\nt) tree\t\t\t\tg) game\n";
    char var;
    while (1)
    {
       cout<<"Please enter a c, p, t or g: ";
       cin>>var;
       if(var=='c'||var=='p'||var=='t'||'g'==var)
            break;
    }
    cout<<"A maple is a tree.\n";
    return 0;
}

