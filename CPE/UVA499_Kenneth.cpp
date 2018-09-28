#include <stdio.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main(void) {
	int i, n[128], ans;
	char c, d;
	memset(n, 0, sizeof(n));
	while(scanf("%c", &c) != EOF) {
		if(c != '\n')
			n[c]++; // cnt time of each char they show up 
		else {
			ans=0;
			for(d = 'A'; d <= 'Z'; d++) // ASCII code for index
				if(n[d] > ans)
					ans = n[d]; // record the largest one
			for(d = 'a'; d <= 'z'; d++)
				if(n[d] > ans)
					ans = n[d];
			for(d = 'A'; d <= 'Z'; d++)
				if(n[d] == ans)
					printf("%c", d); // find the largest
			for(d = 'a'; d <= 'z'; d++)
				if(n[d] == ans)
					printf("%c", d);
			printf(" %d\n", ans);
			memset(n, 0, sizeof(n)); // clean the array
		}
	}
	return 0;
}
