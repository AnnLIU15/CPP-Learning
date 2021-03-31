/**
 * @Author: ZhaoYang
 * @Date:   2021-03-31 14:07:49
 * @Last Modified by:   ZhaoYang
 * @Last Modified time: 2021-03-31 18:02:02
 */
#include <iostream>



int main(int argc, char const *argv[])
{
    using std::cout;
    using std::cin;
    using std::string;

    string name,dessert;
    cout<<"Enter your name:\n";
    cin>>name;
    cout<<"Enter your favourite dessert:\n";
    cin>>dessert;
    cout<<"I have some delicious "<<dessert<<
        " for you, "<<name<<".\n";
    /* code */
    return 0;
}

