#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 

    long long int x, y; 
    cin>>x>>y; 
    int cnt =0; 

    //3 20

    while(x <= y){
        long long int multi = x*2;
        if(multi <= y){
            cnt++;
            x = multi;
        }
        else break; 
    }

    cout<<cnt+1<<endl; 
    return 0; 
}