/**
 * @Author: ZhaoYang
 * @Date:   2021-03-31 14:07:49
 * @Last Modified by:   ZhaoYang
 * @Last Modified time: 2021-04-01 19:48:14
 */
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;


int main(int argc, char const *argv[])
{
    /* code */
    
    ifstream files("aaa.txt");
    if (!files) 
    {   
        cout<<"can't open"; 
        return -1;
    }
    ostringstream tmp;
    tmp<<files.rdbuf();
    string fileVar=tmp.str();
    files.close();
    for (string::iterator it =fileVar.begin(); it != fileVar.end(); it++)
        if ( *it == '\n')
        {   fileVar.erase(it);
            it--;
        }
    cout<<"size is:"<<fileVar.size();
    return 0;
}

