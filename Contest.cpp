

// A
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	long long int a,b,c,d,ar[10];
// 	cin>>a>>b>>c>>d;
// 	ar[0]=a*d;
// 	ar[1]=a*c;
// 	ar[2]=b*c;
// 	ar[3]=b*d;
// 	sort(ar,ar+4);
// 	cout<<ar[3]<<endl;
// 	return 0;
// }

// B

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {	
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	char str[103];
// 	int t,l,i;
// 	cin>>t;
// 	while(t--)
// 	{
// 		cin>>str;
// 		l=strlen(str);
// 		if(!next_permutation(str,str+l))
// 			cout<<"no answer"<<endl;
// 		else
// 			cout<<str<<endl;
// 	}		
// }

// C
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int n,i;
// 	float z[100],x[100],y[100],sum=0,r;
// 	cin>>n>>r;
// 	for(i=0;i<n;i++)
// 		cin>>x[i]>>y[i];
// 	for(i=0;i<n;i++)
// 	{
// 		if(i==(n-1))
// 			z[i]=sqrt(pow(x[i]-x[0],2)+pow(y[i]-y[0],2));
// 		else
// 			z[i]=sqrt(pow(x[i+1]-x[i],2)+pow(y[i+1]-y[i],2));
// 	}
// 	for(i=0;i<n;i++)
// 		sum+=z[i];
// 	sum+=2*3.14159*r;
// 	cout<<setprecision(2)<<fixed<<sum<<endl;
// 	return 0;
// }


// D
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int t,n,m,i,j,k,d,a[100];
// 	char s[10];
// 	cin>>t;
// 	for(i=1;i<=t;i++)
// 	{
// 		cout<<"Case "<<i<<":"<<endl;
// 		cin>>n>>m;
// 		for(j=0;j<n;j++)
// 			cin>>a[j];
// 		while(m--)
// 		{
// 			cin>>s;
// 			if(s[0]=='S')
// 			{
// 				cin>>d;
// 				for(j=0;j<n;j++)
// 					a[j]+=d;
// 			}
// 			else if(s[0]=='M')
// 			{
// 				cin>>d;
// 				for(j=0;j<n;j++)
// 					a[j]*=d;
// 			}
// 			else if(s[0]=='D')
// 			{
// 				cin>>d;
// 				for(j=0;j<n;j++)
// 					a[j]/=d;
// 			}
// 			else if(s[0]=='R')
// 				reverse(a,a+n);
// 			else if(s[0]=='P')
// 			{
// 				cin>>d>>k;
// 				swap(a[d],a[k]);
// 			}
// 		}
// 		for(j=0;j<n;j++)
// 		{
// 			if(j==(n-1))
// 				cout<<a[j];
// 			else
// 				cout<<a[j]<<" ";
// 		}
// 		cout<<endl;
// 	}
// 	return 0;
// }
	
// E
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	long long int n,x,cnt[]={1,2,1},mod=1;
// 	cin>>n;
// 	for(int i=1;i<=9;i++)
// 		mod*=10;
// 	mod+=7;
// 	if(n<=1)
// 	{
// 		cout<<0<<endl;
// 	}
// 	else
// 	{
// 		while(n--)
// 		{
// 			for(int i=0;i<3;i++)
// 			{
// 				if(cnt[i]>=mod)
// 					cnt[i]%=mod;
// 				if(i==0)
// 					cnt[i]*=10;
// 				else if(i==1)
// 					cnt[i]*=9;
// 				else if(i==2)
// 					cnt[i]*=8;
// 			}
// 		}
// 		x=(((cnt[0]-cnt[1]+cnt[2])%mod)+mod)%mod;
// 		cout<<x<<endl;
// 	}
// 	return 0;
// }


// F
// #include <bits/stdc++.h>
// using namespace std;
// int gcd(int a,int b)
// {
// 	if(a==0)
// 		return b;
// 	else
// 		return gcd(b%a,a);
// }
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int a,b;
// 	cin>>a>>b;
// 	cout<<a*b/gcd(a,b)<<endl;
// 	return 0;
// }

// G
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	char s[50];
// 	int t,n,i,k,sum;
// 	cin>>t;
// 	for(i=1;i<=t;i++)
// 	{
// 		sum=0;
// 		cout<<"Case "<<i<<":"<<endl;
// 		cin>>n;
// 		while(n--)
// 		{
// 			cin>>s;
// 			if(s[0]=='d')
// 			{
// 				cin>>k;
// 				sum+=k;
// 			}
// 			else
// 				cout<<sum<<endl;
// 		}
// 	}
// 	return 0;
// }


// t
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int x;
// 	cin>>x;
// 	if(x)
// 		cout<<0<<endl;
// 	else
// 		cout<<1<<endl;
// 	return 0;
// }

// I
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int x,y,i=0,l;
// 	char s[105];
// 	cin>>x>>y;
// 	cin>>s;
// 	l=strlen(s);
// 	while(i<l)
// 	{
// 		if(s[i]=='U')
// 			y++;
// 		else if(s[i]=='D')
// 			y--;
// 		else if(s[i]=='L')
// 			x--;
// 		else if(s[i]=='R')
// 			x++;
// 		i++;
// 	}
// 	cout<<x<<" "<<y<<endl;
// 	return 0;
// }

// J
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	long long int n,i,sum=0;
// 	cin>>n;
// 	i=n;
// 	while(n)
// 	{
// 		sum+=(n%10);
// 		n/=10;
// 	}
// 	if(i%sum==0)
// 		cout<<"Yes"<<endl;
// 	else
// 		cout<<"No"<<endl;
// 	return 0;
// }

// K
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int t,n;
// 	cin>>t;
// 	while(t--)
// 	{
// 		cin>>n;
// 		while(n>0)
// 		{
// 			if(n%10>0)
// 				break;
// 			n/=10;
// 		}
// 		while(n>0)
// 		{
// 			cout<<n%10;
// 			n/=10;
// 		}
// 		cout<<endl;
// 	}
// 	return 0;
// }

// L
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int t,a[5];
// 	cin>>t;
// 	while(t--)
// 	{
// 		for(int i=0;i<3;i++)
// 			cin>>a[i];
// 		sort(a,a+3);
// 		cout<<a[1]<<endl;
// 	}
// 	return 0;
// }

// M
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int a,b,c,t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		cin>>a>>b>>c;
// 		if((a+b+c)==180 && a && b && c)
// 			cout<<"YES"<<endl;
// 		else
// 			cout<<"NO"<<endl;
// 	}
// 	return 0;
// }

// N
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	long long int i,n,x,t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		cin>>n;
// 		x=1;
// 		for(i=1;i<=n;i++)
// 		{
// 			x=x*i;
// 		}
// 		cout<<x<<endl;
// 	}
// 	return 0;
// }


// O
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int x=228;
// 	cout<<x<<endl;
// 	return 0;
// }

// P

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	long long int dp[3000],n,i,j;
// 	cin>>n;
// 	dp[0]=1;
// 	for(i=3;i<=n;i++)
// 	{
// 		for(j=3;j<=i;j++)
// 		{
// 			dp[i]+=dp[i-j];
// 			dp[i]%=(1000000007);
// 		}
// 	}
// 	cout<<dp[n]<<endl;
// 	return 0;
// }


// Q
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int n;
// 	cin>>n;
// 	cout<<1<<" "<<n<<endl;
// 	return 0;
// }

// R
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	char s[105];
// 	int l,j,x=0,t;
// 	cin>>t;
// 	cin>>s;
// 	j=t/2;
// 	if(t%2!=0)
// 		cout<<"No"<<endl;
// 	else
// 	{
// 		for(int i=0;i<t/2;i++,j++)
// 		{
// 			if(s[i]!=s[j])
// 			{
// 				x=1;
// 				break;
// 			}		
// 		}
// 		if(x)
// 			cout<<"No"<<endl;
// 		else
// 			cout<<"Yes"<<endl;
// 	}
// 	return 0;
// }

// S
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	char s[50];
// 	for(int i=0;i<3;i++)
// 	{
// 		cin>>s;
// 		cout<<s[i];
// 	}
// 	cout<<endl;
// 	return 0;
// }

// T
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int x;
// 	cin>>x;
// 	cout<<2*x<<endl;
// 	return 0;
// }

//U
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int a,b,cnt=0,j,ar[10],i;
// 	cin>>a>>b;
// 	for(;a<=b;a++)
// 	{
// 		i=a;
// 		j=0;
// 		while(i>0)
// 	  	{
// 			ar[j]=i%10;
// 			i/=10;
// 			j++;
// 		}
// 		if(ar[0]==ar[4]&&ar[1]==ar[3])
// 		{
// 			cnt++;
// 		}
// 	}
// 	cout<<cnt<<endl;
// 	return 0;
// }

// V
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int t,n,ar[100];
// 	cin>>t;
// 	while(t--)
// 	{
// 		cin>>n;
// 		for(int i=0;i<n;i++)
// 			cin>>ar[i];
// 		sort(ar,ar+n);
// 		int a=0,b=0;
// 		for(int i=0;i<n;i++)
// 		{
// 			if(ar[i]==a)
// 				a++;
// 			else if(ar[i]==b)
// 				b++;
// 		}
// 		cout<<a+b<<endl;
// 	}
// 	return 0;
// }

// W
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int n,i;
// 	vector<int> a;
// 	cin>>n;
// 	if(n==0)
// 		cout<<10<<endl;
// 	else if(n==1)
// 		cout<<1<<endl;
// 	else
// 	{
// 		for(i=9;i>=2;i--)
// 		{
// 			if(n%i==0)
// 			{
// 				while(n%i==0)
// 				{
// 					a.push_back(i);
// 					n/=i;
// 				}
// 			}
// 		}
// 		if(n!=1)
// 			cout<<-1<<endl;
// 		else
// 		{
// 			for(i=a.size()-1;i>=0;i--)
// 				cout<<a[i];
// 			cout<<endl;
// 		}
// 	}
// 	return 0;
// }

// Y
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int t,k;
// 	bool x=0;
// 	deque<int> deque;
// 	char s[50];
// 	cin>>t;
// 	while(t--)
// 	{
// 		cin>>s;
// 		if(strcmp(s,"back")==0)
// 		{
// 			if(deque.empty())
// 				cout<<"No job for Ada?"<<endl;
// 			else if(x==0)
// 			{
// 				cout<<deque.back()<<endl;
// 				deque.pop_back();
// 			}
// 			else if(x)
// 			{
// 				cout<<deque.front()<<endl;
// 				deque.pop_front();
// 			}
// 		}
// 		else if(strcmp(s,"front")==0)
// 		{
// 			if(deque.empty())
// 				cout<<"No job for Ada?"<<endl;
// 			else if(x==0)
// 			{
// 				cout<<deque.front()<<endl;
// 				deque.pop_front();
// 			}
// 			else if(x)
// 			{
// 				cout<<deque.back()<<endl;
// 				deque.pop_back();
// 			}
// 		}
// 		else if(strcmp(s,"reverse")==0)
// 		{			
// 			if(x)
// 				x=0;
// 			else
// 				x=1;
// 		}
// 		else if(strcmp(s,"push_back")==0)
// 		{			
// 			cin>>k;
// 			if(x)
// 				deque.push_front(k);
// 			else
// 				deque.push_back(k);
// 		}
// 		else if(strcmp(s,"toFront")==0)
// 		{
// 			cin>>k;
// 			if(x)
// 				deque.push_back(k);
// 			else
// 				deque.push_front(k);
// 		}
// 	}
// 	return 0;
// }


// Z

// #include <bits/stdc++.h>
// using namespace std;
// int gcd(int a,int b)
// {
// 	if(a==0)
// 		return b;
// 	else
// 		return gcd(b%a,a);
// }
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	long long int n,k,g=1,max3=0,max1=0,max2=0,i,j;
// 	cin>>n;
// 	long long int a[n],b[n];
// 	for(i=0;i<n;i++)
// 	{
// 		cin>>a[i];
// 	}
// 	for(i=0;i<n;i++)
// 	{
// 		cin>>b[i];
// 	}
// 	for(i=0;i<n;i++)
// 	{
// 		for(j=0;j<n;j++)
// 		{
// 			g=gcd(a[i],b[j]);
// 			if(g==max1)
// 			{
// 				max1=g;
// 				if(a[i]+b[j]>max2+max3)
// 				{
// 					max2=a[i];
// 					max3=b[j];
// 				}
// 			}
// 			else if(g>max1)
// 			{
// 				max1=g;
// 				max2=a[i];
// 				max3=b[j];
// 			}

// 		}
// 	}
// 	cout<<max2+max3<<endl;
// 	return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// long long int cnt1[2000000],cnt2[2000000],gcd1[2000000],gcd2[2000000];
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	long long int n,gcd=1,i,j;
// 	cin>>n;
// 	long long int a[n+2],b[n+2];
// 	for(i=0;i<n;i++)
// 	{
// 		cin>>a[i];
// 		cnt1[a[i]]++;
// 	}
// 	for(i=0;i<n;i++)
// 	{
// 		cin>>b[i];
// 		cnt2[b[i]]++;
// 	}
// 	for(i=1;i<=1000000;i++)
// 	{
// 		for(j=i;j<=1000000;j+=i)
// 		{
// 			if(cnt1[j]>0)
// 				gcd1[i]=j;
// 			if(cnt2[j]>0)
// 				gcd2[i]=j;
// 		}
// 	}
// 	for(i=1;i<=1000000;i++)
// 	{
// 		if(gcd1[i]>0&&gcd2[i]>0)
// 			gcd=i;
// 	}
// 	cout<<gcd1[gcd]+gcd2[gcd]<<endl;
// 	return 0;
// }


// DS Marathon-Graph

// A
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int n,t,i;
// 	stack<int> a;
// 	scanf("%d",&t);
// 	while(t--)
// 	{	
// 		scanf("%d",&i);
// 		if(i==1)
// 		{
// 			scanf("%d",&n);
// 			a.push(n);
// 		}
// 		else if(i==2)
// 		{
// 			if(!a.empty())
// 				a.pop();
// 		}
// 		else
// 		{
// 			if(a.empty())
// 				printf("Empty!\n");
// 			else
// 				printf("%d\n",a.top());
// 		}
// 	}
// 	return 0;


// B
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int n,t,i;
// 	queue<int> a;
// 	scanf("%d",&t);
// 	while(t--)
// 	{	
// 		scanf("%d",&i);
// 		if(i==1)
// 		{
// 			scanf("%d",&n);
// 			a.push(n);
// 		}
// 		else if(i==2)
// 		{
// 			if(!a.empty())
// 				a.pop();
// 		}
// 		else
// 		{
// 			if(a.empty())
// 				printf("Empty!\n");
// 			else
// 				printf("%d\n",a.front());
// 		}
// 	}
// 	return 0;
// }

// C
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	long long int t,i,cnt=0;
// 	string s;
// 	stack<char> a;
// 	cin>>s;
// 	for(i=0;i<s.size();i++)
// 	{
// 		if(a.empty()==0)
// 		{
// 			if(s[i]==a.top())
// 			{
// 				cnt++;
// 				a.pop();
// 			}
// 			else
// 				a.push(s[i]);
// 		}
// 		else
// 			a.push(s[i]);
// 	}
// 	if(cnt%2)
// 		cout<<"YES"<<endl;
// 	else
// 		cout<<"NO"<<endl;
// 	return 0;
// }


// D
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int t,i,x=0,l;
// 	char s[10000];
// 	cin>>t;
// 	while(t--)
// 	{
// 		stack<int> a;
// 		cin>>s;
// 		l=strlen(s);
// 		for(i=0;i<l;i++)
// 		{
// 			if(!a.empty()&&s[i]==')'&& a.top()=='(')
// 			{	
// 				a.pop();
// 			}
// 			else if(!a.empty()&&s[i]=='}'&& a.top()=='{')
// 			{
// 				a.pop();
// 			}
//  			else if(!a.empty()&&s[i]==']'&& a.top()=='[')
// 			{
// 				a.pop();
// 			}

// 			else
// 			{
// 				a.push(s[i]);
// 			}
// 		}
// 		if(a.empty())
// 			cout<<"YES"<<endl;
// 		else
// 			cout<<"NO"<<endl;
// 	}
// 	return 0;
// }


// I

// #include<bits/stdc++.h>
// using namespace std;
// char adj[25][25];
// int arrx[4]={-1,1,0,0},arry[4]={0,0,1,-1};
// int cnt,w,h;

// void dfs(int i,int j)
// {
// 	adj[i][j]='#';
// 	for(int k=0;k<4;k++)
// 	{
// 		int x=i+arrx[k],y=j+arry[k];
// 		if(adj[x][y]=='.' && x<h && x>=0 && y>=0 && y<w )
// 		{
// 				dfs(x,y);
// 				cnt++;
// 		}
// 	}
// }

// int main()
// {
// 	int t;
// 	cin>>t;
// 	for(int k=1;k<=t;k++)
// 	{
// 		cnt=1;
// 		cin>>w>>h;
// 		for(int i=0;i<h;i++)
// 		{
// 			scanf("%s",adj[i]);
// 		}
// 		for(int i=0;i<h;i++)
// 		{
// 			for(int j=0;j<w;j++)
// 			{
// 				if(adj[i][j]=='@')
// 				{
// 					dfs(i,j);
// 				}
// 			}
// 		}
// 		cout<<"Case "<<k<<": "<<cnt<<endl;
// 	}
// }

// J

#include<bits/stdc++.h>
using namespace std;
int adj[1009][1009];
int visited[1009],city[1009];
int k,ans,n,m,a[1009];
void bfs(int s)
{
    for(int i=0;i<=n;i++)
        visited[i]=0;
    queue<int> temp;
    temp.push(s);
    visited[s]=1;
    city[s]++;
    if(city[s]==k)
        ans++;
 
    while(!temp.empty())
    {
        int x=temp.front();
        temp.pop();
        for(int i=1;i<=n;i++)
        {  
            if(adj[x][i] && !visited[i])
            {
                    temp.push(i);
                    visited[i]=1;
                    city[i]++;
                    if(city[i]==k)
                        ans++;
            }
        }
    }
}
 
 
 
int main()
{
    int t;
    cin>>t;
    for(int j=1;j<=t;j++)
    {
        ans=0;
        cin>>k>>n>>m;
        for(int i=0;i<k;i++)
            cin>>a[i];
        while(m--)
        {
            int u,v;
            cin>>u>>v;
            adj[u][v]=1;
        }
        for(int i = 0; i <= n ; i++)
            city[i] = 0;
        for(int i=0;i<k;i++)
            bfs(a[i]);
        cout<<"Case "<<j<<": "<<ans<<endl;
        for(int i=0;i<=n;i++)
        {
            for(int k=0;k<=n;k++)
                adj[i][k]=0;
        }
    }
}