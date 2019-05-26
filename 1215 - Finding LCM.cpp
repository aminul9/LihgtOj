// MD.Aminul Islam  DUET CSE15



#include <iostream>
#include <fstream>

using namespace std;


int gcd(int a,int b)
{
  if(a%b==0)return b;
  else
  	return gcd(b,a%b);
}
int main()
{
	//freopen("in.txt","r",stdin);
	int T=1;
	cin>>T; 
	for(int tc=1;tc<=T;tc++)
	{
        int a,b;
        long long c;
		cin>>a>>b>>c;
		
		long long LCM=(((long long)a)*b)/gcd(a,b);


		
		
		int p=2,cnt=0,ans1=1;
		long long ans=1;

		cout<<"Case "<<tc<<": ";
		if(c%LCM!=0)cout<<"impossible"<<endl;

       else{


				while(LCM>=p)
				{
					while(LCM%p==0)
					{
						LCM/=p;
						c/=p;
						ans1*=p;
					}
					bool chk=false;
					while(c%p==0)
					{
						c/=p;
						ans1*=p;
		                 chk=true;
					}

		            if(chk==true)ans*=ans1;

					p++;
					ans1=1;

				}
		ans*=c;
		cout<<ans<<endl;
	} 

	}

	
	return 0;
}
