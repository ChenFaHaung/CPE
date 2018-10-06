#include <stdio.h>

int mark_fifth_bit(int num)
{
    return num | 1<<(5-1); // set the fifth bit to 1
}
int main()
{
    int a = 4;
    printf("%d\n", mark_fifth_bit(a));
    printf("%d\n", a);

    int cnt = 0, b = 4;
    while(b)
    {
        cnt++; b = b & (b-1);
        printf("%d\t", b);
    }
    printf("%d\n", cnt);

    unsigned long v1 = 0x00001111;
    unsigned long v2 = 0x00001202;
    unsigned long v;
    v = v1 & (~v2);
    //v = v | v2;

    printf("v: %lu\n", v);
    return 0;
}