// #include<bits/stdc++.h>
// using namespace std;
// #define yes cout << "YES\n"
// #define no cout << "NO\n"
// #define endl "\n"
// #define ll long long int
// #define pub push_back
// #define pob pop_back
// #define puf push_front
// #define pof pop_front
// #define vi vector<int>
// #define vll vector<ll>
// #define vp vector<pair<ll,ll>>
// #define sorta(arr) sort(arr.begin(), arr.end());
// #define sortd(arr) sort(arr.begin(), arr.end(), greater<int>());
// #define All(X) (X).begin(),(X).end()
// #define Unique(X) (X).erase(unique((X).begin(),(X).end()),(X).end())
// #define range(arr) for(auto el: arr) cout<<el<<" ";


// int main()
// {
//     ios::sync_with_stdio(false); 
//     cin.tie(NULL); 
    

//     int t; cin>>t; 

//     while(t--){
//         string s; cin>>s; 

//         map <char, int> mp;

//         for(int i = 0; i < s.size(); i++){
//             mp[s[i]]++;
//         }

//         if(mp.size() >= 2){
//             cout<< "YES" << endl; 
//             reverse(s.begin(), s.end());
//             cout<< s << endl;
//         } 
//         else{
//             cout<< "NO" << endl;  
//         }
//     }
//     return 0; 
// }



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
        string s; cin>>s; 
        string ans; 

        int left = 0, right = s.size() - 1; 
        int f = 1;
        while(left <= right){
            if(f == 1){
                ans +=s[right];
                right--;
            }
            else {
                ans += s[left];
                left++;
            }
            f = f ^ 1; 
        }

        if( ans == s) cout<< "NO" << endl; 
        else {
            cout<<"YES" <<endl;
            cout<< ans << endl; 
        }
    }
    return 0; 
}

/*
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
        string s; cin>>s; 
        string ans; 
        ans = s; 
        sort(ans.begin(), ans.end()); 
        if( ans == s){
            reverse(ans.begin(), ans.end());
        }
        if(s == ans) cout << "NO" << endl; 
        else{
            cout<< "YES" << endl; 
            cout<< ans << endl; 
        }
        
    }
    return 0; 
}
*/