// #include <bits/stdc++.h>
// using namespace std;
// void print(int** edges,int n,int sv,bool* visited)
// {
// 	cout<<sv<<endl;
// 	visited[sv]=true;
// 	for(int i=0;i<n;i++)
// 	{
// 		if(i==sv)
// 			continue;
// 		if(edges[sv][i])
// 		{
// 			if(visited[i])
// 				continue;
// 			print(edges,n,i,visited);
// 		}
// 	}
// }
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int n;
// 	int e;
// 	cin>>n>>e;
// 	int** edges=new int*[n];
// 	for(int i=0;i<n;i++)
// 	{
// 		for(int j=0;j<n;j++)
// 			edges[i][j]=0;
// 	}
// 	for(int i=0;i<e;i++)
// 	{
// 		int f,s;
// 		cin>>f>>s;
// 		edges[f][s]=1;
// 		edges[s][f]=1;
// 	}

// 	bool* visited=new bool[n];
// 	for(int i=0;i<n;i++)
// 		visited[i]=false;
// 	print(edges,n,0,visited);
// 	return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	int a,cnt=0,n,x,sum=0;
	cin>>n;
	a=n;
	while(a>0)
	{
		a/=10;
		cnt++;
	}
	a=n;	
	for(int i=1;i<=cnt;i++)
	{
		x=a%10;
		for(int j=1;j<cnt;j++)
			x*=(a%10);
		sum+=x;
		a/=10;
	}
	if(sum==n)
		cout<<"Yes";
	else
		cout<<"No";
	return 0;
}

