#include<bits/stdc++.h>
using namespace std;
int f(int n ,vector<int> &dp){
    // if(n<=1)return n;
    if(dp[n]!=-1){
        return dp[n];
    }
    return dp[n]=f(n-1,dp) + f(n-2,dp);
}

int main(){
    int n;
    cin>>n;
    // vector<int> dp(n+1,-1);
    // dp[0] =0;
    // dp[1]=1;
    // cout<<f(n,dp);
    // for(int i=2;i<=n;i++){
    //     dp[i] = dp[i-1] + dp[i-2];
    // }
    int prev2 =0;
    int prev1=1;
    for(int i=2;i<=n;i++){
        int curr = prev1+ prev2;
        prev2 = prev1;
        prev1 = curr;
    }
    cout<<prev1;
    // cout<<dp[n];
    return 0;  
}



        #include<bits/stdc++.h>
        #define ll long long
        #define pb push_back
        #define fast_io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
        #define fr(i,a,b) for(int i = a ; i < b ; i++)
        #define loop(x,n) for(int x = 0 ; x < n; ++ x)
        #define mod 1e9+7
        #define inf(1LL<<60)
        #define all(x) (x).begin(),x.end()
        using namespace std;
        void precal(){

        }
        void solve(){

        }
        int main(){
            fast_io;
            cout<<fixed;
            cout<<setprecision(10);
            precal();
            int t=1;
            //cin>>>t;
            for(int i=1;i<=t;i++){
            solve();
            }
            return 0;
        }
