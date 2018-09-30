#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main()
{
	int a;

	while(cin >> a && a > 0)
	{
		string b[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
		int mon, day, ans;

		int mon_d[] = {0, 3, 28, 7, 4, 9, 6, 11, 8, 5, 10, 7, 12}; // each month's Monday

		for(int i=0; i<a; ++i)
		{
			cin >> mon >> day;
			ans = (day - mon_d[mon]) %7;

			if(ans < 0)
				ans += 7;

			cout << b[ans] << endl;
		}
	}

	return 0;
}