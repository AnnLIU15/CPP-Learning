/**
 * @Author: ZhaoYang
 * @Date:   2021-03-31 14:07:49
 * @Last Modified by:   ZhaoYang
 * @Last Modified time: 2021-04-22 19:47:24
 */
#include <iostream>

using namespace std;
struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};
const void change_and_display(box);
void change_and_display(box*);
const void (*pf)(box);
void (*pf1)(box*);
int main(int argc, char const *argv[])
{
    box var={"aaa",4,4,4,0};
    change_and_display(var);
    change_and_display(&var);
    pf=change_and_display;
    pf1=change_and_display;
    pf(var);
    pf1(&var);
    return 0;
}
const void change_and_display(box var)
{
    cout<<"\nmaker:"<<var.maker
        <<"\nheight:"<<var.height
        <<"\nwidth:"<<var.width
        <<"\nlength:"<<var.length
        <<"\nvolume:"<<var.volume<<endl;
}
void change_and_display(box* pt)
{
    pt->volume=pt->height*pt->width*pt->length;
    cout<<"\npt->volume:"<<pt->volume<<endl;
}
