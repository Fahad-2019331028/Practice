// A.
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int i,j,x,cnt=0;
// 	string s;
// 	cin>>s;
// 	for(i=0;i<s.size();i++)
// 	{
// 		x=0;
// 		for(j=0;j<i;j++)
// 		{
// 			if(s[i]==s[j])
// 			{
// 				x=1;
// 				break;
// 			}
// 		}
// 		if(x==0)
// 			cnt++;
// 	}
// 	cout<<cnt<<endl;
// 	if(!(cnt%2))
// 		cout<<"CHAT WITH HER!"<<endl;
// 	else
// 		cout<<"IGNORE HIM!"<<endl;
// 	return 0;
// }

// B
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	string s;
// 	int i=1;
// 	while(cin>>s)
// 	{
// 		if(s[0]=='*')
// 			break;
// 		else if(s[0]=='H')
// 			cout<<"Case "<<i<<": Hajj-e-Akbar"<<endl;
// 		else
// 			cout<<"Case "<<i<<": Hajj-e-Asghar"<<endl;
// 		i++;
// 	}
// 	return 0;
// }


// C
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	char s[10005],r[10005];
// 	int x,q;
// 	cin>>q;
// 	while(q--)
// 	{
// 		x=0;
// 		cin>>s;
// 		for(int i=0;i<=strlen(s);i++)
// 			r[i]=s[i];
// 		reverse(s,s+strlen(s));
// 		// cout<<s <<" "<<r<<endl;
// 		for(int i=1;i<strlen(s);i++)
// 		{
// 			// cout<<"S"<<s[i-1]<<" "<<s[i]<<" "<<abs(s[i-1]-s[i])<<endl;
// 			// cout<<"R"<<r[i]<<" "<<r[i-1]<<" "<<abs(r[i]-r[i-1])<<endl;
// 			if(abs(s[i-1]-s[i])!=abs(r[i-1]-r[i]))
// 			{
// 				x=1;
// 				break;
// 			}
// 		}
// 		if(x)
// 			cout<<"Not Funny"<<endl;
// 		else
// 			cout<<"Funny"<<endl;
// 	}
// 	return 0;
// }

// D
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	string s;
// 	int cnt=1;
// 	while(cin>>s)
// 	{
// 		for(int i=0;i<s.size();i++)
// 		{
// 			if(s[i]=='"'&& !(cnt%2))
// 			{
// 				cout<<"''";
// 				cnt++;
// 			}
// 			else if(s[i]=='"'&& (cnt%2))
// 			{
// 				cout<<"``";
// 				cnt++;
// 			}
// 			else if(s[i]=='.')
// 				cout<<s[i]<<endl;
// 			else if(i==s.size()-1)
// 				cout<<s[i]<<" ";
// 			else
// 				cout<<s[i];
// 		}	
// 	}
// 	return 0;
// }

// P
#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	char s[100005];
	int t,cnt,l;
	cin>>t;
	for(int j=1;j<=t;j++)
	{
		cnt=0;
		gets(s);
		l=strlen(s);
		cout<<s;
		for(int i=0;i<l;i++)
		{
			cout<<s[i];
			if(s[i]==' ')
				cnt++;
			else if((s[i]>='a' &&s[i]<='o')||(s[i]>='t' &&s[i]<='v'))
			{
				if(s[i]%3==0)
					cnt+=3;
				else
					cnt+=(s[i]%3);
			}
			else if(s[i]>='p' &&s[i]<='s')
			{
					cnt+=(s[i]%4)+1;
			}
			else if(s[i]>='t' &&s[i]<='u')
			{
					cnt+=(s[i]%4)+1;
			}
			

		}
		cout<<"Case #"<<j<<": "<<cnt<<endl;
	}
	
	return 0;
}
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	string s1,s2;
// 	cin>>s1>>s2;
// 	for(int i=0;i<s1.size();i++)
// 	{
// 		s1[i]=tolower(s1[i]);
// 		s2[i]=tolower(s2[i]);
// 	}
// 	if(s1==s2)
// 		cout<<0<<endl;
// 	else if(s1>s2)
// 		cout<<1<<endl;
// 	else
// 		cout<<-1<<endl;
// 	return 0;
// }
