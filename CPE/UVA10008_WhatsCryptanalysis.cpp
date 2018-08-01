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
	Data d[26];

	while(cin >> a)
	{
		for(int j=0; j<26; ++j)
		{
			c[j] = 0;
		}

		for(int i=0; i<=a; ++i)
		{
			getline(cin, str);
			
			for(int j=0; j<str.length(); ++j)
			{
				if(isalpha(str[j]))
				{
					c[toupper(str[j]) - 'A']++;
				}
			}
		}

		int pc = 0;

		for(int i=0; i<26; ++i)
		{
			if(c[i] > 0)
			{
				cout << c[i] << endl;
				d[pc].ac = i+'A';
				d[pc].cnt = c[i];
				++pc;
			}
		}

		sort(d, d+pc, compare);

		for(int i=0; i<pc; ++i)
		{
			cout << (char)d[i].ac << " " << d[i].cnt << endl;
		}

	}

	return 0;
} 