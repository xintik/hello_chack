#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll lowerbound(ll l,ll r,vector<ll> &vec,ll sh, ll low)
{
    ll high = vec.size() - 1;
    ll mid,ans= -1;
    while(high>=low)
    {

        mid = (low+high)/2;
        ll searc = sh - vec[mid];
        if(searc < l)
        {
            high = mid - 1;
        }
        else if(searc > r)
        {
            low = mid + 1;
        }
        else if(searc>= l && searc<= r)
        {
            ans = mid;
            high= mid -1;
        }
    }
    return ans;
}
ll  upperbound(ll l,ll r,vector<ll> &vec,ll sh, ll low)
{
    ll high = vec.size() - 1;
    ll mid,ans= -1;
    while(high>=low)
    {

        mid = (low+high)/2;
        ll searc = sh - vec[mid];
        if(searc < l)
        {
            high = mid - 1;
        }
        else if(searc > r)
        {
            low = mid + 1;
        }
        else if(searc>= l && searc<= r)
        {
            ans = mid;
            low= mid -1;
        }
    }
    return ans;
}
void solve()
{
    
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,l,r,sum=0,ans=0;
    cin>>n>>l>>r;
    vector < ll > vec;
    for(int i = 0; i< n ;i++)
    {
        ll x;
        cin>>x;
        vec.push_back(x);
        sum += x;
    }
    sort( vec.begin() , vec.end() );
    ll sh;
    for ( int i = 0; i< n; i++)
    {
        sh = sum - vec[i];
        ll left = lowerbound(l, r, vec, sh, i+1);
        ll right = upperbound(l , r, vec, sh, i+1);
        if(left != -1 && right!= -1 )
        {
            ans += (right - left +1);
        }
    }
    cout<<ans<<"\n";
    }
}