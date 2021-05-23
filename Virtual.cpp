// A
// #include <bits/stdc++.h>
// using namespace std;
// int cnt[1004];
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int n,a[100],x=0;
// 	cin>>n;
// 	for(int i=0;i<n;i++)
// 	{
// 		cin>>a[i];
// 		cnt[a[i]]++;
// 	}
// 	for(int i=1;i<=1000;i++)
// 	{
// 		if(cnt[i]>=1)
// 			x++;
// 	}
// 	cout<<x<<endl;
// 	for(int i=0;i<n;i++)
// 	{
// 		if(cnt[a[i]]>1)
// 			cnt[a[i]]--;
// 		else
// 		{
// 			if(i==n-1)
// 				cout<<a[i]<<endl;
// 			else
// 				cout<<a[i]<<" ";
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
// 	int n,total=0,cnt=0;
// 	bool start=0;
// 	string s;
// 	cin>>n;
// 	cin>>s;
// 	for(int i=0;i<n;i++)
// 	{
// 		// cout<<s[i]<<" "<<cnt;
// 		if(start)
// 		{
// 			if(s[i]=='x')
// 				cnt++;
// 			else
// 			{
// 				start=0;
// 				if(cnt>=3)
// 					total+=(cnt-2);
// 			}
// 		}
// 		else
// 		{
// 			if(s[i]=='x')
// 			{
// 				start=1;
// 				cnt=1;
// 			}
// 		}
// 	}
// 	if(start&&cnt>=3)
// 		cout<<total+cnt-2<<endl;
// 	else
// 		cout<<total<<endl;
// 	return 0;
// }

// C
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	long long int n,m,i,j;
// 	cin>>n>>m;
// 	long long int a[n],b[m],c[n];
// 	for(i=0;i<n;i++)
// 		cin>>a[i];
// 	c[0]=0;
// 	for(i=1;i<n;i++)
// 		c[i]=a[i-1]+c[i-1];
// 	for(i=0;i<m;i++)
// 		cin>>b[i];
// 	for(i=0;i<m;i++)
// 	{
// 		for(j=0;j<n;j++)
// 		{
// 			if(b[i]>=c[j]&&b[i]<=c[j+1])
// 			{
// 				cout<<j+1<<" "<<b[i]-c[j]<<endl;
// 				break;
// 			}

// 		}
// 	}
// 	return 0;
// }


// ATCODER
#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	long long int a[100005],n,i,cnt=0,j;
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>a[i];
	for(i=1;i<n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if((a[i]>0 && a[j]>0) && (a[i]*a[j])%4==0)
			{
				cnt++;
				a[i]=0;
				a[j]=0;
			}
		}
	}
	if(cnt==n/2)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
	return 0;
}