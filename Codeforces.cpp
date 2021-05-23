// #include<stdio.h>
// #include<string.h>
// int main()
// {
// 	char s1[1000000],s2[1000000];
// 	int i,j,len 1,len2,x=0,a;
// 	scanf("%s %s",&s1,&s2);
// 	len1=strlen(s1);
// 	len2=strlen(s2);
// 	for(i=len1-1,j=len2-1;i>=0,j>=0;i--,j--)
// 	{
// 		if(s1[i]==s2[j])
// 			x++;
// 			else
// 			break;
// 	}
// 	a=len1+len2-(2*x);
// 	printf("%d\n",a);

// 	return 0;
// }

// B. Maximums
// #include<stdio.h>
// int a[300000],b[300000];
// int main(){
//     int n,i;
//     int x=0;
//     scanf("%d ",&n);
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&b[i]);
//         b[i]+=x;
//         if(b[i]>x)
//         	x=b[i];
//     }
//     for(i=0;i<n;i++)
//     {
//         if(i==(n-1))
//             printf("%d\n",b[i]);
//         else
//             printf("%d ",b[i]);
//     }
//     return 0;
// }

// B. Sale

// #include<stdio.h>
// int main()
// {
// 	int n,m,i,x,a[1000],temp,j,max,sum=0;
// 	scanf("%d %d",&n,&m);
// 	for(i=0;i<n;i++)
// 		scanf("%d",&a[i]);
// 	x=n;
//    for(i=0; i<x; i++)
//    {
//        max=a[0];
//        for(j=1; j<x; j++)
//        {
//            if(a[j]>max)
//            {
//                max=a[j];
//            }
//            else
//            {
//                temp=a[j-1];
//                a[j-1]=a[j];
//                a[j]=temp;
//            }
//        }
//    }
// 	for(i=0;i<m;i++)
// 		{
// 			if(a[i]>0)
// 				break;
// 			sum+=a[i];
// 		}
// 			printf("%d\n",-sum);
// 	return 0;
// }

// Petya and Strings
// #include<stdio.h>
// #include<string.h>
// int main()
// {
// 	int i,x;
// 	char s[200],s1[200];
// 	scanf("%s %s",s,s1);
// 	for(i=0;i<strlen(s);i++)
// 	{
// 		if(s[i]>='A'&&s[i]<='Z')
// 			s[i]+=32;
// 		if(s1[i]>='A'&&s1[i]<='Z')
// 			s1[i]+=32;
// 		if(s[i]==s1[i])
// 			x=0;
// 		else if(s[i]<s1[i])
// 		{
// 			x=1;
// 			break;
// 		}
// 		else if(s[i]>s1[i])
// 		{
// 			x=2;
// 			break;
// 		}
// 	}
// 	if(x==0)
// 		printf("0\n");
// 	else if(x==1)
// 		printf("-1\n");
// 	else if(x==2)
// 		printf("1\n");
// 	return 0;
// }

// A. Helpful Maths
// #include<stdio.h>
// #include<string.h>
// int main()
// {
// 	int a[200],i,j,n,x,temp,max;
// 	char s[200];
// 	scanf("%s",s);
// 	n=strlen(s)/2;
// 	for(i=0,j=0;i<=strlen(s);i+=2,j++)
// 	{
// 		a[j]=s[i];
// 	}
// 	x=n;
//     for(i=0; i<=x; i++)
//     {
//        max=a[0];
//        for(j=1; j<=x; j++)
//        {
//            if(a[j]>max)
//            {
//                max=a[j];
//            }
//            else
//            {
//                temp=a[j-1];
//                a[j-1]=a[j];
//                a[j]=temp;
//            }
//         }
//     }
//    	for(i=0,j=0;i<strlen(s);i++)
//   	{
//    		if(i%2!=0)
//    			printf("+");
//    		else
//    			printf("%c",a[j++]);
//    	}
// 	return 0;
// }

// A. Word Capitalization
// #include<stdio.h>
// #include<string.h>
// int main()
// {
// 	char s[2000];
// 	scanf("%s",s);
// 	if(s[0]>='a'&&s[0]<='z')
// 			s[0]-=32;
// 	printf("%s\n",s);
// 	return 0;
// }

// A. Stones on the Table
// #include<stdio.h>
// #include<string.h>
// int main()
// {
// 	int n,x=0,start=0,i;
// 	char s[100];
// 	scanf("%d",&n);
// 	scanf("%s",s);
// 	if(s[0]==s[1])
// 	{
// 		start=1;
// 		x++;
// 	}
// 	for(i=1;i<n;i++)
// 	{
// 		if(start==1)
// 		{
// 			if(s[i]==s[i+1])
// 				x++;
// 			else
// 				start=0;
// 		}
// 		else if(start==0)
// 		{
// 			if(s[i]==s[i+1])
// 			{
// 				start=1;
// 				x++;
// 			}
// 		}
// 	}
// 	printf("%d\n",x);
// 	return 0;
// }

// A. Remainder

// #include<stdio.h>
// #include<string.h>
// int main()
// {
// 	int x,y,l,cnt=0,i;
// 	char s1[300000],s2[300000];
// 	scanf("%d %d %d",&l,&x,&y);
// 	scanf("%s",s1);
// 	for(i=0;i<l-x;i++)
// 		s2[i]=s1[i];
// 	for(i=l-x;i<l;i++)
// 	{
// 		if(i==(l-y-1))
// 			s2[i]='1';
// 		else
// 			s2[i]='0';
// 	}
// 	for(i=0;i<l;i++)
// 	{
// 		if(s1[i]!=s2[i])
// 			cnt++;
// 	}
// 	printf("%d\n",cnt);
// 	return 0;
// }

// A. Boy or Girl
// #include<stdio.h>
// #include<string.h>
// int main()
// {
// 	int i,j,x,cnt=0;
// 	char s[200];
// 	scanf("%s",s);
// 	for(i=0;i<strlen(s);i++)
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
// 	if(cnt%2!=0)
// 		printf("IGNORE HIM!\n");
// 	else
// 		printf("CHAT WITH HER!\n");
// 	return 0;
// }

// A. Soldier and Bananas
// #include<stdio.h>
// int main()
// {
// 	long long int i,sum=0,k,n,w;
// 	scanf("%lld %lld %lld",&k,&n,&w);
// 	for(i=1;i<=w;i++)
// 	{
// 		sum+=(i*k);
// 	}
// 	if(sum>n)
// 		printf("%lld\n",sum-n);
// 	else
// 		printf("0\n");
// 	return 0;
// }

// A. Tram
// #include<stdio.h>
// int main()
// {
// 	int n,max,i,a[2000],b[2000],min[2000];
// 	scanf("%d",&n);
// 	for(i=0;i<n;i++)
// 	{
// 		scanf("%d %d",&a[i],&b[i]);
// 	}
// 	min[0]=b[0];
// 	max=min[0];
// 	for(i=1;i<n;i++)
// 	{
// 		min[i]=min[i-1]-a[i]+b[i];
// 		if(max<min[i])
// 			max=min[i];
// 	}
// 	printf("%d\n",max);
// 	return 0;
// }

// A. Elephant
// #include<stdio.h>
// int main()
// {
// 	int x;
// 	scanf("%d",&x);
// 	if(x%5==0)
// 		printf("%d\n",x/5);
// 	else
// 		printf("%d\n",(x/5)+1);
// }

// B. Queue at the School
// #include<stdio.h>
// #include<string.h>
// int main()
// {
// 	int n,t,i,j;
// 	char s[10000];
// 	scanf("%d %d %s",&n,&t,s);
// 	for(i=0;i<t;i++)
// 	{
// 		for(j=0;j<strlen(s);j++)
// 		{
// 			if(s[j]=='B'&&s[j+1]=='G')
// 			{
// 				s[j]='G';
// 				s[j+1]='B';
// 				j++;
// 			}
// 		}
// 	}
// 	printf("%s\n",s);
// 	return 0;
// }

// A. Nearly Lucky Number

// #include<stdio.h>
// int main()
// {
// 	long long int n,cnt=0;
// 	scanf("%lld",&n);
// 	while(n>0)
// 	{
// 		if(n%10==4||n%10==7)
// 			cnt++;
// 		n/=10;
// 	}
// 	if(cnt==4||cnt==7)
// 		printf("YES\n");
// 	else
// 		printf("NO\n");
// 	return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main()
// {
// 	int n,k,i,j,l,cnt=0;
// 	char s1[100],s2[100],s3[100];
// 	scanf("%d %d",&n,&k);
// 	scanf("%s",s1);
// 	for(i=0,j=n-1;i<n/2;i++,j--)
// 	{
// 		if(s1[i]==s1[j])
// 			cnt++;
// 		else
// 			break;
// 	}
// 	for(i=cnt,j=0;i<n;i++,j++)
// 	{
// 		s2[j]=s1[i];
// 	}
// 	l=0;
// 	for(i=0;i<strlen(s1);i++)
// 	{
// 		s3[l++]=s1[i];
// 	}
// 	for(i=0;i<strlen(s1);i++)
// 		printf("%c",s1[i]);
// 	for(j=0;j<k-1;j++)
// 	{
// 		for(i=0;i<n-cnt;i++)
// 		{
// 			printf("%c",s2[i]);
// 		}
// 	}
// 	return 0;
// }

// 	for(j=0;j<k-1;j++)
// 	{
// 		for(i=0;i<n-cnt;i++)
// 		{
// 			s3[l++]=s2[i];
// 			if(j==(k-2)&&i==(n-cnt-1))
// 				s3[l++]='\0';	
// 		}
// 	}
// 	printf("%s\n",s3);

// A. Translation

// #include<stdio.h>
// #include<string.h>
// int main()
// {
// 	char s1[1000],s2[1000],s3[1000];
// 	int i,j;
// 	scanf("%s %s",s1,s2);
// 	for(i=0,j=strlen(s2)-1;i<strlen(s1);i++,j--)
// 	{
// 		s3[i]=s2[j];
// 		if(i==strlen(s1)-1)
// 			s3[i+1]='\0';
// 	}
// 	if(strcmp(s1,s3)==0)
// 		printf("YES\n");
// 	else
// 		printf("NO\n");
// 	return 0;
// }

// CODEFORCES Round #650(Div. 3)
// A. Short Substrings
// #include<stdio.h>
// #include<string.h>
// int main()
// {
// 	char s1[1000],s2[1000];
// 	int t,i,l,j;
// 	scanf("%d",&t);
// 	while(t--)
// 	{
// 		scanf("%s",s1);
// 		if(strlen(s1)==2)
// 			printf("%s\n",s1);
// 		else
// 		{
// 			s2[0]=s1[0];
// 			l=strlen(s1);
// 			for(i=1,j=1;i<l;i+=2,j++)
// 				{
// 					s2[j]=s1[i];
// 					if(i==(l-1))
// 						{
// 							s2[j+1]='\0';
// 						}
// 		}
// 			printf("%s\n",s2);
// 		}
// 	}
// 	return 0;
// }

// B. Even Array
// #include<stdio.h>
// int main()
// {
// 	int t,n,a[10000],i,even,odd,x;
// 	scanf("%d",&t);
// 	while(t--)
// 	{
// 		even=0;
// 		odd=0;
// 		x=0;
// 		scanf("%d",&n);
// 		for(i=0;i<n;i++)
// 		{
// 			scanf("%d",&a[i]);
// 			if(a[i]%2==0)
// 				even++;
// 			else if(a[i]%2!=0)
// 				odd++;
// 			if(i%2!=a[i]%2)
// 				x++;
// 		}
// 		if(n%2==0)
// 		{
// 			if(even!=odd)
// 				printf("-1\n");
// 			else
// 				printf("%d\n",x/2);
// 		}
// 		else
// 		{
// 			if(even==((n/2)+1)&&odd==n/2)
// 			{
// 				printf("%d\n",x/2);
// 			}
// 			else
// 				printf("-1\n");
// 		}
// 	}
// 	return 0;
// }

// C. Social Distance
// #include<stdio.h>
// int main()
// {
// 	char s[30000];
// 	int t,n,k,i,a[3000],x,one,j,y,sum;
// 	scanf("%d",&t);
// 	while(t--)
// 	{
// 		j=1;
// 		one=0;
// 		sum=0;
// 		scanf("%d %d",&n,&k);
// 		scanf("%s",s);
// 		a[0]=0;
// 		for(i=0;i<n;i++)
// 		{
// 			if(s[i]=='1')
// 			{
// 				one++;
// 				a[j]=i;
// 				j++;
// 			}
// 		}
// 		for(i=0;i<j;i++)
// 			printf("%d ",a[i]);
// 		if(one>0)
// 		{
// 			for(i=0;i<j;i++)
// 			{
// 				x=a[i+1]-a[i]-1;
// 				y=(x-k)/(k+1);
// 				if(y>=0)
// 					sum+=y;
// 				printf("%d %d %d\n",x,y,sum);
// 			}
// 			printf("%d\n",sum);
// 		}
// 		else
// 		{
// 			y=(n-k)/(k+1);
// 			printf("%d\n",y+1);
// 		}
// 	}
// 	return 0;
// }
// #include<stdio.h>
// int main()
// {
// 	int i,t,j,k,n,cnt;
// 	scanf("%d",&t);
// 	while(t--)
// 	{
// 		cnt=0;
// 		scanf("%d %d",&n,&k);
// 		char s[n];
// 		scanf("%s",s);
// 		for(i=0;i<n;i++)
// 		{
// 			if(s[i]=='1')
// 			{
// 				for(j=i;j<=i+k && j<n;j++)
// 					s[j]='*';
// 				for(j=i;j>=i-k && j>=0;j--)
// 					s[j]='*';
// 			}
// 		}
// 		for(i=0;i<n;i++)
// 		{
// 			if(s[i]=='0')
// 			{
// 				cnt++;
// 				for(j=i;j<=i+k && j<n;j++)
// 					s[j]='*';
// 				for(j=i;j>=i-k && j>=0;j--)
// 					s[j]='*';
// 			}
// 		}
// 		printf("%d\n",cnt);

// 	}
// 	return 0;
// }

// A. Chips Moving
// #include<stdio.h>
// int main()
// {
// 	long long int n,i,even=0;
// 	scanf("%lld",&n);
// 	int x[n];
// 	for(i=0;i<n;i++)
// 	{
// 		scanf("%lld",&x[i]);
// 		if(x[i]%2==0)
// 			even++;
// 	}
// 	if(even<n-even)
// 		printf("%lld\n",even);
// 	else
// 		printf("%lld\n",n-even);
// 	return 0;
// }

// A. C+=
// #include<stdio.h>
// int main()
// {
// 	long long int t,a,b,n,cnt;
// 	scanf("%lld",&t);
// 	while(t--)
// 	{
// 		cnt=0;
// 		scanf("%lld %lld %lld",&a,&b,&n);
// 		while(a<=n&&b<=n)
// 		{
// 			if(a>b)
// 				b+=a;
// 			else
// 				a+=b;
// 			cnt++;
// 		}
// 		printf("%lld\n",cnt);
// 	}
// 	return 0;
// }

// B. Codeforces Subsequences
// #include<stdio.h>
// int main()
// {
// 	long long int n;
// 	char s;
// 	scanf("%lld",&n);
// 	printf("codeforce");
// 	for(i=0;i<n;i++)
// 		printf("s");
// 	return 0;
		
// }

// Lucky Division
// #include<stdio.h>
// #include<string.h>
// int main()
// {
// 	int a[]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
// 	int n,i;
// 	bool x=0;
// 	scanf("%d",&n);
// 	for(i=0;a[i]<=n;i++)
// 	{
// 		if(n%a[i]==0)
// 			{
// 				x=1;
// 				break;
// 			}
// 	}
// 	if(x)
// 		printf("YES\n");
// 	else
// 		printf("NO\n");
// 	return 0;
// }


// CONTEST 1370
// A. Maximum GCD

// #include<stdio.h>
// int main()
// {
// 	int t,n,max,i,j,cnt;
// 	scanf("%d",&t);
// 	while(t--)
// 	{
// 		max=1;
// 		scanf("%d",&n);
// 		for(i=2;i<=n;i++)
// 		{
// 			cnt=0;
// 			for(j=1;j*i<=n;j++)
// 			{
// 				cnt++;
// 			}
// 			if(cnt>1 && i>max)
// 				max=i;
// 		}
// 			printf("%d\n",max);
// 	}
// 	return 0;
// }

// B. GCD Compression
// #include<stdio.h>
// #include<string.h>
// int main()
// {
// 	int t,n,i,j,x,a[2010],b[1005];
// 	scanf("%d",&t);
// 	while(t--)
// 	{
// 		x=0;
// 		scanf("%d",&n);
// 		for(i=0;i<2*n;i++)
// 			scanf("%d",&a[i]);
// 		for(i=0;i<2*n;i++)
// 		{
// 			if(x==(n-1))
// 				break;
// 			if(a[i]>0 && a[i]%2!=0)
// 			{
// 				for(j=i+1;j<2*n;j++)
// 				{
// 					if(a[j]>0 && a[j]%2!=0)
// 					{
// 						printf("%d %d\n",i+1,j+1);
// 						a[i]=0;
// 						a[j]=0;
// 						x++;
// 						break;
// 					}
// 				}
// 			}
// 			else if(a[i]>0 && a[i]%2==0)
// 			{
// 				for(j=i+1;j<2*n;j++)
// 				{
// 					if(a[j]>0 && a[j]%2==0)
// 					{
// 						printf("%d %d\n",i+1,j+1);
// 						a[i]=0;
// 						a[j]=0;
// 						x++;
// 						break;
// 					}
// 				}
// 			}
// 		}
// 	}
// 	return 0;
// }



// A. Circle of Students
// #include<stdio.h>
// int main()
// {
// 	int t,n,p[250],i,x;
// 	scanf("%d",&t);
// 	while(t--)
// 	{
// 		x=1;
// 		scanf("%d",&n);
// 		for(i=0;i<n;i++)
// 			scanf("%d",&p[i]);
// 		for(i=1;i<n;i++)
// 		{
// 			x=p[i]-p[i-1];
// 			if(x==1||x==-1||x==(n-1)||x==(1-n))
// 			{
// 				continue;
// 			}
// 			else
// 			{

// 				x=0;
// 				break;
// 			}
// 		}
// 		if(x)
// 			printf("YES\n");
// 		else
// 			printf("NO\n");
// 	}
// 	return 0;
// }

// B. Karen and Coffee
// #include<stdio.h>
// int main()
// {
// 	int x[200003],n,k,t,a,b,i,cnt;
// 	for(i=0;i<200002;i++)
// 		x[i]=0;
// 	scanf("%d %d %d",&n,&k,&t);
// 	while(n--)
// 	{
// 		scanf("%d %d",&a,&b);
// 		for(i=a;i<=b;i++)
// 			x[i]++;
// 	}
// 	while(t--)
// 	{
// 		cnt=0;
// 		scanf("%d %d",&a,&b);
// 		for(i=a;i<=b;i++)
// 		{
// 			if(x[i]>=k)
// 				cnt++;
// 		}
// 		printf("%d\n",cnt);
// 	}
// 	return 0;
// }

//CONTEST 1369
//A. FashionabLee
// #include<stdio.h>
// int main()
// {
// 	long long int t,n;
// 	scanf("%lld",&t);
// 	while(t--)
// 	{
// 		scanf("%lld",&n);
// 		if(n%4==0)
// 			printf("YES\n");
// 		else
// 			printf("NO\n");
// 	}
// 	return 0;
// }

//B
// #include<stdio.h>
// #include<string.h>
// int main()
// {
// 	int t,n,x,l,i,j,cnt;
// 	char s[100005];
// 	scanf("%d",&t);
// 	while(t--)
// 	{
// 		cnt=0;
// 		scanf("%d",&n);
// 		scanf("%s",s);
// 		while(1)
// 		{
// 			x=0;
// 			i=0;
// 			l=strlen(s);
// 			for(i;i<l;i++)
// 			{
// 				if(s[i]=='1'&& s[i+1]=='0')
// 				{
// 					x++;
// 					cnt++;
// 					if(cnt%2!=0)
// 						i++;
// 					for(i;i<l;i++)
// 						{
// 							s[i]=s[i+1];
// 						}
// 				}
// 				printf("%s\n",s);
// 			}
// 			if(x==0)
// 				break;
// 		}
// 		for(i=0;i<=l;i++)
// 		{
// 			if(s[i]=='0'||s[i]=='1')
// 				printf("%c",s[i]);
// 		}
// 		printf("\n");
// 	}
// 	return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main()
// {
// 	int t,n,i,j,cnt,k;
// 	char s[100005],x[100005];
// 	scanf("%d",&t);
// 	while(t--)
// 	{
// 		k=0;
// 		scanf("%d",&n);
// 		scanf("%s",s);
// 		for(i=0;i<n;i++)
// 		{
// 			if(s[i]=='1')
// 				break;
// 			x[k++]=s[i];
// 		}
// 		j=i;
// 		for(i;i<n;i++)
// 		{
// 			if(s[i]=='0')
// 				j=i;
// 		}
// 		for(j;j<=n;j++)
// 			x[k++]=s[j];
// 		printf("%s\n",x);
// 	}
// 	return 0;
// }


// #include <iostream>
// #include <algorithm>
// #include <vector>
// #include <string>
// #include <cstdio>
// #include <cmath>
// #include <cstring>
// #include <cstdlib>
// #define endl '\n'
// #define ll long long
// #define pb push_back
// #define ppb pop_back
// #define pi 3.14159265358979323846264338327950288419716939937510
// #define RUN_FAST ios::sync_with_stdio(false);
// #define sz 32000
// using namespace std;
// int main()
// {
//     int T, n, i, j;
//     string s="", tmp;
//     cin >> T;
//     while (T--) {
//         cin >> n >> tmp;
//         for (i=0; i<n; i++) {
//             if (tmp[i]=='1') break;
//         }
//         s+=tmp.substr(0, i);
//         cout << s << endl;
//         j=n-i;
//         tmp=tmp.substr(i, j);
//            cout << tmp << endl;
//         n=tmp.size();
//         j=0;
//         for (i=0; i<n; i++) {
//             if (tmp[i]=='0') j=i;
//         }
//         cout << j << endl;
//         if (j==0) s+=tmp;
//         else s+=tmp.substr(j, n-j);
//         cout << s << endl;
//         s.clear();
//     }
//     return 0;
// }

//A. Theatre Square
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	double n,m,a;
// 	long long x;
// 	cin>>n>>m>>a;
// 	x=ceil(n/a)*ceil(m/a);
// 	cout<<x<<endl;
// 	return 0;
// }

// #include<stdio.h>
// #include<math.h>
// int main()
// {
// 	double n,m,a;
// 	long long x;
// 	scanf("%lf %lf %lf",&n,&m,&a);
// 	x=ceil(n/a)*ceil(m/a);
// 	printf("%lld\n",x);
// 	return 0;
// }

//A. String Task
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	char s[102];
// 	int l,i;
// 	cin>>s;
// 	l=strlen(s);
// 	for(i=0;i<l;i++)
// 	{
// 		if(s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='I'||s[i]=='i'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U'||s[i]=='y'||s[i]=='Y')
// 			continue;
// 		else if(s[i]>='A'&&s[i]<='Z')
// 			{
// 				s[i]+=32;
// 				cout<<'.'<<s[i];
// 			}
// 		else
// 			cout<<'.'<<s[i];
// 	}
// 	return 0;
// }

//A. Young Physicist
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int n,x,y,z,sumx=0,sumy=0,sumz=0;
// 	cin>>n;
// 	while(n--)
// 	{
// 		cin>>x>>y>>z;
// 		sumx+=x;
// 		sumy+=y;
// 		sumz+=z;
// 	}
// 	if(sumx==0&&sumy==0&&sumz==0)
// 		cout<<"YES"<<endl;
// 	else
// 		cout<<"NO"<<endl;
// 	return 0;
// }
//A. Chat room
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	char s[102],a[]="hello";
// 	int l,j=0,cnt=0;
// 	cin>>s;
// 	l=strlen(s);
// 	for (int i = 0; i <l ; ++i)
// 	{
// 		if(a[j]==s[i])
// 		{
// 			cnt++;
// 			j++;
// 		}
// 	}
// 	if(cnt==5)
// 		cout<<"YES"<<endl;
// 	else
// 		cout<<"NO"<<endl;

// 	return 0;
// }

//A. Word
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	char s[200];
// 	int small=0,capi=0,i,l;
// 	cin>>s;
// 	l=strlen(s);
// 	for(i=0;i<l;i++)
// 	{
// 		if(s[i]>='a'&&s[i]<='z')
// 			small++;
// 		else
// 			capi++;
// 	}
// 	if(small>=capi)
// 	{
// 		for(i=0;i<l;i++)
// 		{
// 			if(s[i]>='A'&&s[i]<='Z')
// 				s[i]+=32;
// 		}
// 	}
// 	else
// 	{
// 		for(i=0;i<l;i++)
// 		{
// 			if(s[i]>='a'&&s[i]<='z')
// 				s[i]-=32;
// 		}
// 	}
// 	cout<<s<<endl;
// 	return 0;
// }

//A. George and Accommodation
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int n,p,q,cnt=0;
// 	cin>>n;
// 	while(n--)
// 	{
// 		cin>>p>>q;
// 		if(p<q-1)
// 			cnt++;
// 	}
// 	cout<<cnt<<endl;
// 	return 0;
// }

//A. Anton and Danik
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int n,i,anton=0,danik=0;
// 	char s;
// 	cin>>n;
// 	while(n--)
// 	{
// 		cin>>s;
// 		if(s=='A')
// 			anton++;
// 		else
// 			danik++;
// 	}
// 	if(anton>danik)
// 		cout<<"Anton"<<endl;
// 	else if(danik>anton)
// 		cout<<"Danik"<<endl;
// 	else
// 		cout<<"Friendship"<<endl;
// 	return 0;
// }

//A. Beautiful Year
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int y,n1,n2,n3,n4;
// 	cin>>y;
// 	while(y>0)
// 	{
// 		y++;
// 		n1=y%10;
// 		n2=(y/10)%10;
// 		n3=(y/100)%10;
// 		n4=y/1000;
// 		if(n1!=n2&&n1!=n3&&n1!=n4&&n2!=n3&&n2!=n4&&n3!=n4)
// 			break;
// 	}
// 	cout<<y<<endl;
// 	return 0;
// }

//A. cAPS lOCK
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	char s[105];
// 	int l,i,small=0,capi=0;
// 	cin>>s;
// 	l=strlen(s);
// 	for(i=0;i<l;i++)
// 	{
// 		if(i==0)
// 		{
// 			if(s[i]>='a'&&s[i]<='z')
// 				small++;
// 		}
// 		if(s[i]>='A'&&s[i]<='Z')
// 			capi++;
// 	}
// 	if((small==1&&capi==l-1)||capi==l)
// 	{
// 		for(i=0;i<l;i++)
// 		{
// 			if(s[i]>='a'&&s[i]<='z')
// 				s[i]-=32;
// 			else if(s[i]>='A'&&s[i]<='Z')
// 				s[i]+=32;
// 		}
// 	}
// 	cout<<s<<endl;
// 	return 0;
// }

//A. Vasya and Socks
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int n,m,cnt=0;
// 	cin>>n>>m;
// 	for(int i=1;i<=n;i++)
// 	{
// 		if(i%m==0)
// 			n++;
// 		cnt++;
// 	}
// 	cout<<cnt<<endl;
// 	return 0;
// }
//A.Many Equal Substring
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	long long a=0,b,c,d,e,f,i,j,k,m,n,o,x,y;
//     cin>>n>>k;
//     string s;
//     cin>>s;
//     for(i=1;i<n;i++)
//     {
//         if(s[i]==s[0])
//         {
//             e=0;
//             for(j=1;j+i<n;j++)
//             {
//                 if(s[j+i]!=s[j]) e++;
//             }
//             if(e==0)
//             {
//                 a=i;
//                 break;
//             }
//         }
//     }
//     if(a==0)
//     {
//         for(i=0;i<k;i++) 
//         	cout<<s;
//     }
// 	else
// 	{
// 	    b=n-a;
// 	    cout<<s;
// 	    for(i=1;i<k;i++)
// 	    {
// 	        for(j=b;j<n;j++) 
// 	        	cout<<s[j];
// 	    }
// 	}
// 	return 0;
// }


//A. Presents
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int n,i,p[105],j;
// 	cin>>n;
// 	for(i=1;i<=n;i++)
// 		cin>>p[i];
// 	for(i=1;i<=n;i++)
// 	{
// 		for(j=1;j<=n;j++)
// 		{
// 			if(p[j]==i)
// 			{
// 				cout<<j<<" ";
// 				break;
// 			}
// 		}
// 	}
// 	return 0;
// }

//A. Vanya and Fence
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int n,h,a,x,i;
// 	cin>>n>>h;
// 	x=n;
// 	for(i=0;i<x;i++)
// 	{
// 		cin>>a;
// 		if(a>h)
// 			n++;
// 	}
// 	cout<<n<<endl;
// 	return 0;
// }

//A. Magnets
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int n,i,x=1,j;
// 	cin>>n;
// 	int a[n];
// 	for (i=1;i<=n;++i)
// 	{
// 		cin>>a[i];
// 	}
// 	for(i=1;i<n;i++)
// 	{
// 		if(a[i]!=a[i+1])
// 		{
// 			x++;
// 		}
// 	}
// 	cout<<x<<endl;
// 	return 0;
// }

//A. Expression
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int a,b,c,d[5],max=0,i;
// 	cin>>a>>b>>c;
// 	d[0]=a+(b*c);
// 	d[1]=a*(b+c);
// 	d[2]=a*b*c;
// 	d[3]=(a+b)*c;
// 	d[4]=a+b+c;
// 	for(i=0;i<5;i++)
// 	{
// 		if(d[i]>max)
// 			max=d[i];
// 	}
// 	cout<<max<<endl;
// 	return 0;
// }

//A. Calculating Function
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	long long int n,x;
// 	cin>>n;
// 	if(n%2==0)
// 		x=n/2;
// 	else
// 		x=((n-1)/2)-n;
// 	cout<<x<<endl;
// 	return 0;
// }

//A. Gravity Flip
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int n,a[105],i,j,temp,max,x;
// 	cin>>n;
// 	for(i=0;i<n;i++)
// 		cin>>a[i];
// 	x=n;
//    for(i=0; i<x; i++)
//    {
//        max=a[0];
//        for(j=1; j<x; j++)
//        {
//            if(a[j]>max)
//            {
//                max=a[j];
//            }
//            else
//            {
//                temp=a[j-1];
//                a[j-1]=a[j];
//                a[j]=temp;
//            }
//        }
//    }
//    for (i=0;i<n;i++)
//    	cout<<a[i]<<" ";
// 	return 0;
// }

//A. Ultra-Fast Mathematician
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	char s1[105],s2[105];
// 	int i,l;
// 	cin>>s1>>s2;
// 	l=strlen(s1);
// 	for(i=0;i<l;i++)
// 	{
// 		if((s1[i]=='0'&&s2[i]=='1')||(s1[i]=='1'&&s2[i]=='0'))
// 			cout<<"1";
// 		else
// 			cout<<"0";
// 	}
// 	cout<<endl;
// 	return 0;
// }

//A. Dubstep
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	char s[205];
// 	int i,l;
// 	cin>>s;
// 	l=strlen(s);
// 	for(i=0;i<l;i++)
// 	{
// 		if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
// 			i+=2;
// 		else
// 		{
// 			while(i<l)
// 			{
// 				cout<<s[i];
// 				i++;
// 				if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
// 				{
// 					i+=2;
// 					cout<<" ";
// 					break;
// 				}
// 			}
// 		}
// 	}
// 	return 0;
// }

//B. Drinks
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int n,i;
// 	double sum=0,a;
// 	cin>>n;
// 	for(i=0;i<n;i++)
// 	{
// 		cin>>a;
// 		sum+=a;
// 	}
// 	sum/=n;
// 	cout<<sum<<endl;
// 	return 0;
// }

// #include<stdio.h>
// int main()
// {
// 	int n,i;
// 	float x,avg,sum=0,a;
// 	scanf("%d",&n);
// 	x=(float)n;
// 	while(n--)
// 	{
// 		scanf("%f",&a);
// 		sum+=a;
// 	}
// 	avg=(float)(sum/x);
// 	printf("%.12f",avg);
// 	return 0;
// }

//A. Insomnia cure
// #include <bits/stdc++.h>
// using namespace std;
// int a[100003]={0};
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int k,l,m,n,d,i,cnt=0;
// 	cin>>k>>l>>m>>n>>d;
// 	for(i=1;i<=d;i++)
// 	{
// 		if(i%k==0||i%l==0||i%m==0||i%n==0)
// 			cnt++;
// 	}
// 	cout<<cnt<<endl;
// 	return 0;
// }

//A. I Wanna Be the Guy
// #include <bits/stdc++.h>
// using namespace std;
// int x[105]={0};
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int n,a,b=0,p,q,i;
// 	cin>>n;
// 	cin>>p;
// 	while(p--)
// 	{
// 		cin>>a;
// 		x[a]=1;
// 	}
// 	cin>>q;
// 	while(q--)
// 	{
// 		cin>>a;
// 		x[a]=1;
// 	}
// 	for(i=1;i<=n;i++)
// 	{
// 		if(x[i]==0)
// 		{
// 			b=1;
// 			break;
// 		}
// 	}
// 	if(b)
// 		cout<<"Oh, my keyboard!"<<endl;
// 	else
// 		cout<<"I become the guy."<<endl;
// 	return 0;
// }

//A. IQ test
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int n,a[105],even=0,odd=0,i;
// 	cin>>n;
// 	for (i=1;i<=n;i++)
// 	{
// 		cin>>a[i];
// 		if(a[i]%2==0)
// 			even++;
// 		else
// 			odd++;
// 	}
// 	if(even<odd)
// 	{
// 		for (i=1;i<=n;++i)
// 		{
// 			if(a[i]%2==0)
// 			{
// 				cout<<i;
// 				break;
// 			}
// 		}
// 	}
// 	else
// 	{
// 		for (i=1;i<=n;++i)
// 		{
// 			if(a[i]%2!=0)
// 			{
// 				cout<<i;
// 				break;
// 			}
// 		}
// 	}
// 	return 0;
// }

//A. Arrival of the General
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int n,a[100],max_v=0,min_v=102,max,min,i;
// 	cin>>n;
// 	for(i=1;i<=n;i++)
// 		cin>>a[i];
// 	for(i=1;i<=n;i++)
// 	{
// 		if(a[i]>max_v)
// 		{
// 			max_v=a[i];
// 			max=i;
// 		}
// 		if(a[i]<=min_v)
// 		{
// 			min_v=a[i];
// 			min=i;
// 		}
// 	}
// 	if(max<min)
// 		cout<<(max-1)+(n-min)<<endl;
// 	else
// 		cout<<(max-2)+(n-min)<<endl;
// 	return 0;
// }

//A. Is your horseshoe on the other hoof?
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int a[4],b[4]={0},i,j,sum=0;
// 	for(i=0;i<4;i++)
// 		cin>>a[i];
// 	for(i=0;i<3;i++)
// 	{
// 		for(j=i+1;j<4;j++)
// 		{
// 			if(a[i]==a[j]&&(a[i]>0&&a[j]>0))
// 			{
// 				b[i]++;
// 				a[i]=0;
// 			}
// 		}
// 	}
// 	for(i=0;i<4;i++)
// 		sum+=b[i];
// 	cout<<sum<<endl;
// 	return 0;
// }

//A. Anton and Letters
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	string s;
// 	int i,j,l,x=0;
// 	getline(cin,s);
// 	l=s.size();
// 	for(i=1;i<l;i+=3)
// 	{
// 		if(s[i]>='a'&&s[i]<='z')
// 		{
// 			x++;
// 			for(j=i+3;j<l;j+=3)
// 			{
// 				if(s[i]==s[j])
// 				{
// 					s[j]-=32;
// 				}
// 			}
// 		}
// 	}
// 	cout<<x<<endl;
// 	return 0;
// }

//A. Games
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int n,a[30],h[30],i,j,cnt=0;
// 	cin>>n;
// 	for(i=1;i<=n;i++)
// 		cin>>a[i]>>h[i];
// 	for(i=1;i<=n;i++)
// 	{
// 		for(j=1;j<=n;j++)
// 		{
// 			if(a[i]==h[j])
// 				cnt++;
// 		}
// 	}
// 	cout<<cnt<<endl;
// 	return 0;
// }

//A. Pangram
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	char s1[]="abcdefghijklmnopqrstuvwxyz",s[105];
// 	int n,i,j,cnt=0;
// 	cin>>n;
// 	for(i=0;i<n;i++)
// 		cin>>s[i];
// 	for(i=0;i<26;i++)
// 	{
// 		for(j=0;j<n;j++)
// 		{
// 			if(s1[i]==s[j]||s1[i]==(s[j]+32))
// 			{
// 				cnt++;
// 				break;
// 			}
// 		}
// 	}
// 	if(cnt==26)
// 		cout<<"YES"<<endl;
// 	else
// 		cout<<"NO"<<endl;
// 	return 0;
// }

//A. Game With Sticks
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int n,m;
// 	cin>>n>>m;
// 	if(n<=m&&n%2!=0)
// 		cout<<"Akshat"<<endl;
// 	else if(m<=n&&m%2!=0)
// 		cout<<"Akshat"<<endl;
// 	else
// 		cout<<"Malvika"<<endl;
// 	return 0;
// }

//A. Amusing Joke
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	char s1[102],s2[102],s3[102];
// 	int cnt1=0,cnt2=0,i,j,l1,l2,l3;
// 	cin>>s1>>s2>>s3;
// 	l1=strlen(s1);
// 	l2=strlen(s2);
// 	l3=strlen(s3);
// 	for(i=0;i<l1;i++)
// 	{
// 		for(j=0;j<l3;j++)
// 		{
// 			if(s1[i]==s3[j])
// 			{
// 				s3[j]+=32;
// 				cnt1++;
// 				break;
// 			}
// 		}
// 	}
// 	for(i=0;i<l2;i++)
// 	{
// 		for(j=0;j<l3;j++)
// 		{
// 			if(s2[i]==s3[j])
// 			{
// 				s3[j]+=32;
// 				cnt2++;
// 				break;
// 			}
// 		}
// 	}
// 	if((cnt1==l1)&&(cnt2==l2)&&((l1+l2)==l3))
// 		cout<<"YES"<<endl;
// 	else
// 		cout<<"NO"<<endl;
// 	return 0;
// }

//A. Dragons
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int s,n,x[1005],y[1005],m,i,max,j,temp;
// 	cin>>s>>n;
// 	for(i=0;i<n;i++)
// 		cin>>x[i]>>y[i];
// 	m=n;
// 	for(i=0; i<m; i++)
//     {
//         max=x[0];
//         for(j=1; j<m; j++)
//         {
//             if(x[j]>max)
//             {
//                 max=x[j];
//             }
//             else
//             {
//                 temp=x[j-1];
//                 x[j-1]=x[j];
//                 x[j]=temp;
//                 temp=y[j-1];
//                 y[j-1]=y[j];
//                 y[j]=temp;
//             } 
//         } 
//     }
// 	for(i=0;i<n;i++)
// 	{
// 		if(s<=x[i])
// 		{
// 			m=0;
// 			break;
// 		}
// 		else
// 		{
// 			m=1;
// 			s+=y[i];
// 		}
// 	}
// 	if(m)
// 		cout<<"YES"<<endl;
// 	else
// 		cout<<"NO"<<endl;
// 	return 0;
// }


//B. Vanya and Lanterns
// #include <stdio.h>
// #include <algorithm>
// using namespace std;
// int main()
// {
// 	int n,l,i,a[100500],res=0;
// 	scanf("%d %d",&n,&l);
// 	for(i=0;i<n;i++)
// 		scanf("%d",&a[i]);
// 	sort(a,a+n);
// 	res=2*max(a[0],l-a[n-1]);
// 	for(i=0;i<n-1;i++)
// 	{
// 		res=max(res,a[i+1]-a[i]);
// 	}
// 	printf("%.10f\n",res/2.);
// 	return 0;
// }

//B. Xenia and Ringroad
// #include <bits/stdc++.h>
// using namespace std;
// long long int a[100000];
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	long long int n,m,sum=0,i;
// 	cin>>n>>m;
// 	a[0]=1;
// 	for(i=1;i<=m;i++)
// 		cin>>a[i];
// 	for(i=1;i<=m;i++)
// 	{
// 		if(a[i]>=a[i-1])
// 			sum+=a[i]-a[i-1];
// 		else
// 			sum+=n-a[i-1]+a[i];
// 	}
// 	cout<<sum<<endl;
// 	return 0;
// }

//A. Minimum Difficulty
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int n,a[100],i,mx=0,mn=1000;
// 	cin>>n;
// 	for(i=0;i<n;i++)
// 		cin>>a[i];
// 	for(i=1;i<n;i++)
// 		mx=max(mx,a[i]-a[i-1]);
// 	for(i=1;i<n-1;i++)
// 		mn=min(mn,max(mx,a[i+1]-a[i-1]));
// 	cout<<mn<<endl;
// 	return 0;
// }


//A. Omkar and Completion
// #include <bits/stdc++.h>
// using namespace std;
// int t,n,a[1005],i,j;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	cin>>t;
// 	while(t--)
// 	{
// 		cin>>n;
// 		for(i=1;i<n;i++)
// 		{
// 			a[i]=1;
// 		}
// 		a[n]=3;
// 		for(i=1;i<=n;i++)
// 			cout<<a[i]<<" ";
// 		cout<<endl;
// 	}
// 	return 0;
// }


//B. Omkar and Last Class of Math

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int t,n,mn,i;
// 	cin>>t;
// 	while(t--)
// 	{
// 		mn=INT_MAX;
// 		cin>>n;
// 		if(n%2==0)
// 			cout<<n/2<<" "<<n/2<<endl;
// 		else
// 		{
// 			for(i=1;i<=sqrt(n);i++)
// 			{
// 				if((n-i)%i==0)
// 					mn=min(n-i,mn);
// 			}
// 			cout<<n-mn<<" "<<mn<<endl;
// 		}
// 	}
// 	return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int t,n,i;
// 	cin>>t;
// 	while(t--)
// 	{
// 		mn=1000;
// 		cin>>n;
// 		for(i=1;i<=n/2;i++)
// 		{
// 			if((n-i)%i==0)
// 			mn=min(n-i,mn);
// 		}
// 		cout<<n-mn<<" "<<mn<<endl;
		
// 	}
// 	return 0;
// }


//A. Fox And Snake
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int n,m,i,j;
// 	cin>>n>>m;
// 	for(i=1;i<=n;i++)
// 	{
// 		if(i%4==1||i%4==3)
// 		{
// 			for(j=1;j<=m;j++)
// 				cout<<"#";
// 		}
// 		else if(i%4==2)
// 		{
// 			for(j=1;j<m;j++)
// 				cout<<".";
// 			cout<<"#";
// 		}
// 		else
// 		{
// 			cout<<"#";
// 			for(j=1;j<m;j++)
// 				cout<<".";	
// 		}
// 		cout<<endl;
// 	}
// 	return 0;
// }

//A. Design Tutorial: Learn from Math
// #include <bits/stdc++.h>
// using namespace std;
// int n,x;
// int prime(int n)
// {
// 	for(int i=2;i<n;i++)
// 	{
// 		if(n%i==0)
// 		{
// 			x=1;
// 			break;
// 		}
// 	}
// 	if(x)
// 		return 1;
// 	else
// 		return 0;
// }
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	cin>>n;
// 	for(int i=4;;i+=2)
// 	{
// 		if(prime(n-i)==1)
// 		{
// 			cout<<i<<" "<<n-i<<endl;
// 			break;
// 		}
// 	}
// 	return 0;
// }

//A. Vasya the Hipster
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int a,b,i,j;
// 	cin>>a>>b;
// 	i=min(a,b);
// 	j=max(a,b);
// 	cout<<i<<" "<<(j-i)/2<<endl;
// 	return 0;
// }


//A. I_love_%username%
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int n,a[1005],cnt=0,i,j;
// 	cin>>n;
// 	for(i=0;i<n;i++)
// 		cin>>a[i];
// 	for(i=1;i<n;i++)
// 	{
// 		sort(a,a+i);
// 		if(a[i]<a[0]||a[i]>a[i-1])
// 			cnt++;
// 	}
// 	cout<<cnt<<endl;
// 	return 0;
// }

//A. New Year and Hurry

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int n,k,cnt=0,i=1,min;
// 	cin>>n>>k;
// 	min=240-k;
// 	while(1)
// 	{
// 		min-=(i*5);
// 		if(min<0||i>n)
// 			break;
// 		cnt++;
// 		i++;
// 	}
// 	cout<<cnt<<endl;
// 	return 0;
// }

//B. Balanced Array
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int t,n,odd,even,sum,i;
// 	cin>>t;
// 	while(t--)
// 	{
// 		sum=0;
// 		even=2;
// 		odd=1;
// 		cin>>n;
// 		if(n%4==2)
// 			cout<<"NO"<<endl;
// 		else
// 		{
// 			cout<<"YES"<<endl;
// 			for(i=1;i<=n/2;i++)
// 			{
// 				cout<<even<<" ";
// 				sum+=even;
// 				even+=2;
// 			}
// 			for(i=1;i<n/2;i++)
// 			{
// 				cout<<odd<<" ";
// 				sum-=odd;
// 				odd+=2;
// 			}
// 			cout<<sum<<endl;
// 		}
// 	}
// 	return 0;
// }

//A. Buy a Shovel

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int k,r,cnt=1;
// 	cin>>k>>r;
// 	while(1)
// 	{
// 		if((k*cnt)%10==0||(k*cnt)%10==r)
// 			break;
// 		cnt++;
// 	}
// 	cout<<cnt<<endl;
// 	return 0;
// }

//A. New Year Transportation
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int n,t,a[30005],i;
// 	bool x=0;
// 	cin>>n>>t;
// 	for(i=1;i<n;i++)
// 		cin>>a[i];
// 	for(i=1;i<=t;)
// 	{
// 		i+=a[i];
// 		if(i==t)
// 		{
// 			x=1;
// 			break;
// 		}
// 	}
// 	if(x)
// 		cout<<"YES"<<endl;
// 	else
// 		cout<<"NO"<<endl;
// 	return 0;
// }

//A. Candies
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int t,n,x,sum;
// 	cin>>t;
// 	while(t--)
// 	{
// 		x=2;
// 		sum=1;
// 		cin>>n;
// 		while(1)
// 		{
// 			sum+=x;
// 			x*=2;
// 			if(n%sum==0)
// 				break;
// 		}
// 		cout<<n/sum<<endl;
// 	}
// 	return 0;
// }

//A. Police Recruits
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int n,a,sum=0,cnt=0;
// 	cin>>n;
// 	while(n--)
// 	{
// 		cin>>a;
// 		if(a==-1&&sum==0)
// 			cnt++;
// 		else
// 			sum+=a;
// 	}
// 	cout<<cnt<<endl;
// 	return 0;
// }

//A. Holiday Of Equality
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int n,a[105],sum=0,i;
// 	cin>>n;
// 	for(i=0;i<n;i++)
// 		cin>>a[i];
// 	sort(a,a+n);
// 	for(i=0;i<n;i++)
// 		sum+=a[n-1]-a[i];
// 	cout<<sum<<endl;
// 	return 0;
// }

//A. The New Year: Meeting Friends
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int i,a[5];
// 	for(i=0;i<3;i++)
// 		cin>>a[i];
// 	sort(a,a+3);
// 	cout<<a[2]-a[0]<<endl;
// 	return 0;
// }

//A. Cheap Travel
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int n,m,a,b,x,y,ans;
// 	cin>>n>>m>>a>>b;
// 	if(n%m==0)
// 		x=(n/m)*b;
// 	else
// 		x=((n/m)+1)*b;
// 	y=(n/m)*b+(n-((n/m)*m))*a;
// 	ans=min(x,y);
// 	ans=min(n*a,ans);
// 	cout<<ans<<endl;
// 	return 0;
// }

//A. Ilya and Bank Account
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	long long int n,x,y;
// 	cin>>n;
// 	if(n>=0)
// 		cout<<n<<endl;
// 	else
// 	{
// 		n=abs(n);
// 		x=n/10;
// 		y=n%10+(n/100)*10;
// 		n=min(x,y);
// 		if(n>0)
// 			cout<<"-"<<n<<endl;
// 		else
// 			cout<<n<<endl;
// 	}
// 	return 0;
// }

//A. New Year Candles
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int a,b,i=0,cnt=0;
// 	cin>>a>>b;
// 	while(a>0)
// 	{
// 		a--;
// 		i++;
// 		cnt++;
// 		if(i==b)
// 		{
// 			a++;
// 			i=0;
// 		}
// 	}
// 	cout<<cnt<<endl;
// 	return 0;
// }

//A. Choosing Teams
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int n,k,a[2005],i,cnt=0;
// 	cin>>n>>k;
// 	for(i=0;i<n;i++)
// 		cin>>a[i];
// 	sort(a,a+n);
// 	for(i=0;i<n;i++)
// 	{
// 		if(a[i]<=5-k)
// 			cnt++;
// 	}
// 	cout<<cnt/3<<endl;
// 	return 0;
// }

//A. Mishka and Game

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int n,m,c,cntm=0,cntc=0;
// 	cin>>n;
// 	while(n--)
// 	{
// 		cin>>m>>c;
// 		if(m>c)
// 			cntm++;
// 		else if(m<c)
// 			cntc++;
// 	}
// 	if(cntm==cntc)
// 		cout<<"Friendship is magic!^^"<<endl;
// 	else if(cntm>cntc)
// 		cout<<"Mishka"<<endl;
// 	else
// 		cout<<"Chris"<<endl;
// 	return 0;
// }

//B. Two Arrays And Swaps
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int t,n,k,i,j,a[50],b[50],sum,temp;
// 	cin>>t;
// 	while(t--)
// 	{
// 		sum=0;
// 		cin>>n>>k;
// 		for(i=0;i<n;i++)
// 			cin>>a[i];
// 		for(i=0;i<n;i++)
// 			cin>>b[i];
// 		sort(a,a+n);
// 		sort(b,b+n);
// 		j=0;
// 		for(i=n-1;i>=0;i--)
// 		{
// 			if(j==k)
// 				break;
// 			if(a[j]<b[i])
// 			{
// 				temp=a[j];
// 				a[j]=b[i];
// 				b[i]=temp;
// 				j++;
// 			}
// 		}
// 		for(i=0;i<n;i++)
// 			sum+=a[i];
// 		cout<<sum<<endl;
// 	}
// 	return 0;
// }

//A. Three Piles of Candies

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	long long int q,a,b,c;
// 	cin>>q;
// 	while(q--)
// 	{
// 		cin>>a>>b>>c;
// 		cout<<(a+b+c)/2<<endl;
// 	}
// 	return 0;
// }

//A. Nearest Interesting Number

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int a,i,n,sum;
// 	cin>>a;
// 	while(1)
// 	{
// 		n=a;
// 		sum=0;
// 		while(n>0)
// 		{
// 			sum+=n%10;
// 			n/=10;
// 		}
// 		if(sum%4==0)
// 		{
// 			cout<<a<<endl;
// 			break;
// 		}
// 		a++;
// 	}
// 	return 0;
// }


//A. Divide it!

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	long long int t,n,x,cnt;
// 	cin>>t;
// 	while(t--)
// 	{
// 		x=0;
// 		cnt=0;
// 		cin>>n;
// 		while(n!=1)
// 		{
// 			if(n%2==0)
// 				n=n/2;
// 			else if(n%3==0)
// 				n=(2*n)/3;
// 			else if(n%5==0)
// 				n=(4*n)/5;
// 			else
// 			{
// 				x=1;
// 				break;
// 			}
// 			cnt++;
// 		}
// 		if(x)
// 			cout<<-1<<endl;
// 		else
// 			cout<<cnt<<endl;
// 	}
// 	return 0;
// }


// C. Registration system
// #include <bits/stdc++.h>
// using namespace std;
// int cnt[1000000];
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	vector<string>a;
// 	int n,i,x;
// 	cin>>n;
// 	while(n--)
// 	{
// 		x=1;
// 		string s;
// 		cin>>s;
// 		for(i=0;i<a.size();i++)
// 		{
// 			if(s==a[i])
// 			{
// 				x=0;
// 				cnt[i]++;
// 				cout<<a[i]<<cnt[i]<<endl;
// 				// break;
// 			}	
// 		}
// 		if(x)
// 		{
// 			cout<<"OK"<<endl;
// 			a.push_back(s);
// 		}
// 	}
// 	return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	long long int t,x,i,j;
// 	cin>>t;
// 	while(t--)
// 	{
// 		x=1;
// 		long long int n;
// 		cin>>n;
// 		for(i=2;i*i<=n;i++)
// 		{
// 			if(n%i==0)
// 			{
// 				j=n/i;
// 				x=max(x,max(j,i));
// 			}
// 		}
// 		cout<<x<<" "<<n-x<<endl; 
// 	}
// 	return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int a,b;
// 	cin>>a>>b;
// 	cout<<a+b<<endl;
// 	return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int t,n,a[100],cnt,check[55];
// 	cin>>t;
// 	while(t--)
// 	{
// 		for(int i=0;i<55;i++)
// 			check[i]=0;
// 		cnt=0;
// 		cin>>n;
// 		for(int i=1;i<=n;i++)
// 			cin>>a[i];
// 		for(int i=1;i<n;i++)
// 		{
// 			for(int j=i+1;j<=n;j++)
// 			{
// 				if(check[(a[j]-a[i])]==0)
// 				{
// 					cnt++;
// 					check[a[j]-a[i]]++;
// 				}
// 			}
// 		}
// 		cout<<cnt<<endl;

// 	}
// 	return 0;
// }

// Codeforces Round #693 (Div. 3)

// A. Cards for Friends
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int t,w,h,n,cnt,cntw;
// 	cin>>t;
// 	while(t--)
// 	{
// 		cnt=1;
// 		cntw=1;
// 		cin>>w>>h>>n;
// 		if(n==1)
// 			cout<<"Yes"<<endl;
// 		else
// 		{
// 			if(w%2==0)
// 			{
// 				while(1)
// 				{
// 					if(w%2==1)
// 						break;
// 					w/=2;
// 					cnt*=2;
// 				}
// 			}
// 			if(h%2==0)
// 			{
// 				while(1)
// 				{
// 					if(h%2==1)
// 						break;
// 					h/=2;
// 					cnt*=2;
// 				}
// 			}
// 			if(cnt>=n)
// 				cout<<"Yes"<<endl;
// 			else
// 				cout<<"No"<<endl;
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
// 	int t,n,a[100000],sum;
// 	cin>>t;
// 	while(t--)
// 	{
// 		int cnt_even=0;
// 		int cnt_odd=0;
// 		sum=0;
// 		cin>>n;
// 		for(int i=0;i<n;i++)
// 		{
// 			cin>>a[i];
// 			if(a[i]%2)
// 				cnt_odd++;
// 			else
// 				cnt_even++;
// 			sum+=a[i];
// 		}
// 		if(sum%2==0)
// 		{
// 			sum/=2;
// 			if(sum%2==0)
// 				cout<<"Yes"<<endl;
// 			else if(sum%2==1 && cnt_odd>=2)
// 				cout<<"Yes"<<endl;
// 			else
// 				cout<<"No"<<endl;
// 		}
// 		else
// 			cout<<"No"<<endl;
// 	}
// 	return 0;
// }

// C
// #include <bits/stdc++.h>
// using namespace std;
// long long int t,n,sum,a[200006],score[200006],visited[200006],i,j;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);

// 	cin>>t;
// 	while(t--)
// 	{
// 		cin>>n;
// 		for(i=0;i<=n;i++)
// 			visited[i]=0;
// 		for(i=0;i<n;i++)
// 			score[i]=0;
// 		for(i=1;i<=n;i++)
// 			cin>>a[i];
// 		for(i=1;i<=n;i++)
// 		{
// 			sum=0;
// 			for(j=i;;)
// 			{
// 				if(j>n)
// 				{
// 					score[i-1]=sum;
// 					break;
// 				}
// 				if(visited[j])
// 					break;
// 				else
// 				{
// 					sum+=a[j];
// 					visited[j]=1;
// 					j+=a[j];
// 				}
// 			}
// 		}
// 		sort(score,score+n);
// 		cout<<score[n-1]<<endl;
// 	}
// 	return 0;
// }

// 35.A SHell Game
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	freopen("input.txt","r",stdin);
//     freopen("output.txt","w",stdout);
// 	int index,x,y;
// 	cin>>index;
// 	for(int i=0;i<3;i++)
// 	{
// 		cin>>x>>y;
// 		if(x==index)
// 			index=y;
// 		else if(y==index)
// 			index=x;
// 	}
// 	cout<<index<<endl;
// 	return 0;
// }

// 189.A Cut Ribbon
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int n,a,b,c,value;
// 	vector<int>cnt;
// 	cin>>n>>a>>b>>c;
// 	for(int i=0;i<=4000;i++)
// 	{
// 		for(int j=0;j<=4000;j++)
// 		{
// 		    value=(i*a)+(j*b);
// 		    if(value>n)
// 		        break;
// 			if((n-value)%c==0)
// 			{
// 				int k=(n-value)/c;
// 				cnt.push_back(i+j+k);
// 			}
// 		}
// 	}
// 	sort(cnt.begin(),cnt.end());
// 	cout<<cnt[cnt.size()-1]<<endl;
// 	return 0;
// }

// A
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	long long int t,n,m,x,col,row,ans;
// 	cin>>t;
// 	while(t--)
// 	{
// 		cin>>n>>m>>x;
// 		if(x%n==0)
// 		{
// 			col=x/n;
// 			row=n;
// 		}
// 		else
// 		{
// 			col=(x/n)+1;
// 			row=x%n;
// 		}
// 		ans=((row-1)*m)+col;
// 		cout<<ans<<endl;
// 	}
// 	return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int a[]={3,4,5};
// 	for(int i=0;i<6;i++)
// 	{
// 		for(int j=0;j<3;j++)
// 			cout<<a[j];
// 		cout<<endl;
// 		next_permutation(a,a+3);
// 	}	
// 	return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	long long t,p,a[3],x;
// 	cin>>t;
// 	while(t--)
// 	{
// 		cin>>p;
// 		vector<long long>time;
// 		for(int i=0;i<3;i++)
// 			cin>>a[i];
// 		for(int i=0;i<3;i++)
// 		{
// 			if(p<=a[i])
// 				time.push_back(a[i]-p);
// 			else
// 				time.push_back((a[i]*ceil(p/(float)a[i]))-p);
// 		}
// 		sort(time.begin(),time.end());
// 		cout<<time[0]<<endl;
// 	}
// 	return 0;
// }

// B.
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int a,sum=0;
// 	cin>>a;
// 	while(1)
// 	{
// 		sum+=(a%10);
// 		a/=10;
// 		if(a<=0 && sum<10)
// 		{
// 			cout<<sum<<endl;
// 			break;
// 		}
// 		else if(a<=0 && sum>=10)
// 		{
// 			a=sum;
// 			sum=0;
// 		}
// 	}
// 	return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// bool palindrome(string s)
// {
// 	int l=s.length();
// 	for(int i=0;i<l;i++)
// 	{
// 		if(s[i]!=s[l-i-1])
// 			return false;
// 	}
// 	return true;
// }
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		string s;
// 		cin>>s;
// 		if(!palindrome('a'+s))
// 			cout<<"Yes"<<endl<<'a'+s<<endl;
// 		else if(!palindrome(s+'a'))
// 			cout<<"Yes"<<endl<<s+'a'<<endl;
// 		else
// 			cout<<"No"<<endl;
// 	}
// 	return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int T;
//     cin>>T;
//     for (int i = 1; i <= T; i++)
//     {
//         long long ans,k,x,y;
//         cin>>k;
//         if(k==1)
//         {
//             cin>>x;
//             ans = x*x;
//         }
//         else 
//         {
//         vector <int> b;
//         int x;
//         ans = 1;
//         for(int i = 1;i <= k;i++)
//         {
//             cin>>x;
//             b.push_back(x);
//             sort(b.begin(),b.end());

//             ans = b[0] * b[b.size()-1];
//         }
//         }

//         cout<<"Case "<<i<<": "<<ans<<"\n";
//     }
    
    
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int a;
// 	string s;
// 	cin>>a>>s;
// 	cout<<a<<" "<<s<<endl;
// 	return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int t,n,k,a[150];
// 	cin>>t;
// 	while(t--)
// 	{
// 		cin>>n>>k;
// 		for(int i=1;i<=n;i++)
// 				a[i]=i;
// 		if(k==0)
// 		{
// 			for(int i=1;i<=n;i++)
// 			{
// 				if(i==n)
// 					cout<<a[i]<<endl;
// 				else
// 					cout<<a[i]<<" ";
// 			}	
// 		}
// 		else if(k>ceil(n/2.0)-1)
// 			cout<<"-1"<<endl;
// 		else
// 		{
// 			for(int i=1;i<=n;i++)\
// 			{
// 				if(i%2==0)
// 				{
// 					a[i]=i+1;
// 					a[i+1]=i;
// 					k--;
// 				}
// 				if(k==0)
// 					break;
// 			}
// 			for(int i=1;i<=n;i++)
// 			{
// 				if(i==n)
// 					cout<<a[i]<<endl;
// 				else
// 					cout<<a[i]<<" ";
// 			}
// 		}
// 	}
// 	return 0;
// }

// B. Almost rectangle
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int n,t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		cin>>n;
// 		string s[n+5];
// 		vector<int>a;
// 		for(int i=0;i<n;i++)
// 		{
// 			cin>>s[i];
// 			for(int j=0;j<n;j++)
// 			{
// 				if(s[i][j]=='*')
// 				{
// 					a.push_back(i);
// 					a.push_back(j);
// 				}
// 			}
// 		}
// 		if(a[1]==a[3])
// 		{
// 			if(a[1]==n-1)
// 			{
// 				s[a[0]][0]='*';
// 				s[a[2]][0]='*';
// 			}
// 			else
// 			{
// 				s[a[0]][n-1]='*';
// 				s[a[2]][n-1]='*';
// 			}
// 		}
// 		else if(a[0]==a[2])
// 		{
// 			if(a[0]==n-1)
// 			{
// 				s[0][a[1]]='*';
// 				s[0][a[3]]='*';
// 			}
// 			else
// 			{
// 				s[n-1][a[1]]='*';
// 				s[n-1][a[3]]='*';
// 			}
// 		}
// 		else
// 		{
// 			s[a[0]][a[3]]='*';
// 			s[a[2]][a[1]]='*';
// 		}
// 		for(int i=0;i<n;i++)
// 		{
// 			for(int j=0;j<n;j++)
// 				cout<<s[i][j];
// 			cout<<endl;
// 		}
// 	}
// 	return 0;
// }

// C. Yet Another Card Deck
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int n,q;
// 	cin>>n>>q;
// 	int a[n+5],t[q+5];
// 	for(int i=1;i<=n;i++)
// 		cin>>a[i];
// 	for(int i=1;i<=q;i++)
// 		cin>>t[i];
// 	for(int i=1;i<=q;i++)
// 	{
// 		for(int j=1;j<=n;j++)
// 		{
// 			if(t[i]==a[j])
// 			{
// 				for(int k=j;k>1;k--)
// 				{
// 					a[k]=a[k-1];
// 				}
// 				a[1]=t[i];
// 				if(i==q)
// 					cout<<j<<endl;
// 				else
// 					cout<<j<<" ";
// 				break;
// 			}
// 		}
// 	}
// 	return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int cnt[100];
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int t,n;
// 	cin>>t;
// 	while(t--)
// 	{
// 		for(int i=1;i<=100;i++)
// 			cnt[i]=0;
// 		cin>>n;
// 		int a[n+5];
// 		for(int i=1;i<=n;i++)
// 		{
// 			cin>>a[i];
// 			cnt[a[i]]++;
// 		}
// 		for(int i=1;i<=n;i++)
// 		{
// 			if(cnt[a[i]]==1)
// 			{
// 				cout<<i<<endl;
// 				break;
// 			}
// 		}
// 	}
// 	return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int p,n,ans=0,h;
// 	cin>>p>>n;
// 	int a[n+5];
// 	for(int i=1;i<=n;i++)
// 		cin>>a[i];
// 	int cnt[p+5];
// 	for(int i=0;i<=p;i++)
// 		cnt[i]=0;
// 	for(int i=1;i<=n;i++)
// 	{
// 		h=a[i]%p;
// 		cnt[h]++;
// 		if(cnt[h]>=2)
// 		{
// 			ans=i;
// 			break;
// 		}
// 	}
// 	if(ans)
// 		cout<<ans<<endl;
// 	else
// 		cout<<"-1"<<endl;
// 	return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int seive[10000000];
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int t,n;
// 	cin>>t;
// 	while(t--)
// 	{
// 		cin>>n;
// 		int a[n+5],x=1,root;
// 		for(int i=0;i<n;i++)
// 			cin>>a[i];
// 		for(int i=0;i<n;i++)
// 		{
// 			root=sqrt(a[i]);
// 			if(root*root!=a[i])
// 			{
// 				x=0;
// 				break;
// 			}
// 		}
// 		if(x==1)
// 			cout<<"NO"<<endl;
// 		else
// 			cout<<"YES"<<endl;

// 	}
// 	return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	long long int t,s,x;
// 	cin>>t>>s>>x;
// 	if(x<t+s)
// 	{
// 		if(x==t)
// 			cout<<"YES"<<endl;
// 		else
// 			cout<<"NO"<<endl;
// 	}
// 	else
// 	{
// 		x-=t;
// 		if(x%s==0 || x%s==1)
// 			cout<<"YES"<<endl;
// 		else
// 			cout<<"NO"<<endl;
// 	}
// 	return 0;
// }

// B. Captain Flint and a Long Voyage
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		int n,x;
// 		cin>>n;
// 		x=ceil(n/4.0);
// 		for(int i=1;i<=n-x;i++)
// 				cout<<9;
// 		for(int i=1;i<=x;i++)
// 			cout<<8;
// 		cout<<endl;
// 	}
// 	return 0;
// }

// A. Mashmokh and Lights
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int n,m;
// 	cin>>n>>m;
// 	int fan[n+2];
// 	for(int i=1;i<=n+1;i++)
// 		fan[i]=0;
// 	for(int i=1;i<=m;i++)
// 	{
// 		int x;
// 		cin>>x;
// 		for(int i=x;i<=n;i++)
// 		{
// 			if(fan[i]>0)
// 				break;
// 			else
// 				fan[i]=x;
// 		}
// 	}
// 	for(int i=1;i<=n;i++)
// 	{
// 		if(i==n)
// 			cout<<fan[i]<<endl;
// 		else
// 			cout<<fan[i]<<" ";
// 	}
// 	return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char m[100];
//     int ln,i,x;
//     scanf("%d",&x);
//     for(i = 1; i <= x; i++)
//     {
//         scanf("%s",&m);
//         ln = strlen(m);
//         if(ln <= 10)
//         {
//              printf("%s\n",m);
//         }
//         else
//         {
//             printf("%c%d%c\n",m[0],ln - 2,m[ln - 1]);
//         }
//     }
//     return 0;
// }

// A. Mahmoud and Ehab and the MEX
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int n,x;
// 	cin>>n>>x;
// 	int a[n+5],cnt=0;
// 	for(int i=0;i<n;i++)
// 		cin>>a[i];
// 	sort(a,a+n);
// 	for(int i=0;i<n;i++)
// 	{			
// 		if(x==a[i])
// 		{
// 			cnt++;
// 			if(i==0)
// 				cnt+=x;
// 			else
// 				cnt+=x-a[i-1]-1;
// 			break;
// 		}
// 		else if(x==0)
// 			break;
// 		else if(x<a[i] && i==0)
// 		{
// 			cnt+=x;
// 			break;
// 		}
// 		else if(x<a[i])
// 		{
// 			cnt+=x-a[i-1]-1;
// 			break;
// 		}
// 		else if(i==0 && n!=1)
// 		{
// 			cnt+=a[i];
// 		}
// 		else if(i==n-1 && x>a[i])
// 			cnt+=x-a[i]-1;

// 		else
// 			cnt+=a[i]-a[i-1]-1;
// 	}
// 	cout<<cnt<<endl;
	
// 	return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int y,b,r;
// 	cin>>y>>b>>r;
// 	for(int i=r;i>=3;i--)
// 	{
// 		if(b>=i-1 && y>=i-2)
// 		{
// 			cout<<3*i-3<<endl;
// 			break;
// 		}
// 	}
// 	return 0;
// }

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
// 		int cnt[n+5],a[n+5];
// 		vector<int>min;
// 		for(int i=1;i<=n;i++)
// 			cnt[i]=0;
// 		for(int i=1;i<=n;i++)
// 		{
// 			cin>>a[i];
// 			cnt[a[i]]++;
// 		}
// 		for(int i=1;i<=n;i++)
// 		{
// 			if(cnt[a[i]]==1)
// 				min.push_back(a[i]);
// 		}
// 		sort(min.begin(),min.end());
// 		if(min.size()==0)
// 			cout<<"-1"<<endl;
// 		else
// 		{
// 			for(int i=1;i<=n;i++)
// 			{
// 				if(a[i]==min[0])
// 				{
// 					cout<<i<<endl;
// 					break;
// 				}
// 			}
// 		}
// 	}
// 	return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int t,n,k;
// 	cin>>t;
// 	while(t--)
// 	{
// 		cin>>n>>k;
// 		for(int i=1;i<=k;i++)
// 		{
// 			if(n%2==0)
// 			{
// 				while(i<=k)
// 				{
// 					n+=2;
// 					i++;
// 				}
// 			}
// 			else
// 			{
// 				for(int j=3;j<=n;j++)
// 				{
// 					if(n%j==0)
// 					{
// 						n+=j;
// 						break;
// 					}
// 				}
// 			}
// 		}
// 		cout<<n<<endl;
// 	}
// 	return 0;
// }

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
// 		int a[n+5],b[n+5];
// 		for(int i=1;i<=n;i++)
// 		{
// 			cin>>a[i];
// 		}
// 		for(int i=1;i<=n;i++)
// 		{
// 			cin>>b[i];
// 		}
// 		int ans=1,diff=0,cnt=0;
// 		for(int i=1;i<=n;i++)
// 		{
// 			if(a[i]==b[i])
// 			{
// 				if(diff==0)
// 					continue;
// 				else
// 					diff=0;
// 			}
// 			else if(a[i]>b[i])
// 			{
// 				ans=0;
// 				break;
// 			}
// 			else
// 			{
// 				if(diff==0)
// 				{
// 					diff=b[i]-a[i];
// 					cnt++;
// 				}
// 				else if(diff!=b[i]-a[i])
// 				{
// 					ans=0;
// 					break;
// 				}
// 			}
// 		}
// 		if(ans && cnt<=1)
// 			cout<<"YES"<<endl;
// 		else
// 			cout<<"NO"<<endl;
// 	}
// 	return 0;
// }

// B. JOE is on TV!
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int n;
// 	double ans=0;
// 	cin>>n;
// 	for(int i=1;i<=n;i++)
// 		ans+=1.0/i;
// 	cout<<fixed<<setprecision(12)<<ans<<endl;
// 	return 0;
// }

// A. ACM ICPC
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int a[6];
// 	for(int i=0;i<6;i++)
// 		cin>>a[i];
// 	sort(a,a+6);
// 	int yes=0;
// 	do
// 	{
// 		if(a[0]+a[1]+a[2]==a[3]+a[4]+a[5])
// 		{
// 			yes=1;
// 			break;
// 		}
// 	}while(next_permutation(a,a+6));
// 	if(yes)
// 		cout<<"YES"<<endl;
// 	else
// 		cout<<"NO"<<endl;
// 	return 0;
// }

// B. Rooms and Staircases
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		int n;
// 		cin>>n;
// 		string s;
// 		cin>>s;
// 		vector<int> index;
// 		for(int i=0;i<=n;i++)
// 		{
// 			if(s[i]=='1')
// 				index.push_back(i);
// 		}
// 		if(index.size()==0)
// 			cout<<n<<endl;
// 		else
// 		{
// 			int i,f,ans;
// 			i=index[0]+1;
// 			f=index[index.size()-1]+1;
// 			ans=max(2*f,(n-i+1)*2);
// 			cout<<ans<<endl;
// 		}
// 	}
// 	return 0;
// }

// C. Board Moves
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	long long int t,n;
// 	cin>>t;
// 	while(t--)
// 	{
// 		cin>>n;
// 		long long int sum=0;
// 		for(long long int i=1;i<=n/2;i++)
// 			sum+=i*i;
// 		cout<<sum*8<<endl;
// 	}
// 	return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	vector<int> a;
// 	string s;
// 	cin>>s;
// 	for(int i=0;i<=s.size();i++)
// 	{
// 		if(s[i]=='1'||s[i]=='2'||s[i]=='3')
// 			a.push_back(s[i]);
// 	}
// 	sort(a.begin(),a.end());
// 	for(int i=0,j=0;i<s.size();i++)
// 	{
// 		if(i%2==0)
// 		{
// 			cout<<(char)a[j];
// 			j++;
// 		}
// 		else 
// 			cout<<'+';
// 	}

// 	return 0;
// }

// A. Card Game
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	string card="6789TJQKA";
// 	int power[200];
// 	for(int i=0;i<card.size();i++)
// 		power[card[i]]=i;
// 	string trump,input1,input2;
// 	cin>>trump;
// 	cin>>input1>>input2;
// 	if(input1[1]==input2[1])
// 	{
// 		if(power[input1[0]]>power[input2[0]])
// 			cout<<"YES"<<endl;
// 		else
// 			cout<<"NO"<<endl;
// 	}
// 	else if(trump[0]==input1[1])
// 		cout<<"YES"<<endl;
// 	else 
// 		cout<<"NO"<<endl;
// 	return 0;
// }

// A. Hit the lottery
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int dollar[]={100,20,10,5,1};
// 	int sum=0;
// 	int n;
// 	cin>>n;
// 	for(int i=0;i<5;i++)
// 	{
// 		sum+=n/dollar[i];
// 		n%=dollar[i];
// 	}
// 	cout<<sum<<endl;
// 	return 0;
// }
// A. Add and Divide

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	long long int t,a,b;
// 	cin>>t;
// 	while(t--)
// 	{
// 		cin>>a>>b;
// 		if(a<b)
// 			cout<<1<<endl;
// 		else
// 		{
// 			long long int res=a+5;
// 			for(int i=b;i<=b+10;i++)
// 			{
// 				long long int ans=0;
// 				if(i==1)
// 				{
// 					i++;
// 				}
// 				ans+=i-b;
// 				long long int n=a;
// 				while(n!=0)
// 				{
// 					n/=i;
// 					ans++;
// 				}
// 				res=min(res,ans);
// 			}
// 			cout<<res<<endl;
// 		}
// 	}
// 	return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		string a,b;
// 		vector<string> sub;
// 		cin>>a;
// 		cin>>b;
// 		int l=a.size();
// 		int yes=0,ans;
// 		int res=a.size()+b.size();
// 		for(int i=0;i<l;i++)
// 		{
// 			for(int j=l-i;j>=1;j--)
// 			{
// 				string s;
// 				s=a.substr(i,j);
// 				int found=b.find(s);
// 				if(found!=string::npos)
// 				{
// 					ans=s.size();
// 					ans=(a.size()-ans)+(b.size()-ans);
// 					res=min(res,ans);
// 				}
// 			}
// 		}
// 		cout<<res<<endl;
// 	}
// 	return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	string s;
// 	cin>>s;
// 	int cnt1=0,cnt2=0,cnt3=0;
// 	for(int i=0;i<s.size();i++)
// 	{
// 		if(s[i]=='1')
// 			cnt1++;
// 		else if(s[i]=='2')
// 			cnt2++;
// 		else if(s[i]=='3')
// 			cnt3++;
// 	}
// 	for(int i=1;i<=cnt1;i++)
// 	{
// 		if(i==cnt1 && cnt2==0 && cnt3==0)
// 			cout<<1<<endl;
// 		else
// 			cout<<1<<"+";
// 	}
// 	for(int i=1;i<=cnt2;i++)
// 	{
// 		if(i==cnt2 && cnt3==0)
// 			cout<<2<<endl;
// 		else
// 			cout<<2<<"+";
// 	}
// 	for(int i=1;i<=cnt3;i++)
// 	{
// 		if(i==cnt3)
// 			cout<<3<<endl;
// 		else
// 			cout<<3<<"+";
// 	}
// 	return 0;
// }

// C. Berland Regional
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	ll t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		ll n;
// 		cin>>n;
// 		vector<vector<ll>> v(n+5);
// 		vector<ll> ans(n+5);
// 		ll x,a[n+5];
// 		for(ll i=0;i<n;i++)
// 			cin>>a[i];
// 		for(ll i=0;i<n;i++)
// 		{
// 			cin>>x;
// 			v[a[i]].push_back(x);
// 		}
// 		for(ll i=1;i<=n;i++)
// 		{
// 				if(v[i].size()>1)
// 				{
// 					sort(v[i].rbegin(),v[i].rend());
// 					for(ll j=1;j<v[i].size();j++)
// 						v[i][j]+=v[i][j-1];
// 				}
// 		}
	
// 		for(ll i=1;i<=n;i++)
// 		{
// 			if(v[i].size()>0)
// 			{
// 				for(ll j=1;j<=v[i].size();j++)
// 				{
// 					x=(v[i].size()/j)*j;
// 					ans[j]+=v[i][x-1];
// 				}
// 			}
// 		}
// 		for(ll i=1;i<=n;i++)
// 		{
// 			if(i==n)
// 				cout<<ans[i]<<endl;
// 			else
// 				cout<<ans[i]<<" ";
// 		}
// 	}
// 	return 0;
// }

// B. The Cake Is a Lie
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		int n,m,k;
// 		cin>>n>>m>>k;
// 		if((n-1)+(n*(m-1))==k)
// 			cout<<"YES"<<endl;
// 		else
// 			cout<<"NO"<<endl;
// 	}
// 	return 0;
// }
// A. Red and Blue Beans
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		long long int r,b,d,x,y;
// 		cin>>r>>b>>d;
// 		x=min(r,b);
// 		y=max(r,b);
// 		if(x*(d+1)>=y)
// 			cout<<"YES"<<endl;
// 		else
// 			cout<<"NO"<<endl;
// 	}
// 	return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	long long int value[]={6,2,5,5,4,5,6,3,7,6};
// 	long long int a,b,sum=0,i,x,temp;
// 	cin>>a>>b;
// 	for(i=a;i<=b;i++)
// 	{
// 		temp=i;
// 		while(temp>0)
// 		{
// 			x=temp%10;
// 			temp/=10;
// 			sum+=value[x];
// 		}
// 	}
// 	cout<<sum<<endl;
// 	return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	ll t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		ll n,x,found=1;
// 		cin>>n>>x;
// 		ll a[n+5],cumsum[n+5];
// 		for(int i=0;i<n;i++)
// 			cin>>a[i];
// 		for(int i=0;i<n;i++)
// 		{
// 			if(i==0)
// 				cumsum[i]=a[i];
// 			else
// 				cumsum[i]=a[i]+cumsum[i-1];
// 		}
// 		for(int i=0;i<n;i++)
// 		{
// 			if(cumsum[i]==x)
// 			{
// 				if(i==n-1)
// 					found=0;
// 				else
// 				{
// 					found=1;
// 					swap(a[i],a[i+1]);
// 					break;
// 				}
// 			}
// 		}
// 		if(found==0)
// 			cout<<"NO"<<endl;
// 		else
// 		{
// 			cout<<"YES"<<endl;
// 			for(int i=0;i<n;i++)\
// 			{
// 				if(i==n-1)
// 					cout<<a[i]<<endl;
// 				else
// 					cout<<a[i]<<" ";
// 			}
// 		}
// 	}
// 	return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	ll t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		ll n;
// 		cin>>n;
// 		ll sum=2,found=0;
// 		for(ll i=1;;i++)
// 		{
// 			if(sum==n || sum+2==n)
// 			{
// 				found=1;
// 				break;
// 			}
// 			else if(sum>n)
// 				break;
// 			ll x;
// 			x=(i*4)+9;
// 			sum+=x;
// 		}
// 		if(found)
// 			cout<<"YES"<<endl;
// 		else
// 			cout<<"NO"<<endl;
// 	}
// 	return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	ll t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		ll n,square=0,x,temp;
// 		cin>>n;
// 		if(n==6)
// 		{
// 			square=0;
// 		}
// 		else if(n%2==0)
// 		{
// 			x=n;
// 			x/=2;
// 			temp=sqrt(x);
// 			if(temp*temp==x)
// 				square=1;
// 			else if(n%4==0)
// 			{
// 				x=n;
// 				x/=4;
// 				temp=sqrt(x);
// 				if(temp*temp==x)
// 					square=1;
// 			}
// 		}
// 		if(square)
// 			cout<<"YES"<<endl;
// 		else
// 			cout<<"NO"<<endl;	
// 	}
// 	return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	for(int i=1;i<=122;i++)
// 	{
// 		string s;
// 		cin>>s;
// 		if(s=="YES")
// 			cout<<i<<endl;
// 	}
// 	return 0;
// }
// 
// B. Magic Stick
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	ll t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		ll x,y;
// 		cin>>x>>y;
// 		if(x==1)
// 		{
// 			if(x==y)
// 				cout<<"YES"<<endl;
// 			else
// 				cout<<"NO"<<endl;
// 		}
// 		else if(x==2)
// 		{
// 			if(y<=3)
// 				cout<<"YES"<<endl;
// 			else
// 				cout<<"NO"<<endl;
// 		}
// 		else if(x==3)
// 		{
// 			if(y<=x)
// 				cout<<"YES"<<endl;
// 			else
// 				cout<<"NO"<<endl;
// 		}
// 		else
// 			cout<<"YES"<<endl;

// 	}
// 	return 0;
// }

// B. Mahmoud and a Triangle
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	ll n;
// 	cin>>n;
// 	ll a[n+5],b[3];
// 	for(ll i=0;i<n;i++)
// 		cin>>a[i];
// 	sort(a,a+n);
// 	ll found =0;
// 	for(ll i=1;i<n-1;i++)
// 	{
// 		if(a[i-1]+a[i]>a[i+1])
// 		{
// 			found=1;
// 			break;
// 		}
// 	}
// 	if(found)
// 		cout<<"YES"<<endl;
// 	else
// 		cout<<"NO"<<endl;
// 	return 0;
// }

// A. Sereja and Mugs
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	ll n,s,x=1,sum=0;
// 	cin>>n>>s;
// 	ll a[n];
// 	for(ll i=0;i<n;i++)
// 	{
// 		cin>>a[i];
// 		sum+=a[i];
// 	}
// 	sort(a,a+n);
// 	if(sum-a[n-1]<=s)
// 		cout<<"YES"<<endl;
// 	else
// 		cout<<"NO"<<endl;
// 	return 0;
// }

// A. Do Not Be Distracted!
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	ll t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		ll n,ans=1;
// 		ll cnt[200];
// 		for(ll i=65;i<=90;i++)
// 			cnt[i]=0;
// 		cin>>n;
// 		string s;
// 		cin>>s;
// 		for(ll i=0;i<n;i++)
// 		{
// 			if(i==0)
// 				cnt[s[i]]++;
// 			else if(s[i]==s[i-1])
// 				continue;
// 			else
// 			{
// 				cnt[s[i]]++;
// 				if(cnt[s[i]]>1)
// 				{
// 					ans=0;
// 					break;
// 				}
// 			}
// 		}
// 		if(ans)
// 			cout<<"YES"<<endl;
// 		else
// 			cout<<"NO"<<endl;
// 	}
// 	return 0;
// }

// A. Game 23
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	ll n,m,cnt=0,x;
// 	cin>>n>>m;
// 	if(m%n!=0)
// 		cout<<-1<<endl;
// 	else
// 	{
// 		x=m/n;
// 		while(x>1)
// 		{
// 			if(x%2==0)
// 			{
// 				x/=2;
// 				cnt++;
// 			}
// 			else if(x%3==0)
// 			{
// 				x/=3;
// 				cnt++;
// 			}
// 			else
// 				break;
// 		}
// 		if(x==1)
// 			cout<<cnt<<endl;
// 		else
// 			cout<<-1<<endl;
// 	}
// 	return 0;
// }

// B. String LCM
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// int gcd(int a ,int b)
// {
// 	if(b==0)
// 		return a;
// 	return gcd(b,a%b);
// }
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	ll t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		string s,t,ans1,ans2;
// 		cin>>s;
// 		cin>>t;
// 		ll l1,l2,ans;
// 		l1=s.size();
// 		l2=t.size();
// 		ans=l1*l2/gcd(l1,l2);
// 		for(ll i=1;i<=ans/l1;i++)
// 			ans1+=s;
// 		for(ll i=1;i<=ans/l2;i++)
// 			ans2+=t;
// 		if(ans1==ans2)
// 			cout<<ans1<<endl;
// 		else
// 			cout<<-1<<endl;
// 	}
// 	return 0;
// }

// B. Fair Numbers
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// ll fair(ll n)
// {
// 	ll x,found=1;
// 	x=n;
// 	while(x>0)
// 	{
// 		if(x%10==0)
// 		{
// 			x/=10;
// 			continue;
// 		}
// 		else if(n%(x%10)!=0)
// 			return 0;
// 		else
// 			x/=10;
// 	}
// 	return 1;
// }
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	ll t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		ll n;
// 		cin>>n;
// 		while(fair(n)!=1)
// 			n++;
// 		cout<<n<<endl;
// 	}
// 	return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	ll n;
// 	cin>>n;
// 	ll a[n],lost=0,ans;
// 	vector<int> v;
// 	v.push_back(0);
// 	for(ll i=0;i<n;i++)
// 		cin>>a[i];
// 	for(ll i=0;i<n;i++)
// 	{
// 		if(i==0 && a[i]!=0)
// 		{
// 				lost=1;
// 				ans=i+1;
// 				break;
// 		}
// 		else if(a[i]==0)
// 			continue;
// 		else
// 		{
// 			ll x=v[v.size()-1];
// 			if(a[i]==x)
// 				continue;
// 			else if(a[i]>x && a[i]-x==1)
// 				v.push_back(a[i]);
// 			else if(a[i]<x)
// 				continue;
// 			else
// 			{
// 				lost=1;
// 				ans=i+1;
// 				break;	
// 			}
// 		}
// 	}
// 	if(lost)
// 		cout<<ans<<endl;
// 	else
// 		cout<<-1<<endl;
// 	return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	ll t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		ll a,b;
// 		cin>>a>>b;
// 		if(b==1)
// 			cout<<"NO"<<endl;
// 		else
// 		{
// 			cout<<"YES"<<endl;
// 			cout<<a<<" "<<a*b<<" "<<a*(b+1)<<endl;
// 		}
// 	}
// 	return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// ll gcd(ll a ,ll b)
// {
// 	if(b==0)
// 		return a;
// 	return gcd(b,a%b);
// }
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	ll t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		ll n,mn,mx,cnt=0;
// 		cin>>n;
// 		ll a[n+5],b[n+5],index=0;
// 		for(ll i=1;i<=n;i++)
// 		{
// 			cin>>a[i];
// 			if(a[i]<=a[index])
// 				index=i;
// 			b[i]=a[i];
// 		}
// 		mn=a[index];
// 		mx=mn;
// 		for(ll i=1;i<=n;i++)
// 		{
// 			if(gcd(a[index],a[i])==1 || i==index)
// 				continue;
// 			else
// 			{
// 				mx++;
// 				cnt++;
// 				while(1)
// 				{
// 					if(gcd(mn,mx)==1)
// 						break;
// 					else
// 						mx++;
// 				}
// 				a[index]=mn;
// 				a[i]=mx;
// 			}
// 		}
// 		cout<<cnt<<endl;
// 		mn=b[index];
// 		mx=mn;
// 		for(ll i=1;i<=n;i++)
// 		{
// 			if(gcd(b[index],b[i])==1 || i==index)
// 				continue;
// 			else
// 			{
// 				mx++;
// 				cnt++;
// 				while(1)
// 				{
// 					if(gcd(mn,mx)==1)
// 						break;
// 					else
// 						mx++;
// 				}
// 				b[index]=mn;
// 				b[i]=mx;
// 			}
// 			cout<<index<<" "<<i<<" "<<mn<<" "<<mx<<endl;
// 		}
// 	}
// 	return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	ll t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		ll n,mn,mx,cnt=0;
// 		cin>>n;
// 		ll a[n+5],index=1;
// 		for(ll i=1;i<=n;i++)
// 		{
// 			cin>>a[i];
// 			if(a[i]<=a[index])
// 				index=i;
// 		}
// 		mn=a[index];
// 		mx=mn+index;
// 		cout<<n-1<<endl;
// 		for(ll i=1;i<=n;i++)
// 		{
// 			if(i==index)
// 			{
// 				mx--;
// 				continue;
// 			}
// 			else if(i<index)
// 				mx--;
// 			else
// 				mx++;			
// 			cout<<index<<" "<<i<<" "<<mn<<" "<<mx<<endl;
// 		}
// 	}
// 	return 0;
// }

// B. Different Divisors

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// int is_prime(ll n)
// {
// 	if(n==2)
// 		return 1;
// 	else if(n%2==0)
// 		return 0;
// 	else
// 	{
// 		for(ll i=3;i*i<=n;i+=2)
// 		{
// 			if(n%i==0)
// 				return 0;
// 		}
// 	}
// 	return 1;
// }

// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	ll t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		ll d,a,b;
// 		cin>>d;
// 		a=1+d;
// 		while(is_prime(a)!=1)
// 			a++;
// 		b=a+d;
// 		while(is_prime(b)!=1)
// 			b++;
// 		cout<<a*b<<endl;
// 	}
// 	return 0;
// }

// B. Watering System
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	ll n,a,b,found=0,index;
// 	cin>>n>>a>>b;
// 	ll s[n+5];
// 	for(ll i=1;i<=n;i++)
// 		cin>>s[i];
// 	sort(s+2,s+n+1);
// 	for(ll i=2;i<=n;i++)
// 		s[i]+=s[i-1];
// 	ll cnt=0;
// 	for(ll i=n;i>=1;i--)
// 	{
// 		double x;
// 		x=(double)(s[1]*a)/s[i];
// 		if(x>=b)
// 			break;
// 		cnt++;
// 	}
// 	cout<<cnt<<endl;
// 	return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int a[6][6],r,c;
// 	for(int i=1;i<=5;i++)
// 	{
// 		for(int j=1;j<=5;j++)
// 		{
// 			cin>>a[i][j];
// 			if(a[i][j]==1)
// 			{
// 				r=i;
// 				c=j;
// 			}
// 		}
// 	}
// 	cout<<abs(3-r)+abs(3-c)<<endl;
// 	return 0;
// }

// B1. Books Exchange (easy version)
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int q;
// 	cin>>q;
// 	while(q--)
// 	{
// 		int n;
// 		cin>>n;
// 		int a[n+5];
// 		for(int i=1;i<=n;i++)
// 			cin>>a[i];
// 		for(int i=1;i<=n;i++)
// 		{
// 			if(a[i]==i)
// 			{
// 				if(i==n)
// 					cout<<1<<endl;
// 				else
// 					cout<<1<<" ";
// 			}
// 			else
// 			{
// 				int cnt=1,index;
// 				index=a[i];
// 				while(index!=i)
// 				{
// 					index=a[index];
// 					cnt++;
// 				}
// 				if(i==n)
// 					cout<<cnt<<endl;
// 				else
// 					cout<<cnt<<" ";
// 			}
// 		}
// 	}
// 	return 0;
// }


// B. Lovely Palindromes
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	string s;
// 	cin>>s;
// 	for(int i=0;i<s.size();i++)
// 		cout<<s[i];
// 	for(int i=s.size()-1;i>=0;i--)
// 		cout<<s[i];
// 	cout<<endl;
// 	return 0;
// }

// A. Broken Keyboard
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		string s,res;
// 		int found=0,cnt[200];
// 		for(int i=97;i<=122;i++)
// 			cnt[i]=1;
// 		cin>>s;
// 		vector<char>v;
// 		for(int i=0;i<s.size();i++)
// 		{
// 			if(cnt[s[i]]==0)
// 				continue;
// 			cnt[s[i]]++;
// 			if(s[i]!=s[i+1])
// 			{
// 				if(cnt[s[i]]>0 && cnt[s[i]]%2==0)
// 					cnt[s[i]]=0;
// 			}
// 		}
// 		for(int i=97;i<=122;i++)
// 		{
// 			if(cnt[i]==0)
// 				cout<<char(i);
// 		}
// 		cout<<endl;
// 	}
// 	return 0;
// }

// B1. Social Network (easy version)
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	ll n,k;
// 	cin>>n>>k;
// 	ll a=min(n,k);
// 	ll id[n+5],found,x=0;
// 	vector<ll> v;
// 	for(ll i=0;i<n;i++)
// 	{
// 		cin>>id[i];
// 		found=0;
// 		for(ll j=0;j<i;j++)
// 		{
// 			if(id[i]==id[j])
// 			{
// 				found=1;
// 				break;
// 			}
// 		}
// 		if(found)
// 			continue;
// 		else
// 			x++;
// 	}
// 	a=min(x,a);
// 	v.push_back(id[0]);
// 	for(ll i=1;i<n;i++)
// 	{
// 		found=0;
// 		for(ll j=v.size()-1,cnt=0;j>=0 && cnt!=a;j--,cnt++)
// 		{
// 			if(id[i]==v[j])
// 			{
// 				found=1;
// 				break;
// 			}
// 		}
// 		if(found)
// 			continue;
// 		else
// 			v.push_back(id[i]);
// 	}
// 	ll cnt=1;
// 	cout<<a<<endl;
// 	for(ll j=v.size()-1;j>=0;j--,cnt++)
// 	{
// 		cout<<v[j]<<" ";
// 		if(cnt==a)
// 		{
// 			cout<<endl;
// 			break;
// 		}
// 	}
// 	return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	ll t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		ll k;
// 		cin>>k;
// 		vector<ll> v;
// 		for(ll i=1;i<=100;i++)
// 		{
// 			for(ll j=0;j<=100;j++)
// 			{
// 				if(100.0*i/(i+j)==k)
// 					v.push_back(i+j);
// 			}
// 		}
// 		sort(v.begin(),v.end());
// 		cout<<v[0]<<endl;
// 	}
// 	return 0;
// }

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,found=0;
		cin>>n;
		ll a[n+6];
		for(ll i=0;i<n;i++)
			cin>>a[i];
		for(ll i=0;i<n-1;i++)
		{
			if((a[i]+1)!=a[i+1])
				found=1;
		}
		if(found==0)
			cout<<0<<endl;
		else
		{
			if(a[0]==n && a[n-1]==1)
				cout<<3<<endl;
			else if(a[0]==1 || a[n-1]==n)
				cout<<1<<endl;
			else
				cout<<2<<endl;
		}
	}
	return 0;
}