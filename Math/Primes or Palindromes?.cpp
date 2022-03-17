

//Link:https://codeforces.com/problemset/problem/568/A

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
const ll MX=1e7+100;
 
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
 
ll isPrime[2000001];
ll isPl[2000001];
void sieve()
{
    for(ll i=1; i<=2000000; i++)
    {
        isPrime[i]=1;
    }
     isPrime[1]=0;
    for(ll i=1; i<=2000000; i++)
    {
        if(isPrime[i]==1)
        {
            for(ll j=i*i; j<=2000000; j+=i)
                isPrime[j]=0;
        }
    }
}

void Plandrom(){
	  for(ll i=1; i<=2000000; i++){
	  	   string s="";
	  	   string x="";
	  	   s=to_string(i);
	  	   x=s;
	  	   reverse(s.begin(),s.end());
	  	   if(s==x)
	  	     isPl[i]=1;
	  	     else
	  	        isPl[i]=0;
	  }
}
 
int main(){
   
     ll p,q;
     cin>>p>>q;
     ll ans=0;
     sieve();
     Plandrom();
     
     for(ll i=1;i<2000000;i++){
     	 isPrime[i]+=isPrime[i-1];
     	 isPl[i]+=isPl[i-1];
     	 if(p*isPl[i]>=q*isPrime[i]){
     	 	  ans=i;
     	 }
     }
    
    ans==0? cout<<"Palindromic tree is better than splay tree": cout<<ans;
    
   return 0;
}
