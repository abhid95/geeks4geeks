#include <bits/stdc++.h>
#define MAX 1000000007
#define pb push_back
#define mp make_pair
#define FOR(n) for(i=0;i<n;i++)
#define rep(i,n) for(i=0;i<n;i++)
#define reps(i,a,b) for(i=a;i<=b;i++)
#define swap(a,b) T=a,a=b,b=T
#define ll long long int
#define que queue<int>
#define s(t) scanf("%lld",&t)
#define p(t) printf("%lld\n",t)
using namespace std;

ll getMaxArea(ll hist[],ll n)
{
    stack<ll> s;
    ll max_area=0,tp,area_with_top,i=0;
    while(i<n)
    {
        if(s.empty() || hist[s.top()]<=hist[i])
            s.push(i++);
        else
        {
            tp=s.top();
            s.pop();
            area_with_top=hist[tp]*(s.empty()?i:i-s.top()-1);
            if(max_area<area_with_top)
                max_area=area_with_top;
        }
    }
    while(s.empty()==false)
    {
        tp=s.top();
        s.pop();
        area_with_top=hist[tp]*(s.empty()?i:i-s.top()-1);
        if(max_area<area_with_top)
            max_area=area_with_top;
    }
    return max_area;
}
int main()
{
ll i,j,l,n,m,t,T,f,p,ans,cnt,par,ele,hist[100005];
char x;
while(1)
{
    s(n);
    if(!n)
        break;
    FOR(n)
        s(hist[i]);
    p(getMaxArea(hist,n));
}

return 0;
}



