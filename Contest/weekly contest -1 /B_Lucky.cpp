#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 

    int n; 
    cin>>n; 

    string a[n]; 

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    for(int i=0; i<n; i++){
        int first = a[i][0] - '0';
        int second = a[i][1] - '0';
        int third = a[i][2] - '0';

        int sum = first + second + third; 

        int fourth = a[i][3] - '0';
        int fifth = a[i][4] - '0';
        int sixth = a[i][5] - '0';

        int sum2 = fourth + fifth + sixth; 

        if(sum == sum2) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0; 
}