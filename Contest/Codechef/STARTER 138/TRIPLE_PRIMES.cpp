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

// Get Divisors of a Number (get all divisor's sum if you want)
vll divisors(ll digit){ vll factors;
    for (ll i = 1; i * i <= digit; i++){
        if(digit % i == 0){
            factors.pub(i); 
            if((digit / i) != i) factors.pub(digit / i);
        }
    }
    return factors;
}

const int mx = 1e7+123;
bitset<mx> isPrime;
vector<int>primes;

// Sieve
void PrimeGen(int n){
    // Making all the odd numbers prime [Except 2, all the primes are odd]
    for(int i = 3; i <= n; i+=2) isPrime[i] = 1;

    // Filtering composite by Harmony Series
    int sq = sqrt(n);
    for (int i = 3; i <= sq; i+=2){
        if(isPrime[i] == 1){
            for (int j = i*i; j <= n; j+=i){
                isPrime[j] = 0;
            }
        }
    }
    // Pushing Primes
    primes.push_back(2);
    for (int i = 3; i <= n; i+=2){
        if(isPrime[i] == 1) primes.push_back(i); 
    }
}

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    
    PrimeGen(1e6);
    
    int t; cin>>t; 

    while(t--){
        ll n; cin>>n;

        bool found = false;

        for(int i = 0; i < primes.size() and primes[i] * primes[i] < n ; i++){
                ll first = primes[i] * primes[i];
                if(first > n) break;
            for(int j = i+1; j < primes.size() and primes[j] * primes[j] <  n - first; j++){
                    ll second = primes[j] * primes[j];
                    if(first + second > n) break;
                for(int k = j+1; k < primes.size() and primes[k] * primes[k] <= n - first - second; k++){
                        ll third = primes[k] * primes[k];
                        if(first + second + third == n){
                            found = true;
                            break;
                        }
                }
                if(found) break;
            }
            if(found) break;
        }

        if(found) yes;
        else no;
    }
    
    return 0; 
}