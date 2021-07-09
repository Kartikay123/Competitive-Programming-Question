#include<iostream>
using namespace std;
#include<string>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<vector>
#include<list>
#include<map>
#include<functional>
#include <bits/stdc++.h>
#include<exception>
#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define ll long long int
#define ld long double
#define vll vector<ll>
#define vvll vector<vector<ll>>
#define vpll vector<pair<ll,ll>>
#define prqueue priority_queue<ll,vector<ll>,greater<ll>>// top=small
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define ff first
#define ss second
#define bs binary_search
#define all(v) v.begin(), v.end()
#define f0(i,n) for(i=0;i<n;i++)
#define f1(i,n) for(i=1;i<=n;i++)
#define fab(i,a,b) for(i=a;i<=b;i++)
#define f0r(i,n) for(i=n-1;i>=0;i--)
#define f1r(i,n) for(i=n;i>=1;i--)
#define fabr(i,a,b) for(i=b;i>=a;i--)
#define memo(a,b) memset(a,b,sizeof(a))
#define display(x) {for(auto dsp:x)cout<<dsp<<" ";cout<<"\n";}
#define hi cout<<"hi\n"
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define ln "\n"
using namespace std;
#include<bits/stdc++.h>
using namespace std;
 
///*********************** Template Start Here ***********************///
#define f first
#define s second
#define endl '\n'
#define sp <<" "<<
#define pb push_back
#define MOD 1000000007
#define fora(a) for(auto u:a)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define test int tc; cin>>tc; while(tc--)
#define forn(i,n) for(auto i=0; i<n; i++)
#define printv(a) {for(auto u:a) cout<<u<<" "; cout<<endl;}
#define printm(a) {for(auto u:a) cout<<u.f sp u.s<<endl;}
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fori(a,b,c) {for(a = c.begin(); a!=b; a++) cout<< *a<< " "; cout<<endl;}
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
 
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> vl;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<int>::iterator vit;
typedef set<int> si;
typedef map<int, int> mii;
const double eps = 1e-9;
///************************ Template End Here ************************///

#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define forn(i,n)       for(int i=0;i<n;i++)
#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define arr(n)          int n;cin>>n;vector<int> a(n);for(int i=0;i<n;i++) cin>>a[i];
#define w(x)            int x; cin>>x; while(x--)
#define conarr(n,k)     int n,k;cin>>n>>k;vector<int> a(n);for(int i=0;i<n;i++) cin>>a[i];
#define range(x)           (x).begin(),(x).end()
#define endl            "\n"
#define total(x)        accumulate(x.begin(),x.end(),0)
//mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
 
void hkv()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
}

//Sort By Second


bool powerOfTwo(int n){
    if(!(n&(n-1)))
        return true;
    else return false;
}

void seiveOfErat(int m,int n){
    bool prime[n+1];
    memset(prime,true,sizeof(prime));

    for(int i=2;i*i<=n;i++){
        if(prime[i]==true){
            for(int j=i*i;j<=n;j+=i){
                prime[j]=false;
            }
        }
    }
    for(int i=m;i<=n;i++){
        if(i!=1){
            if(prime[i])
                cout<<i<<endl;
        }
    }
}


int kadane(int a[],int n){
    int curr=a[0],maxi=a[0];
    forn(i,n){
        curr=max(curr+a[i],a[i]);
        maxi=max(curr,maxi);
    }
    return maxi;
}

int gcd(int a,int b){
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}

int binomial(int x,int y){
    int dp[x+1][y+1];
    for(int i=0;i<=x;i++){
        for(int j=0;j<=min(i,y);j++){
            if(j==0||j==i)
                dp[i][j]=1;
            else
                dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
        }
    }
    return dp[x][y];
}
int binsearch(int a[],int l,int h,int key){
    if(h<l) return -1;
    int mid=l+(h-l)/2;
    if(a[mid]==key) return mid;
    else if(key<a[mid]) return binsearch(a,l,mid-1,key);
    return binsearch(a,mid+1,h,key);
}
int binpow(int a,int b){
    int res=1;
    while(b){
        if(b&1)
            res*=a;
        a*=a;
        b>>=1;
    }
    return res;
}

int sumDigits(int n){
    if(!n) return 0;
    else return n%10+sumDigits(n/10);
}
bool isprime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)
            return false;
    }
    return true;
}

int binary(vi a,int l,int h,int first){
    if(l<h){
        int mid=l+(h-l)/2;
        if(a[mid]!=mid+first) return binary(a,l,mid,first);
        else return binary(a,mid+1,h,first);
    }
    return l+first;
}


int factorial(int x){
    if(x==1) return 1;
    else return factorial(x-1)*x;
}
bool perfectsq(int x){
    int y=sqrt(x);
    return y*y==x;
}

int construct(int n){
    int dig=log10(n)+1;
    int num=1;
    while(dig>1){
        num=num*10+1;
        dig--;
    }
    return num;
}
bool ispoweroften(int n){
    float x=log10(n);
    int y=log10(n);
    return x==y;
}

bool iscont(vi a,int n){
    for(int i=0;i<n-1;i++){
        if(a[i+1]!=a[i]+1) return false;
    }
    return true;
}
/*
25 60 75 90 26,61,76
27 29 67 67 85 92 92 92 
*/
double dis(int x1,int x2,int y1,int y2){
    return sqrt((pow(x1-x2,2)+pow(y1-y2,2)));
}
void solve(){
    int n,k;cin>>n>>k;
    int size=n+1;
    int a[size];
    memset(a,0,sizeof(a));
    while(k--){
        string s;cin>>s;
        if(s=="CLICK"){
            int x;cin>>x;
            a[x]^=1;

            cout<<count(a,a+size,1)<<endl;
        }
        else if(s=="CLOSEALL"){
            cout<<0<<endl;
            memset(a,0,sizeof(a));
        }
    }
}
int32_t main()
{
    hkv();
    solve();
    return 0;
}


