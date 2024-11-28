#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 

    int t; cin>>t; 

    while(t--){
        int n; 
        cin>>n; 

        string a, b; 
        cin>>a>>b; 

        int chef = 0; 
        int chefina = 0; 

        for(int i=0; i<n; i++){
            if(a[i] == 'R' and b[i] == 'S'){
                chef++;
            }
            else if(a[i] == 'S' and b[i] == 'R'){
                chefina++;
            }
            else if(a[i] == 'S' and b[i] == 'P'){
                chef++;
            }
            else if(a[i] == 'P' and b[i] == 'S'){
                chefina++;
            }
            else if(a[i] == 'P' and b[i] == 'R'){
                chef++;
            }
            else if(a[i] == 'R' and b[i] == 'P'){
                chefina++;
            }
        }

        if(chef > chefina){
            cout<<0<<endl;
        }
        else if(chef == chefina){
            cout<<1<<endl;
        }
        else{
            int cnt = 0; 
            while(chef <= chefina){
                cnt++;
                chef++;
                chefina--;
            }
            cout<<cnt<<endl;
        }
    }
    return 0; 
}