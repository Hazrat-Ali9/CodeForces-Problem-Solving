#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

struct data
{
    ll a,b;
};
data p[100];
bool cmp(data f,data s)
{
    if(f.a!=s.a)
        return f.a<s.a;
    return f.b<s.b;
}

void PowerSet(ll a[], int set_size)
{
    ll pow_set_size = 1<<set_size;
    for(ll counter = 0; counter < pow_set_size; counter++)
    {
        for(ll j = 0; j < set_size; j++)
        {
            if(counter & (1<<j))
            {

            }
        }
    }
}

#define Mx 1000005
vector<ll>P;
ll prime[Mx];
void seive()
{
    ll i,j;
    for(i=4; i<=Mx; i+=2)prime[i]=1;
    for(i=3; i*i<=Mx; i+=2)
    {
        if(prime[i]==0)
        {
            for(j=i*2; j<=Mx; j+=i)
            {
                prime[j]=1;
            }
        }
    }
    P.push_back(2);
    for(i=3; i<=Mx; i+=2)
    {
        if(prime[i]==0)P.push_back(i);
    }
}

bool vis[100005];
vector<ll>G[100005];
ll dist[100005];
void dfs(ll u)
{
    vis[u]=1;
    for(ll i=0; i<G[u].size(); i++)
    {
        ll v=G[u][i];
        if(vis[v]==0)
        {
            dfs(v);
        }
    }
}

void bfs(ll src)
{
    queue<ll>q;
    q.push(src);
    vis[src]=1;
    dist[src]=0;
    while(!q.empty())
    {
        ll u=q.front();
        q.pop();
        for(ll i=0; i<G[u].size(); i++)
        {
            ll v=G[u][i];
            if(vis[v]==0)
            {
                q.push(v);
                dist[v]=dist[u]+1;
                vis[v]=1;
            }
        }
    }
}

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll i,n;
    double x;
    while(cin>>n>>x)
    {
        double a[n+1],b[n+1];
        double suma=0,sumb=0;
        bool f=0;
        for(i=0; i<n; i++)
        {
            cin>>a[i]>>b[i];
            if((x+b[i])/2<a[i])
            {
                suma+=a[i];
                sumb+=b[i];
                f=1;
            }
        }
        double ans;
        ans=sumb/(suma-x);
        if(f==1)
            cout<<fixed<<setprecision(9)<<ans<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}


