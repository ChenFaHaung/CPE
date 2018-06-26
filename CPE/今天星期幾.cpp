#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main(){

	int num_input = 0, month = 1, day = 1;
	string str[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

	int month_of_day[] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int days = 0; // 總共幾天

	cin >> num_input;

	for (int i = 0; i < num_input; i++){
		scanf("%d%d", &month, &day);
		days = 0;
		for (int j = 1; j < month; j++){
			days += month_of_day[j - 1];
		}// end of days cal
		days += day;
		//cout << str[((days -1) % 7 + count- ) % 7] << endl;
		//cout << str[(days % 7 + (7 - count)) %7] << endl;
		cout << str[((days - 1 ) % 7 +5)%7] << endl;
	}
	return 0;
}

