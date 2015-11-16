#include<bits/stdc++.h>
using namespace std;
 
#define MAXX 100007
 
#define INF 16843009

#define ll long long
 
 
int N, M;
int K;
ll ara[MAXX];
 
int L, R, C,i;
 
int sum[4*MAXX];
 
ll dp[507];
 
 
void update(int idx, int st, int ed, int i, int j, int val)
{
    if(st == i && ed == j)
    {
        sum[idx] = min(sum[idx], val);
        return;
    }
 
 
    int l = idx*2;
    int r = l + 1;
    int mid = (st + ed)/2;
 
 
    sum[l] = min(sum[l], sum[idx]);
    sum[r] = min(sum[r], sum[idx]);
 
    sum[idx] = INF;
 
    if(j <= mid)
    {
        update(l, st, mid, i, j, val);
    }
    else if(mid < i)
    {
        update(r, mid+1, ed, i, j, val);
    }
    else
    {
        update(l, st, mid, i, mid, val);
        update(r, mid+1, ed, mid+1, j, val);
    }
}
 
 
 
int get(int idx, int st, int ed, int pos)
{
    if(st == ed)
    {
        return sum[idx];
    }
 
 
    int l = idx*2;
    int r = l + 1;
    int mid = (st + ed)/2;
 
    if(sum[idx] != INF)
    {
        sum[l] = min(sum[l], sum[idx]);
        sum[r] = min(sum[r], sum[idx]);
        sum[idx] = INF;
    }
 
 
    if(pos <= mid)
    {
        return get(l, st, mid, pos);
    }
    else
    {
        return get(r, mid+1, ed, pos);
    }
}
 
 
 
void init()
{
    memset(sum, 1,sizeof(sum));
 
    memset(dp, 0, sizeof(dp));
}
 
 
 
int main()
{
    //init(); cout<<sum[0];
    int t;
    cin>>t;
 
    while(t--)
    {
        init();
        cin>>N>>K>>M;
 
        ll s = 0;
 
        for(i=1;i<=N;i++)
        {
            cin>>ara[i];
 
            s += ara[i];
        }
 
        for(i=1;i<=M;i++)
        {
            cin>>L>>R>>C;
 
            update(1, 0, N, L, R, C);
        }
 
        //cerr<<"DONE"<<endl;
 
        for(i=1;i<=N;i++)
        {
            if(ara[i] < 0)
            {
                ll tmp = -ara[i];
 
                //dump(tmp);
 
                C = get(1, 0, N, i);
 
                //dump(C);
 
                for(int pos=K; pos>=0; pos--)
                {
                    if(pos + C <= K)
                    {
                        dp[pos + C] = max(dp[pos + C], dp[pos] + tmp );
                    }
                }
            }
        }
 
 
        cout<< s + dp[K]<<endl;
    }
    return 0;
}
