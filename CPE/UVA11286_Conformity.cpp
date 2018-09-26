#include <iostream>
#include <cstdio>
#include <map>
#include <algorithm>
using namespace std;

int main() {
	int n, A[5];
	char buf[20];
	while(scanf("%d", &n) == 1 && n) {
		string str;
		map<string, int> record; // map
		while(n--) 
		{
			scanf("%d %d %d %d %d", &A[0], &A[1], &A[2], &A[3], &A[4]); // scanf each row
			sort(A, A+5); // sort them
			sprintf(buf, "%d%d%d%d%d", A[0], A[1], A[2], A[3], A[4]); // copy to string
			str = buf;
			record[str]++; // map counting
		}

		int max = 0, maxNum = 0;
		for(map<string, int>::iterator i = record.begin(); i != record.end(); i++) 
		{ // iterator memory
			if(i->second > max) // i->first: string 
				max = i->second, maxNum = 0; // if some cnt over max, maxNum must rerecord
			if(i->second == max)
				maxNum += max; // if max number same, you have to accumulate the total number 
		}
		printf("%d\n", maxNum);
	}
    return 0;
}