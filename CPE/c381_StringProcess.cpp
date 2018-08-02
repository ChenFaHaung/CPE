#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main()
{
	long long int a, b;

	while(cin >> a >> b)
	{
		if(a >= 1000001 || b >= 101)
		{
			break;
		}
		if(a == 0 && b == 0)
		{
			break;
		}
		string tmp, tot;
		long long int c[101];

		for(long long int i=0; i<=a; ++i)
		{
			getline(cin, tmp);
			tot += tmp;
		}
		
		for(long long int i=0; i<b; ++i)
		{
			cin >> c[i];
		}

		for(long long int i=0; i<b; ++i)
		{
			cout << tot[c[i]-1];
		}
		cout << endl;
	}

	return 0;
}