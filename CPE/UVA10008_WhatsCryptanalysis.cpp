#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>

// getline compare function struct

using namespace std;

typedef struct node
{
	int ac, cnt;
}Data;

bool compare(Data x, Data y)
{
	// front < behind
	if(x.cnt == y.cnt)
	{
		return y.ac > x.ac;
	}

	else 
		return y.cnt < x.cnt;
}

int main()
{
	int a, c[26];
	string str;
	Data d[26]; // struct array

	while(cin >> a)
	{
		// clear the char array for calculate
		for(int j=0; j<26; ++j)
			c[j] = 0;

		for(int i=0; i<=a; ++i)
		{
			// get one line remember <=a
			getline(cin, str);
			
			for(int j=0; j<str.length(); ++j)
			{ // isplaha; toupper; ascii for index
				if(isalpha(str[j]))
					c[toupper(str[j]) - 'A']++;
			}
		}

		int pc = 0; // cnt for sort

		for(int i=0; i<26; ++i)
		{
			if(c[i] > 0)
			{// array to struct for char and cnt
				d[pc].ac = i+'A';
				d[pc].cnt = c[i];
				++pc;
			}
		}
		// compare function 
		sort(d, d+pc, compare);

		for(int i=0; i<pc; ++i)
		{ // remember to char
			cout << (char)d[i].ac << " " << d[i].cnt << endl;
		}

	}

	return 0;
} 