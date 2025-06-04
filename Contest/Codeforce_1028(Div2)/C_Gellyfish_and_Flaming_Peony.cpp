/*  
    Link :- 
    -------------- Learning From This Problem ---------------

*/


#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int INF = 1e9;

void precompute(){}

int gcd(int x, int y){
    if(y == 0) return x;
    return gcd(y, x%y);
}

vector<int> findPrimeFactors(int n)
{
    // To store the prime factor
    vector<int> primeFactors(9, 0);

    int j = 0;

    // 2s that divide n
    if (n % 2 == 0) {
        primeFactors[j++] = 2;
        while (n % 2 == 0)
            n >>= 1;
    }

    // N must be odd at this point
    // Skip one element
    for (int i = 3;
         i * i <= n; i += 2) {

        if (n % i == 0) {

            // Update the prime factor
            primeFactors[j++] = i;
            while (n % i == 0)
                n /= i;
        }
    }

    // If n is a prime number
    // greater than 2
    if (n > 2)
        primeFactors[j++] = n;
    
    vector<int> PrimeFactors(j);
    
    for(int i = 0; i < j; i++)
    {
        PrimeFactors[i] = primeFactors[i];
    }
    
    return PrimeFactors;
}

// Function that finds the shortest
// subsequence
void findShortestSubsequence(vector<int> &dp, vector<int> a,
                        int index, vector<int> primeFactors)
{
    int n = a.size();

    for (int j = index; j < n; j++) {
        int bitmask = 0;

        for (int p = 0;
             p < primeFactors.size(); p++) {

            // Check if the prime factor
            // of first number, is also
            // the prime factor of the
            // rest numbers in array
            if ((a[j] % primeFactors[p]) == 0) {

                // Set corresponding bit
                // of prime factor to 1,
                // it means both these
                // numbers have the
                // same prime factor
                bitmask ^= (1 << p);
            }
        }

        for (int i = 0; i < dp.size(); i++) {

            // If no states encountered
            // so far continue for this
            // combination of bits
            if (dp[i] == n + 1)
                continue;

            // Update this state with
            // minimum ways to reach
            // this state
            dp[bitmask & i]
                = min(dp[bitmask & i],
                           dp[i] + 1);
        }
    }
}

int printMinimumLength(vector<int> a)
{
    int Min = a.size() + 1;

    for (int i = 0; i < a.size() - 1; i++) {

        // Find the prime factors of
        // the first number
        vector<int> primeFactors
            = findPrimeFactors(a[i]);

        int n = primeFactors.size();
    
        // Initialize the array with
        // maximum steps, size of the
        // array + 1 for instance
        vector<int> dp(1 << n, a.size() + 1);

        // Express the prime factors
        // in bit representation

        // Total number of set bits is
        // equal to the total number
        // of prime factors
        int setBits = (1 << n) - 1;

        // Indicates there is one
        // way to reach the number
        // under consideration
        dp[setBits] = 1;
        findShortestSubsequence(dp, a, i + 1,primeFactors);

        // State 0 corresponds
        // to gcd of 1
        Min = min(dp[0], Min);
    }

    return Min;
}

void solve() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int g = 0;
    for(int i=0; i<n; i++){
        g = gcd(arr[i], g);
    }

    int cnt = 0;
    for(int i=0; i<n; i++){
        if(arr[i] == g) cnt++;
    }

    if(cnt > 0){
        cout<<(n - cnt)<<"\n";
        return;
    }

    for(int i=0; i<n; i++){
        arr[i] /= g;
    }

    int mn = printMinimumLength(arr);

    cout<<(n - 1 + mn - 1)<<"\n";
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    precompute();
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    return 0;
}



