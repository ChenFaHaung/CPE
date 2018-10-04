#include <stdio.h>

int mark_fifth_bit(int num)
{
    return num | 1<<(5-1); // set the fifth bit to 1
}
int main()
{
    int a = 1;
    printf("%d\n", mark_fifth_bit(a));

    return 0;
}