//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}
// } Driver Code Ends


pair<long long, long long> getMinMax(long long a[], int n) {
    long long mx = INT_MIN;
    long long mn = INT_MAX;
    
    for(int i = 0;i<n;i++){
        mx = max(a[i],mx);
        mn = min(a[i],mn);
    }
    pair<long long, long long> output;
    output.first = mn;
    output.second = mx;
    return output;
    
}