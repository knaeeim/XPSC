#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 

    int a, b, c; 
    cin>>a>>b>>c; 

    bool flag = false;
 
    for(int i=0; i<=c; i++){
        for(int j=0; j<=c; j++){
            if(i*a + j*b == c or i*b + j*a == c){
                flag = true; 
                break;
            }
        }
    }

    if(flag) cout<<"Yes";
    else cout<<"No";

    return 0; 
}



/*
 // if(a==c or b==c) cout<<"Yes\n";
    // else if(a+b==c) cout<<"Yes\n";
    // else{
    //     int modulo = c%(a+b);
    //     if(modulo % a==0 or modulo % b == 0) cout<<"Yes\n";
    //     else cout<<"No\n";
    // }
*/