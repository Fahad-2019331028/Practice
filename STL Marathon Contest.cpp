// E
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	map<string,long long> data;
// 	long long n,max=0;
// 	cin>>n;
// 	string s,ans;
// 	cin>>s;
// 	for(int i=0;i<n-1;i++)
// 	{
// 		data[string(1,s[i])+s[i+1]]++;
// 	}
// 	for(auto i: data)
// 	{
// 		if(i.second>max)
// 		{
// 			ans=i.first;
// 			max=i.second;
// 		}
// 	}
// 	cout<<ans<<endl;
// 	return 0;
// }

// J
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	map<string,string> data;
// 	long long n,m;
// 	string a,b;
// 	cin>>n>>m;
// 	while(n--)
// 	{
// 		cin>>a>>b;
// 		b=b+';';
// 		data[b]=a;
// 	}
// 	while(m--)
// 	{
// 		cin>>a>>b;
// 		cout<<a<<" "<<b<<" #"<<data[b]<<endl;
// 	}
// 	return 0;
// }


// P
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int n;
// 	vector<long long>a;
// 	while(cin>>n)
// 	{
// 		a.push_back(n);
// 		sort(a.begin(),a.end());
// 		int i=a.size();
// 		if(i==1)
// 			cout<<a[i-1]<<endl;
// 		else if(i%2)
// 		{
// 			cout<<a[i/2]<<endl;
// 		}
// 		else
// 			cout<<(a[i/2]+a[(i/2)-1])/2<<endl;
// 	}
// 	return 0;
// }

// R
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	long long n,a[100005],b[100005],ans=100005;
// 	vector<long long> vec;
// 	cin>>n;
// 	for(int i=0;i<n;i++)
// 	{
// 		cin>>a[i];
// 		b[i]=a[i];
// 	}
// 	sort(b,b+n);
// 	for(int i=0;i<n;i++)
// 	{
// 		if(b[0]==a[i])
// 			vec.push_back(i);
// 	}
// 	for(int i=1;i<vec.size();i++)
// 	{
// 		ans=min(vec[i]-vec[i-1],ans);
// 	}
// 	cout<<ans<<endl;
// 	return 0;
// }


