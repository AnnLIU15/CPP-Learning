/**
 * @Author: ZhaoYang
 * @Date:   2021-03-31 14:07:49
 * @Last Modified by:   ZhaoYang
 * @Last Modified time: 2021-04-01 19:03:56
 */
#include <iostream>
#include <string>
#include <sstream>


int main(int argc, char const *argv[])
{
    /* code */
    int VowelcharCnt, consonantscharCnt,othercharCnt;
    VowelcharCnt=consonantscharCnt=othercharCnt=0;
    std::string tmp;
    std::cout<<"Enter words (q to quit):\n";
    bool whenBreak=1;
    while (whenBreak)
    {
        std::cin>>tmp;
        std::istringstream istr(tmp);
        while(istr>>tmp)
        {
            std::cout<<"test:"<<tmp<<std::endl;
            if(tmp=="q")
            {    
                whenBreak=0;
                break;
            }
            else if (0==isalpha(tmp[0]))
                othercharCnt++;
            else
                switch (tmp[0])
                {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':VowelcharCnt++;
                    break;
                default:consonantscharCnt++;
                    break;
                }
        }
    }
    std::cout<<VowelcharCnt<<" words beginning with vowels\n"
        <<consonantscharCnt<<" words beginning with consonants\n"
        <<othercharCnt<<" others\n";
    return 0;
}

