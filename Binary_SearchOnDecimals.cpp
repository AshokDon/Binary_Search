#include<bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define pb push_back
#define F first
#define S second
#define pi pair<int,int>
/*============================Run Debug code =============================*/
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x<<" " ; _print(x); cerr<<endl;
#else
#define debug(x)    
#endif
/*----------------------------------------------------------------------------*/
#define rep(i,a,b) for(int i = a ; i < b ; i++)
#define rrep(i,a,b) for(int i = a ; i >= b ;i--);
#define vi vector<ll>
#define StoB(A) sort(A.begin(),A.end())
#define BtoS(A) sort(A.rbegin(),A.rend())
#define N 1e6
using namespace std;
const int mod = (int)1e9 + 7;
vector<ll>bit;

/*===============================debugging templates ==============================================*/
template<class T>void _print(T a){cerr << a;}
template<class T> void _print(vector<T>v1){cerr<<"[";for(T i : v1)cerr<<i<<" ";cerr<<"]";}
template<class T> void _print(set<T>st){cerr <<"[" ; for(T i : st)cerr<<i<<" ";cerr<<"]";}
template<class T, class U> void _print(map<T,U>mp){for(T i : mp){cerr << i.F <<" : "<<i.S;}}
template<class T, class U> void _print(unordered_map<T,U>mp){for(T i : mp){cerr << i.F <<" : "<<i.S;}}


/*======================================MATHS================================================*/
ll gcd(ll x, ll y){
    if(y == 0)return x;
    else return gcd(y,x % y);
}
ll power(ll a, ll b){
    if(b == 0)return 1;
    ll x = power(a , b / 2);
    if(b % 2){
        return (x%mod*x%mod*a%mod) % mod;
    }
    else{
        return (x*x) % mod;
    }
}
ll inverse(ll a){
    return power(a,mod-2);
}


void Don() {
    double x;
    cin >> x;
    double low = 0;
    double high = x;
    double precision = 1e-14;
    ll iterations = 100;
    //low  = 0 , high = 0.000001
    //0 0.000001 0.000002.........
    //mid = 0.0000005 no

    //low = 0 , high = 0.000003
    //mid = 0.0000015 not an actual candidate answer
    //mid = 0.000001 this is an actual candidate answer
    //convert 0.0000015 --> 0.000001 round it up to 6 decimal places

    //codeforces asks you for x decimal places 
    //don't do it for x but do it for x + 1

    //codeforces asks for relative error to be less than 10^-x , do it for 
    //x + 1 decimal places 


    //low = 0 , high = 3
    //mid = 1

    //integere division = integer
    //decimal of 6 places division = not necessarily a decimal with 6 places

    double ans = 0;
    for(int i = 0 ; i < iterations ; i++){
        double mid = (low + high) / 2;
        if(mid * mid <= x){
            ans = max(ans,mid);
            low = mid + precision;
        }
        else{
            high = mid - precision;
        }
    }
    cout << setprecision(14) << fixed << ans << endl;
    //1 3 --> 1
    // 1.000001 1.000002 --> 1.0000015
    //x decimal places then do for x+1
    //<= y the do for y+1

    //when we take a high precision value like 10^-12 we get TLE
    //because mid and high become equal

    //decimal number : before decimal and after decimla
    //a.b
    //if a is big , b must be small
    //if a is small , b must be big

    //we want to do exact 80 iterations, but instead of that we did 100
    //we know that within 80 we got our best answer
    //so after 80 we will never hit a candidate answer that works
    //or even if we hit a candidate answer that works, it will be wors than our
    //already calculated best answer
    
    

}
    
int main() {
    Don();
}
