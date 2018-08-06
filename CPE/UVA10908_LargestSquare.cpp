#include <iostream>
#include <cstdio>

using namespace std;

bool check(char mp[101][101], char c, int s_r, int e_r, int s_c, int e_c, int inc_r, int inc_c)
{
    for( ; s_r <= e_r && s_c <= e_c; s_r +=inc_r, s_c += inc_c)
    {
        if(mp[s_r][s_c] != c)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int a;

    while(scanf("%d", &a) != EOF)
    {
        int M,N,Q;
        if(a > 20){break;}
        for(int ss = 0; ss<a; ++ss)
        {
            cin >> M >> N >> Q;
            cout << endl << M << " " << N << " " << Q << endl; 

            char plate[101][101] = {0};
            for(int i=0; i<M; ++i)
            {
              for(int j=0; j<N; ++j)
                {
                    cin >> plate[i][j];
                }
            }
            int s,d;
            for(int i=0; i<Q; ++i)
            {
                cin >> s >> d;
                int squ = 1;
                ++s;++d;
                while(true)
                {
                    if(!check(plate, plate[s][d], s-squ, s-squ, d-squ, d+squ, 0, 1))
                    {
                        break;
                    }    
                    if(!check(plate, plate[s][d], s+squ, s+squ, d-squ, d+squ, 0, 1))
                    {
                        break;
                    }
                    if(!check(plate, plate[s][d], s-squ, s+squ, d-squ, d-squ, 1, 0))
                    {
                        break;
                    }
                    if(!check(plate, plate[s][d], s-squ, s+squ, d+squ, d+squ, 1, 0))
                    {
                        break;
                    }

                    ++squ;
                }
                --squ;
                cout << squ *2 +1 << endl;

            }
        }
    }

    return 0;
}