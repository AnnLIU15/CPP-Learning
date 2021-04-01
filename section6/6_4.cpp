/**
 * @Author: ZhaoYang
 * @Date:   2021-03-31 14:07:49
 * @Last Modified by:   ZhaoYang
 * @Last Modified time: 2021-04-01 16:36:30
 */
#include <iostream>

using namespace std;

struct bop
{
    char fullname[10];
    char title[10];
    char bopname[10];
    int  preference;
};

int main(int argc, char const *argv[])
{
    /* code */
    bop nothing[5]={{"a","aa","aaa",0},
                    {"b","bb","bbb",1},                                    
                    {"c","cc","ccc",2},                                    
                    {"d","dd","ddd",1},                                    
                    {"e","ee","eee",0}};
    cout<<"a. display by name\t\tb. display by title\n"
        <<"c. display byt bopname\td. display by preference\nq. quit\n";
    char choice;
    bool breakloop=0;
    while (!breakloop)
    {
        cout<<"Enter your choice: ";
        cin>>choice;
        
        switch(choice)
        {
            case 'a':
                for (size_t i = 0; i < 5; i++)
                    cout<<nothing[i].fullname<<endl;
            break;
            case 'b':
                for (size_t i = 0; i < 5; i++)
                    cout<<nothing[i].title<<endl;
            break;
            case 'c':
                for (size_t i = 0; i < 5; i++)
                    cout<<nothing[i].bopname<<endl;
            break;
            case 'd':
                for (size_t i = 0; i < 5; i++)
                    if(0==nothing[i].preference)
                        cout<<nothing[i].fullname<<endl;
                    else if (1==nothing[i].preference)
                        cout<<nothing[i].title<<endl;
                    else if (2==nothing[i].preference)
                        cout<<nothing[i].bopname<<endl;
            break;
            case 'q':
                breakloop=1;
                break;
            default: break;
        }
    }
    
    return 0;
}

