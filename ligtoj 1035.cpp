#include <bits/stdc++.h>
using namespace std;
bool arr[105];

void cal()
{
	for(int i=2;i<=12;i=++i)
	{

		if(arr[i]==false)
			for(int j=i+i;j<=101;j=j+i)
			       arr[j]=true;
	}

}

int main()
{
	cal();
//	for(int i=1;i<=100;i++)
//		cout<<i<<"	"<<arr[i]<<endl;

	int T;
	cin>>T;
	for(int tc=1;tc<=T;tc++)
	{
		int n;
		cin>>n;
		cout<<"Case "<<tc<<": "<<n<<" = ";
		int m=n;
		for(;m>=2;m--)
			if(arr[m]==false)
				break;


		for(int i=2;i<=n;i++)
		{
			int cnt=0;
			if(arr[i]==0)
				for(int j=i;j<=n;j=j*i)
				     cnt+= n/j;
			if(cnt!=0 && i!=m)
				cout<<i<<" ("<<cnt<<") * ";
		    else if(cnt !=0)
				cout<<i<<" ("<<cnt<<")"<<endl;

		}

	}



  return 0;
}
