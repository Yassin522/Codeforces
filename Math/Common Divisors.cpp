//Link:https://codeforces.com/problemset/problem/1203/C

/*
 * Yassin52
*/
#include<bits/stdc++.h>
#define pb push_back
#define F first
#define S second
#define E endl
#define up upper_bound
#define lb lower_bound
#define sc scanf
#define pr printf
#define C continue
#define vl vector<long long>
#define mp map<char,int>
#define to(n,o,c) for(int n=o;n<c;n++)
#define ps(x,y) fixed<<setprecision(y)<<x
#define w(x) int x; cin>>x; while(x--)
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define inf  1e18
#define Yassin52 ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
typedef long long ll;
typedef long double ld;
 
using namespace std;
 
const ll Mod = 1e9 + 7;
const ll MX=1e6+100;
ll a[MX],b[MX],c[MX];
 
void file()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
}
 
ll lcm(ll a, ll b)
{
    return (a / __gcd(a, b)) * b;
}
 
 
ll power(ll a,ll b){
 
    ll res=1;
    while(b){
        if(b%2==1)
           res=(res*a)%Mod;
 
        b=b>>1;
 
        a=(a*a)%Mod;
    }
 
    return res;
}
 
bool issPrime(int n)
{
 
    if (n <= 1)
        return false;
 
    for (int i = 2;i<= sqrt(n); i++)
        if (n % i == 0)
            return true;
 
    return false;
}
 
int divisor(int n){
 
   int mx=0;
 
     for(int i=2;i<=sqrt(n);i++){
           if(n%i==0 &&(n/i)%2==0){
                mx=max(mx,n/i);
           }
     }
 
     return mx;
 
}
 
 
int main(){
    
      
       ll n;
      scanf("%lld",&n);
       ll g=0;
      ll cnt=0;
        
       for(int i=0;i<n;i++){
       	     ll x;
           scanf("%lld",&x);
           
       	    g=__gcd(g,x);
        }
       
    for(ll i=1;i*i<=g;i++){
        if(g%i==0)
            cnt+=2;
         if(i*i==g)
             cnt--;
    }
   printf("%lld",cnt);
    
   return 0;
}
