// A
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		double n,x;
// 		cin>>n>>x;
// 		if(n<=2)
// 			cout<<1<<endl;
// 		else
// 		{
// 			cout<<1+ceil((n-2)/x)<<endl;
// 		}
// 	}
// 	return 0;
// }

// B
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		int a[200][4][4];
// 		int n,m,sym=0,i,j,k;
// 		cin>>n>>m;
// 		for(i=1;i<=n;i++)
// 		{
// 			for(j=1;j<=2;j++)
// 			{
// 				for(k=1;k<=2;k++)
// 					cin>>a[i][j][k];
// 			}
// 		}
// 		if(m%2!=0)
// 			cout<<"No"<<endl;
// 		else
// 		{
// 			for(i=1;i<=n;i++)
// 			{
// 				if(a[i][2][1]==a[i][1][2])
// 					sym=1;
// 			}
// 			if(sym)
// 				cout<<"Yes"<<endl;
// 			else
// 				cout<<"No"<<endl;
// 		}
// 	}
// 	return 0;
// }

// C
#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	int t,cnt,x;
	cin>>t;
	while(t--)
	{
		cnt=0;
		long long int n;
		cin>>n;
		x=(int)sqrt(n);
		cnt+=(x-1);
		cnt+=(n/x)-1;
		n-=(n/x)*x;
		if(n>0)
			cnt++;
		cout<<cnt<<endl;
	}
	return 0;
}