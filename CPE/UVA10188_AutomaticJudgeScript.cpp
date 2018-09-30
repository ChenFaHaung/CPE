#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main()
{
    int team, ans, tim = 0;

    while(cin>>team && team) 
    {
        cin.get();// 包含 換行
        string output_team="";

        for(int i=0; i<team; ++i) // get test data
        {
            string tmp;
            getline(cin, tmp);
            output_team += tmp;
        }

        cin >> ans;
        cin.get();// 包含 換行
        string output_ans = "";

        for(int i=0; i<ans; ++i) // get answer data
        {
            string tmp;
            getline(cin, tmp);
            output_ans += tmp;
        }

        string ans_team = "";
        string ans_ans = ""; 

        for(int i= 0; i<output_team.size(); ++i)
        {
            if(isdigit(output_team[i])) // store only digit
                ans_team += output_team[i];
        }

        for(int i=0; i<output_ans.size(); ++i)
        {
            if(isdigit(output_ans[i]))
                ans_ans += output_ans[i];
        }

        int ac=1, pe=1;
        if(ans_ans == ans_team)
        {
            if(output_ans != output_team || ans != team)
                ac = 0;
        }
        else 
        {
            ac = 0;
            pe = 0;
        }

        if(ac==1)
            cout << "Run #" << ++tim << ": Accepted" << endl;
        else if(pe==1)
            cout << "Run #" << ++tim << ": Presentation Error" << endl;
        else
            cout << "Run #" << ++tim << ": Wrong Answer" << endl;
    }

    return 0;
}