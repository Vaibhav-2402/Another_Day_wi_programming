#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
    const unsigned char WHITE=219;
    const unsigned char GREY=176;
    unsigned char ch;
    for(int count=0;count<=80*25-1;count++)
    {
        ch = WHITE;
        for(int j=2;j<count;j++)
        if(count%j==0)
        {
            ch = GREY;
            break;
        }
        cout<<ch;
    }
    
    getch();
    return 0;
}