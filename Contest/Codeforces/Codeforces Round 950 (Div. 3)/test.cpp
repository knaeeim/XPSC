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
#define Rocket ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int main(){ Rocket;
    int t; cin>>t;
    while(t--){
        int n, m, k; cin>>n>>m>>k;
        vll v(n);
        map<ll, ll>mp;
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            mp[v[i]]++;
        }

        ll number = v[m-1];
        sortd(v);

        bool ok = false;
        if(mp[number] > 1){
            ll currPosF = -1;
            ll currPosS = -1;
            for (int i = 0; i < n; i++)
            {
                if(v[i] == number){
                    currPosF = i+1;
                    break;
                }
            }
            for (int i = n-1; i >= 0; i--)
            {
                if(v[i] == number){
                    currPosS = i+1;
                    break;
                }
            }
            ll big = max(currPosF, currPosS);
            ll sm = min(currPosF, currPosS);
            if(big > k and sm > k) no;
            else if(big > k and sm <= k) cout<<"MAYBE"<<endl;
            else if(big <= k and sm <= k) yes;
        }else{
            ll currPos = -1;
            for (int i = 0; i < n; i++)
            {
                if(v[i] == number){
                    currPos = i+1;
                    break;
                }
            }
            if(currPos > k) no;
            else yes;
        }

    }
    return 0;
}