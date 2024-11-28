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
        int n; cin>>n; 

        vi om(n), adday(n); 

        for(int i=0; i<n; i++) cin>>om[i];
        for(int i=0; i<n; i++) cin>>adday[i];

        int addayCnt = 0, omCnt = 0; 

        int cnt1 = 0; 
        for(int i=0; i<n; i++){
            if(om[i] > 0){
                cnt1++;
                omCnt = max(omCnt, cnt1);
            }
            else if(om[i] == 0){
                cnt1 = 0; 
            }
        }

        int cnt2 = 0; 
        for(int i=0; i<n; i++){
            if(adday[i] > 0){
                cnt2++;
                addayCnt = max(addayCnt, cnt2);
            }
            else if(adday[i] == 0){
                cnt2 = 0; 
            }
        }

        // cout<<omCnt<<" "<<addayCnt<<endl;

        if(addayCnt > omCnt) cout<<"Addy"<<endl;
        else if(omCnt > addayCnt) cout<<"Om"<<endl;
        else cout<<"Draw"<<endl; 

    }
    return 0; 
}