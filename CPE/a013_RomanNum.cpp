#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int N2n(string s)
{
    int output = 0;
    for(int i=0; i<s.length(); ++i)
    {
        switch(s[i])
        {
        case 'I':
            ++output;
            break;
        case 'V':
            output += 5;
            if(s[i-1] == 'I') 
            {
                output -= 2; // may be -2 because the I add before
            }
            break;
        case 'X':
            output += 10;
            if(s[i-1] == 'I')
            {
                output -= 2;
            }
            break;
        case 'L':
            output += 50;
            if(s[i-1] == 'X')
            {
                output -= 20;
            }
            break;
        case 'C':
            output += 100;
            if(s[i-1] == 'X')
            {
                output -= 20;
            }
            break;
        case 'D':
            output += 500;
            if(s[i-1] == 'C')
            {
                output -= 200;
            }
            break;
        case 'M':
            output += 1000;
            if(s[i-1] == 'C')
            {
                output -= 200;
            }
            break;
        }
    }
    return output;
}

string n2N(int a)
{
    string s=""; // string C++ is convenient

    if(a == 0)
    {
        s = "ZERO";
        return s;
    }

    while(a > 0)
    {
        if(a >= 1000)
        {
            s += "M";
            a -= 1000;
        }
        else if(a >= 900)
        {
            s += "CM";
            a -= 900;
        }
        else if(a >= 500)
        {
            s += "D";
            a -= 500;
        }
        else if(a >= 400)
        {
            s += "CD";
            a -= 400;
        }
        else if(a >= 100)
        {
            s += "C";
            a -= 100;
        }
        else if(a >= 90)
        {
            s += "XC";
            a -= 90;
        }
        else if(a >= 50)
        {
            s += "L";
            a -= 50;
        }
        else if(a >= 40)
        {
            s += "XL";
            a -= 40;
        }
        else if(a >= 10)
        {
            s += "X";
            a -= 10;
        }
        else if(a >= 9)
        {
            s += "IX";
            a -= 9;
        }
        else if(a >= 5)
        {
            s += "V";
            a -= 5;
        }
        else if(a >= 4)
        {
            s += "IV";
            a -= 4;
        }
        else if(a >= 1)
        {
            s += "I";
            a -= 1;
        }
    }
    return s;
}

int main()
{
    string a, b;
    while(cin >> a)
    {
        if(a == "#")
        {
            break;
        }

        cin >> b;
        //cout << N2n(a) << " " << N2n(b) << endl;
        //cout << n2N(N2n(a)) << " " << n2N(N2n(b)) << endl;

        cout << n2N(abs(N2n(a) - N2n(b))) << endl;
    }

    return 0;
}
