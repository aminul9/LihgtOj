#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll prime[1000008],N,ans=0,i,j,cnt;
bool vis[1000008];


void seive()
{
	for( i=3;i*i<=1000000;i++)
	{
		if(vis[i]==false)
			for( j=i*i;j<=1000000;j+=(i*2))
			{
				vis[j]=true;
			}

	}
	prime[0]=2;
	j=1;
	for(i=3;i<=1000000; i+=2)
	{
		if(vis[i]==0) prime[j++]=i;
	}

}

int main()
{
	int T;
	seive();
	cin>>T;
	for(int tc=1;tc<=T;tc++)
	{
		cin>>N;
		ans=1;
		for(i=0;i<j && prime[i]*prime[i]<=N;i++)
		{
			cnt=0;
			while(N%prime[i]==0)
			{
				N/=prime[i];
				cnt++;
			}
			ans=ans*(cnt+1);
		}
		if(N!=1)ans=ans*2;
		cout<<"Case "<<tc<<": "<<ans-1<<endl;

	}

	return 0;
}
