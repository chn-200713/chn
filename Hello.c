#include <stdio.h>
#include <stdint.h>
volatile uint8_t flag;
void chn (void)
{
    flag=1;
    printf("终端");
}
int main (void)
{
    char c;
    flag=0;
    while(flag==0)
    {
        if(getchar()=='\n')
        {
            chn();
        }
    }
    printf("你吗");
    return 0;
}
