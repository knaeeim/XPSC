#include<bits/stdc++.h>
using namespace std;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define endl "\n"
#define ll long long int
#define pub push_back
#define pob pop_back
#define puf push_front
#define pof pop_front
#define vi vector<int>
#define vll vector<ll>
#define vp vector<pair<ll,ll>>
#define sorta(arr) sort(arr.begin(), arr.end());
#define sortd(arr) sort(arr.begin(), arr.end(), greater<int>());
#define All(X) (X).begin(),(X).end()
#define Unique(X) (X).erase(unique((X).begin(),(X).end()),(X).end())
#define range(arr) for(auto el: arr) cout<<el<<" ";


int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    

    int t; cin>>t; 

    while(t--){
        int n, m; 
        cin>>n>>m; 

        vll batsman(n), bowler(m);

        for(int i = 0; i < n; i++){
            cin>>batsman[i];
        } 

        for(int i = 0; i < m; i++){
            cin>>bowler[i];
        } 

        int total = n + m; 

        if(n < 4 or m < 4 or total < 11 ){
            cout<< -1 << endl;
            continue; 
        }

        sortd(batsman); 
        sortd(bowler); 

        ll Sum = 0;

        for(int i = 0; i < 4; i++ ){
            Sum += batsman[i]; 
            Sum += bowler[i];
        }

        int cnt = 0, i = 4, j = 4;

        while(cnt < 3){
            if(i < n and j < m){
                if(bowler[j] < batsman[i] ){
                    Sum += batsman[i];
                    i++;
                }
                else{
                    Sum += bowler[j]; 
                    j++;
                }
            }
            else if( i < n){
                Sum += batsman[i];
                i++;
            }
            else{
                Sum += bowler[j];
                j++; 
            }
            cnt++;
        } 

        cout<< Sum <<endl; 

    }
    return 0; 
}