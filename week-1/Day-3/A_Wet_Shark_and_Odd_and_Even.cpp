#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    long long a[n];
    long long sum = 0;

    for (int i = 0; i < n; i++){
        cin >> a[i];
        sum +=a[i];
    }

    if(sum % 2 == 0) cout<<sum<<endl;
    else{
        sort(a, a+n);
        int first_odd = 0; 
        for(int i=0; i<n; i++){
            if(a[i] % 2 == 1){
                first_odd = a[i];
                break;
            }
        }

        sum -=first_odd;
        cout<<sum<<endl;
    }

    return 0;
}