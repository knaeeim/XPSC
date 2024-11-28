#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int cnt = 0;
        bool flag = true; 

        if (b == 1 || c == 1){
           flag = false;
        }
        int extro = 0 ;
        if(b%3 == 0){
            extro +=(b/3);
        }else{
            if(b%3 >= 3){
                extro += ceil(b / 3);
            }
            else{
                extro += ceil(b / 3) + 1;
            }
        }

        int univ = 0;

        if(c%3 ==0){
            univ +=(c/3);
        }
        else{
            if(c%3  >= 3){
                univ += ceil(c/3) + (c%3);
            }
            else{
                univ += ceil(c/3) + 1;
            }
        }

        if(flag) cout<<a+extro+univ<<endl;
        else cout<<-1<<endl; 
    }

    return 0;
}