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

void generateSubsequence(string two, int index, string current, vector <string> &sub){
    if(index == two.length()){
        sub.push_back(current);
        return;
    }

    generateSubsequence(two, index + 1, current + two[index], sub);

    generateSubsequence(two, index + 1, current, sub); 
}

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    

    int t; cin>>t; 

    while(t--){
        int n, m; 
        cin>>n>>m; 

        string one, two; 
        cin>>one>>two; 

        vector <string> suboftwo, subofone; 

        generateSubsequence(two, 0, "", suboftwo); 

        generateSubsequence(one, 0, "", subofone); 

        sortd(subofone);
        sorta(suboftwo);

        range(subofone);
        cout<<endl<<endl;
        range(suboftwo);
        cout<<endl<<endl; 

        string ans = ""; 

        bool found = false;

        for(int i = 0; i < subofone.size(); i++){
            for(int j = 0; j < suboftwo.size(); j++){
                if(subofone[i] == suboftwo[j]){
                    found = true;
                    ans +=subofone[i];
                    break;
                }
            }
            if(found) break;
        }

        cout<<ans.size()<<endl;
    }
    return 0; 
}