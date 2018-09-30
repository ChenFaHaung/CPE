#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

vector<int> pri;
// 建質數表，用 vector 暴力解
bool isprime(int a)
{
    for(int i=0; pri[i]<=sqrt(a); ++i)
    {
        if(a % pri[i] == 0)
            return false;
    }
    return true;
}

void prime()
{
    pri.push_back(2);
    pri.push_back(3);
    pri.push_back(5);
    pri.push_back(7);

    int tmp = pri.back();
    while(tmp <= 33000)
    {
        tmp += 2;
        if(isprime(tmp))
            pri.push_back(tmp);
    }
}

int main()
{
    int num;
    prime();

    while(cin >> num)
    {
        vector<int> kill;

        if(num == 0)
            break;

        for(int i=0; i<num; ++i)
            kill.push_back(i+1); // start from 1  

        int idx = 0, idx_f = 0;
        while(kill.size()>1) // on;y one can survive
        {
            // 先看到 idx 再 ++
            int m = pri[idx++]; // m for the prime number killed
            idx_f = (idx_f + m - 1) % kill.size(); // idx_f for the kill one. -1 because it's the size of kill length 
            kill.erase(kill.begin()+idx_f);
        }
        cout << kill[0] << endl; 
    }

    return 0;
}