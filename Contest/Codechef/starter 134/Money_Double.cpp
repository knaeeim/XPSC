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
        int amount, year; 
        cin>>amount>>year; 

        if(amount > 999){
            int sum = amount; 
            for(int i = 0; i < year; i++){
                sum *= 2;
            }
            cout << sum << endl;
        }
        else{
            int sum1 = amount + 1000;
            if(sum1 > 999){
                for(int i = 0; i < year - 1; i++){
                    sum1 *= 2;
                }
            }
            else{
                for(int i = 0; i < year - 1; i++){
                    sum1 += 1000;
                }
            }
            cout << sum1 << endl;  

        }
    }
    return 0; 
}