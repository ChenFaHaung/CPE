#include <stdio.h>
#include <string.h>

int main(){

    int sum, i, j, len, s, n;

    char str[1000]; /* 題目要求數字最大有1000位數 */

    while(scanf("%s", str)!=EOF){ /* 讀取一字串(怕數字超出int上限，故以字串讀取) */

        if(str[0]=='0' && strlen(str)==1) break; /* 若字串 = "0"，即跳出結束程式 */
        len = strlen(str);
        sum = 0;

        for(i=0; i<len; i++) /* 將所有字元個別轉成數字後加總 */
            sum += (str[i] - '0');

        if(sum%9!=0) printf("%s is not a multiple of 9.\n", str); /* 非九的倍數 */
        else { 
            n=1; /* 預設 1 階(個位數) */
            s=0;
            while(sum>9){ 
                 s=0;
                 while(sum>0){ /* 將所有位數加總 */
                     s+=sum%10;
                     sum/=10;
                 }
                 sum=s;
                 n++; /* 階層+1 */
            } /* 若sum為個位數，則結束計算；否則繼續計算階層。 */
        printf("%s is a multiple of 9 and has 9-degree %d.\n", str, n);
        }
    }
    return 0;
}