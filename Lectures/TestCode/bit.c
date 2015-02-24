#include <stdio.h>

int main(void)
{
    int x = 21;
    int y = 39;

    printf("Sizeof(int):%d\n",sizeof(int));
    printf("  x   =%3d     hex:%08x\n",x,x);
    printf("  y   =%3d     hex:%08x\n",y,y);
    /* Operators */
    printf("  x&y =%3d     hex:%08x\n",x&y,x&y);  
    printf("  x|y =%3d     hex:%08x\n",x|y,x|y);
    printf("  x^y =%3d     hex:%08x\n",x^y,x^y);

    printf("  ~x  =%3d     hex:%08x\n",~x,~x);
    printf("  ~y  =%3d     hex:%08x\n",~y,~y);

    printf("  x<<1=%3d     hex:%08x\n",x<<1,x<<1);
    printf("  y>>1=%3d     hex:%08x\n",y>>1,y>>1);
    return 0;

}
