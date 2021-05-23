// #include<stdio.h>
// #include<bits/stdc++.h>
// #include<iostream>
// #include<array>
// using namespace std;

// int main()
// {
// 	array<int,5> ar={5,2,6,8,3};
// 	ar.front()=100;
// 	ar.back()=200;
// 	for(auto it=ar.begin();it!=ar.end();it++)
// 		cout<<*it<<" ";
// 	cout<<endl;

// 	for(auto it=ar.rbegin();it<ar.rend();it++)
// 		cout<<*it<<" ";
// 	cout<<"\n";
// 	cout<<ar.size()<<endl;
// 	cout<<"ar "<<(ar.empty()?"is empty":"is not empty")<<endl;

// }


// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	char m[200],*p;
// 	cin>>m;
// 	p=m+2;
// 	while(*p)
// 	{
// 		cout<<*p++<<endl;
// 		// cout<<*p<<endl;
// 	}
// 	return 0;
// }
// #include<stdio.h>
// char *p[]={
// 	"Input exceeds field width",
// 	"Out of range",
// 	"Printer not turned on",
// 	"Paper out",
// 	"Disk full",
// 	"Disk write error"
// 	};
// void error(int err_num)
// {
// 	printf(p[err_num]);
// }
// int main()
// {
// 	int i;
// 	scanf("%d",&i);
// 	error(i);
// }


// #include <stdio.h>
// #include <string.h>
// char *p[][2] = {
// "Red Delicious", "red",
// "Golden Delicious", "yellow",
// "Hnesap", "red",
// "Gala", "reddish orange",
// "Lodi" , "green",
// "Mutsu", "yellow",
// "Cortland", "red",
// "Jonathan", "red",
// "", "" 
// };
// int main(void)
// {
// int i;
// char apple [80];
// printf("Enter name of apple: ");
// gets (apple);
// for(i=0; *p[i][0]; i++) 
// {
// 	if( !strcmp(apple, p[i] [0]))
// 		printf("%s is %s\n", apple, p[i] [1]);
// }
// return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main()
// {
// 	char str[30],*p,**mp;
// 	p=str;
// 	mp=&p;
// 	gets(*mp);
// 	printf("%s %p",*mp,*mp);
// }

// #include<stdio.h>
// #include<string.h>
// int main()
// {
// 	char str[80];
// 	strcpy(str,"ABCDEFGH");
// 	*(str+2)='F';
// 	printf("%c",*(str+2));
// }

// #include<stdio.h>
// #include<string.h>
// void copy(char *s1,char *s2);

// int main()
// {
// 	char str[80]="Fuck off! And";
// 	copy(str+strlen(str),"Copy this line");
// 	printf("%s\n", str);

// 	return 0;
// }

// void copy(char *s1,char *s2)
// {
// 	if(*s2)
// 	{
// 		*s1++=*s2++;
// 		copy(s1,s2);
// 	}
// 	else
// 		*s1='\n';
// }

// #include<stdio.h>
// int fact(int a);

// int main()
// {
// 	int i,f;
// 	scanf("%d",&i);
// 	f=fact(i);
// 	printf("%d",f);
// }

// int fact(int a)
// {
// 	if(a>=1)
// 		return a*fact(a-1);
// 	else
// 		return 1;
// }

// #include<stdio.h>
// #include<stdlib.h>
// int main(int argc, char *argv[])
// {
// 	int i;
// 	double d;
// 	long l;
// 	i=atoi(argv[1]);
// 	l=atol(argv[2]);
// 	d=atof(argv[3]);
// 	printf("%d %ld %lf",i,l,d);
// 	return 0;
// }

// #define STDIO <stdio.h>
// #include STDIO
// #include<string.h>
// void recursion(char x);
// int main()
// {
// 	char a='a';
// 	recursion(a);
// 	return 0;
// }

// void recursion(char x)
// {
// 	if(x<'z')
// 	{
// 		recursion(++x);
// 		printf("%c ",x);
// 	}
// }

// #include<stdio.h>
// #include<stdlib.h>

// int main(void)
// {
// 	char str[100]="This is file system test";
// 	FILE *fp;
// 	char ch,*p;

// 	if(fp=fopen("myfile","w")==NULL)
// 	{
// 		printf("Cannot open file.\n");
// 		exit(1);
// 	}

// 	p=str;
// 	while(*p)
// 	{
// 		if(fputc(*p++,fp)==EOF)
// 		{
// 			printf("Error writing file.\n");
// 			exit(1);
// 		}
// 	}
// 	fclose(fp);

// 	if(fp=fopen("myfile","r")==NULL)
// 	{
// 		printf("Cannot open file.\n");
// 		exit(1);
// 	}

// 	while(ch=fgetc(fp)!=EOF)
// 		putchar(ch);
// 	fclose(fp);

// 	return 0;
// }


// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>
// struct S{
// 	char S[4];
// };
// int main()
// {
// 	struct S S={'a','b'};
// 	printf("%d",sizeof(S.S)-strlen(S.S));
// }

// #include<stdio.h>
// #include<string.h>
// #define ABC 10
// #define XYZ ABC-1

// int main()
// {
// 	struct 
// 	printf("%d",(sizeof(t1)==sizeof(t2))+sizeof(t1[0]));
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false);cin.tie(0);
// 	int myints[]={16,2,67,35,55};
// 	vector<int>vec(myints,myints+3);
// 	// for(int i=0;i<10;i++)
// 	// 	vec.push_back(i);
// 	// vector<int> fifth (myints, myints + sizeof(myints) / sizeof(int) );
// 	for(vector<int>::iterator it=vec.begin();it!=vec.end();it++)
// 		cout<<" "<<*it;	
// 	cout<<endl;
// 	cout<<sizeof(myints)<<sizeof(int);
	

// 	return 0;
// }
// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
// 	vector<int> foo(3,4);
// 	vector<int>bar(5,0);
// 	bar=foo;
// 	foo=vector<int> (5);
// 	cout<<foo.size()<<" "<<bar.size()<<endl;
// 	// vector<int>::iterator i;
// 	for(auto i=bar.begin();i!=bar.end();i++)
// 		cout<<*i<<" ";
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
// 	vector<int> vec;
// 	for(int i=0;i<6;i++)
// 		vec.push_back(i);
// 	vec.resize(5);
// 	vec.resize(8,100); //fills with 100 the places without num.if a place is filled with num, it doesnt overwrite it.
// 	vec.resize(12);
// 	for(auto it=vec.begin();it!=vec.end();it++)
// 		cout<<*it<<" ";
// 	cout<<endl;
// 	cout<<vec.capacity()<<" "<<vec.size()<<" "<<vec.max_size()<<endl;
// 	cout<<vec.empty()<<endl;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
// 	int sz;
// 	vector<int> foo;
// 	sz=foo.capacity();
// 	cout<<"making foo grow"<<endl;
// 	for(int i=0;i<100;i++)
// 	{
// 		foo.push_back(i);
// 		if(sz!=foo.capacity())
// 		{
// 			sz=foo.capacity();
// 			cout<<"Capacity changed to "<<sz<<" when i is "<<i+1<<endl;
// 		}
// 	}
// 	cout<<endl<<endl<<endl;

// 	vector<int> bar;
// 	sz=bar.capacity();
// 	bar.reserve(100);
// 	cout<<"making bar grow"<<endl;
// 	for(int i=0;i<100;i++)
// 	{
// 		bar.push_back(i);
// 		if(sz!=bar.capacity())
// 		{
// 			sz=bar.capacity();
// 			cout<<"capacity changed to "<<sz<<" when i is "<<i+1<<endl;
// 		}
// 	}
// }

// constructing vectors
// #include <iostream>
// #include <vector>
// using namespace std;
// int main ()
// {
//   // constructors used in the same order as described above:
//   vector<int> first;                                // empty vector of ints
//   vector<int> second (4,100);                       // four ints with value 100
//   vector<int> third (second.begin(),second.end());  // iterating through second
//   vector<int> fourth (third);                       // a copy of third

//   // the iterator constructor can also be used to construct from arrays:
//   int myints[] = {16,2,77,29};
//   vector<int> fifth (myints, myints + sizeof(myints) / sizeof(int) );

//   cout << "The contents of fifth are:";
//   for (vector<int>::iterator it = fifth.begin(); it != fifth.end(); ++it)
//   	cout << ' ' << *it;
//   cout << '\n';

//   return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
// 	vector<int>vec(5);
// 	int *p=vec.data();
// 	*p++=10;
// 	*p++=20; //*p and p++ creates an extra space in front of the vector
// 	p[0]=200;
// 	for(int i=0;i<vec.size();i++)
// 	{
// 		cout<<vec[i]<<" ";
// 	}
// }

// erasing from vector
// #include <iostream>
// #include <vector>

// int main ()
// {
//   std::vector<int> myvector;

//   // set some values (from 1 to 10)
//   for (int i=1; i<=10; i++) myvector.push_back(i);

//   // erase the 6th element
//   myvector.erase (myvector.begin()+4);

//   // erase the first 3 elements:
//   // myvector.erase (myvector.begin(),myvector.begin()+3);

//   std::cout << "myvector contains:";
//   for (unsigned i=0; i<myvector.size(); ++i)
//     std::cout << ' ' << myvector[i];
//   std::cout << '\n';

//   return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int p[10000];
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int cnt=1,i,j;
// 	for(i=2;i*i<=10000;i++)
// 	{
// 		if(p[i]==0)
// 		{
// 			for(j=i*2;j<=100000;j+=i)
// 				p[j]=1;
// 		}
// 	}
// 	for(i=3;i<=10000;i+=2)
// 	{
// 		if(p[i]==0)
// 		{
// 			cnt++;
// 			cout<<i<<" "<<cnt<<endl;
// 		}
// 	}

// 	return 0;
// }

// C++ program to print all primes smaller than or equal to 
// n using Sieve of Eratosthenes 
// #include <bits/stdc++.h> 
// using namespace std; 

// void SieveOfEratosthenes(int n) 
// { 
// 	// Create a boolean array "prime[0..n]" and initialize 
// 	// all entries it as true. A value in prime[i] will 
// 	// finally be false if i is Not a prime, else true. 
// 	bool prime[n+1]; 
// 	int cnt=0;
// 	memset(prime, true, sizeof(prime)); 

// 	for (int p=2; p*p<=n; p++) 
// 	{ 
// 		// If prime[p] is not changed, then it is a prime 
// 		if (prime[p] == true) 
// 		{ 
// 			// Update all multiples of p 
// 			for (int i=p*2; i<=n; i += p) 
// 				prime[i] = false; 
// 		} 
// 	} 

// 	// Print all prime numbers 
// 	for (int p=2; p<=n; p++) 
// 	if (prime[p])
// 	{ 
// 		cnt++;
// 		cout << p << " "<<cnt<<endl; 
// 	}
// } 

// // Driver Program to test above function 
// int main() 
// { 
// 	int n = 10000; 
// 	cout << "Following are the prime numbers smaller "
// 		<< " than or equal to " << n << endl; 
// 	SieveOfEratosthenes(n); 
// 	return 0; 
// } 


// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	char s[200];
// 	cin>>s;
// 	for(int i=0;i<strlen(s)-4;i++)
// 	{
// 		for(int j=i;j<i+4;j++)
// 			cout<<s[j];
// 		cout<<endl;
// 	}

// 	return 0;
// }



// DFS

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
// 	int n,e;
// 	cin>>n>>e;
// 	int** edges=new int*[n];
// 	for(int i=0;i<n;i++)
// 	{
// 		edges[i]=new int[n];
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

// #include <bits/stdc++.h>
// using namespace std;
// int cnt;
// void printdfs(int** edges,int n,int sv,bool* visited)
// {
//     cout<<sv<<endl;
//     visited[sv]=true;
//     for(int i=0;i<n;i++)
//     {
//         if(i==sv)
//             continue;
//         if(edges[sv][i])
//         {
//             if(visited[i])
//                 continue;
//             cnt++;
//             printdfs(edges,n,i,visited);
//         }
//     }
// }

// void printbfs(int** edges,int n,int sv)
// {
// 	queue<int>pending;
// 	bool * visit=new bool[n];
//     for(int i=0;i<n;i++)
//     	visit[i]=false;
//     pending.push(sv);
//     visit[sv]=true;
//     while(!pending.empty())
//     {
//     	int current=pending.front();
//     	pending.pop();
//     	cout<<current<<endl;
//     	for(int i=0;i<n;i++)
//     	{
//     		if(i==current)
//     			continue;
//     		if(edges[current][i]==1 &&!visit[i])
//     		{
//     			pending.push(i);
//     			visit[i]=true;
//     		}
//     	}
//     }
//     delete [] visit;
// }
// int main()
// {
//     ios_base::sync_with_stdio(false); cin.tie(0);
//     int n;
//     int e;
//     cin>>n>>e;

//     int** edges=new int*[n];
//     for(int i=0;i<n;i++)
//     {
//         edges[i] = new int[n];
//         for(int j=0;j<n;j++)
//             edges[i][j]=0;
//     }

//     bool* visited=new bool[n];
//     for(int i=0;i<n;i++)
//         visited[i]=false;

//     for(int i=0;i<e;i++)
//     {
//         int f,s;
//         cin>>f>>s;
//         edges[f][s]=1;
//         edges[s][f]=1;
//     }

//     cout<<"DFS"<<endl;
//     printdfs(edges,n,4,visited);

//     cout<<"BFS"<<endl;
//     printbfs(edges,n,0);
//     cout<<cnt<<endl;

//     delete [] visited;
//     for(int i=0;i<n;i++)
//     	delete [] edges[i];
//     delete [] edges;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int x=8;
// 	for(int i=0;i<9;i++)
// 	{
// 		x=((7*x)+4)%9;
// 		cout<<i+1<<" "<<x<<endl; 
// 	}
// 	return 0;
// }

// #include<stdio.h>
// int main()
// {
// 	long long int sum=1;
// 	for(int i=3;i<=30;i+=3)
// 	{
// 		sum+=(i*(i+2)*(i+2));
// 	}
// 	printf("%d\n",sum);
// 	return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	char s[100];
// 	int *p,**q,a=100;
// 	p=&a;
// 	q=&p;
// 	*p=6;
// 	**q=(*p)*105;
// 	cout<<a;
// 	return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int a=5,b=120,c=10;
// 	// c+=(a<0||++a>=5)?b/a:a--;
// 	cout<<c<<" "<<a<<endl;
// 	c+=(a<0&&++a>=5)?b/a:a--;
// 	cout<<c<<" "<<a;
// 	return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int a,b;
// 	char c[100];
// 	scanf("%[^abc]",&c);
// 	cout<<c;
// 	// scanf("%2d %4d %3d",&a,&b,&c);
// 	// cout<<a<<" "<<b<<" "<<c<<endl;

// 	return 0;
// }
// #include<stdio.h>
// int main()
// {
// 	int a,b;
// 	char c;
// 	scanf("%d %c %d",&a,&c,&b);
// 	if(c=='+')
// 		printf("%d\n",a+b);
// 	else if(c=='-')
// 		printf("%d\n",a-b);
// 	else if(c=='*')
// 		printf("%d\n",a*b);
// 	else if(c=='/')
// 		printf("%d\n",a/b);
// 	return 0;
// }

// #include<stdio.h>
// #include<string.h>
// #include<math.h>
// long long fact(long long n)
// {
// 	if(n==1)
// 		return 1;
// 	else
// 		return n*fact(n-1);
// }
// int main()
// {
// 	long long coloumn,row,ans;
// 	scanf("%lld %lld",&coloumn,&row);
// 	ans=fact(coloumn+row)/(fact(coloumn)*fact(row));
// 	printf("%lld",ans);
// 	return 0;
// }

// #include<stdio.h>
// int main()
// {
// int a=10,b=5;
// a=b++ + ++b;
// a+=(a+b++)+ (++b+a);
// printf("%d ",++a);
// printf("%d\n",b++);
// return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int p[2][3][2]={1,2,3,4,5,6,7,8,9,10,11,12};
// 	cout<<*(*(*p+1)+2);
// 	return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	int a=4,b=7,c;
// 	c=a+++b;
// 	cout<<a<<" "<<b<<" "<<c;
// 	return 0;
// }

// #include<stdio.h>
// int main()
// {
// 	int n;
// 	scanf("%d",&n);
// 	for(int i=1;i<=n;i++)
// 	{
// 		if(i==n)
// 		{
// 			for(int j=1;j<=2*n-1;j++)
// 				printf("*");
// 			break;
// 		}
// 		for(int j=1;j<=n-i;j++)
// 			printf(" ");
// 		if(i>1)
// 		{
// 			printf("*");
// 			for(int j=1;j<=2*(i-1)-1;j++)
// 			{
// 				if(j==i-1)
// 					printf("*");
// 				else
// 					printf(" ");
// 			}
// 		}
// 		printf("*\n");	
// 	}
// 	return 0;
// }
// #include<stdio.h>
// int main()
// {
// 	struct result{
// 		int roll_no;
// 		char name[100];
// 		float marks;
// 		float point;
// 	};
// 	printf("%d\n",sizeof(struct result));
// 	return 0;
// }

// #include<stdio.h>
// int count[1000005],array[1000005];

// int main()
// {
// 	int n,cnt=0;
// 	scanf("%d",&n);
// 	for(int i=0;i<1000005;i++)
// 		count[i]=0;
// 	for(int i=0;i<n;i++)
// 		scanf("%d",&array[i]);
// 	for(int i=0;i<n;i++)
// 	{
// 		if(count[array[i]]==0)
// 		{
// 			cnt++;
// 			count[array[i]]=1;
// 		}
// 	}
// 	printf("%d\n",cnt);
// 	return 0;
// }

// #include<stdio.h>
// #include<string.h>
// #include<math.h>
// int main()
// {
// 	int a=145;
// 	float b=463.82;
// 	char c[]="Hello";
// 	printf("\"%8.6d %2.5f %5.3s\"",a,b,c);
// 	return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// #include<stdio.h>
// #include<string.h>
// #include<math.h>
// int main()
// {
// 	// char *p="assignment";
// 	// char c;
// 	// c=*(p+3);
// 	// c+=9;
// 	// printf("%c %c",*(p+5),c);
// 	int x=2,y=3,z=4,r;
// 	r=x&y|z;
// 	r=x<<y>>2;
// 	cout<<r;

// 	return 0;
// }

// #include<stdio.h>
// void stat(void);

// int main()
// {
// 	int i;
// 	stat();
// 	for(int i=5;i>=1;i--)
// 		stat();
// 	return 0;
// }
// void stat(void)
// {
// 	static int x=0;
// 	if(x%2)
// 		printf("You did it\n");
// 	printf("x = %d\n",x);
// 	x++;
// }

// #include<stdio.h>
// typedef struct{
// 	int cust_no;
// 	char name[30];
// 	char address[100];
// 	char phone_no[20];
// } record;

// record readinput(int i)
// {
// 	record customer;
// 	customer.cust_no=i+1;
// 	printf("Customer no. %d\n",customer.cust_no);

// 	printf("Enter name: ");
// 	scanf("%s",customer.name);
// 	printf("Enter address: ");
// 	scanf("%s",customer.address);
// 	printf("Enter phone no: ");
// 	scanf("%s",customer.phone_no);
// 	return(customer);
// }

// void writeoutput(record customer)
// {
// 	printf("Customer no: %d\n",customer.cust_no);
// 	printf("Name: %s\n",customer.name);
// 	printf("Address: %s\n",customer.address);
// 	printf("Phone no: %s\n",customer.phone_no);
// 	return;
// }

// int main()
// {
// 	int i,n;
// 	record customer[100];
// 	scanf("%d",&n);
// 	for(int i=0;i<n;i++)
// 		customer[i]=readinput(i);
// 	for(int i=0;i<n;i++)
// 		writeoutput(customer[i]);
// 	return 0;
// }

// #include<stdio.h>
// int main()
// {
// 	int matrix[5][5];
// 	for(int i=1;i<=5;i++)
// 	{
// 		for(int j=1;j<=5;j++)
// 			scanf("%d",&matrix[i][j]);
// 	}
// 	return 0;
// }
#include <bits/stdc++.h>
using namespace std;

// #include<stdio.h>
// #include<string.h>
// int main()
// {
// 	int l,small_count=0,capital_count=0,number_count=0,blank_count=0;
// 	char s[100];
// 	gets(s);
// 	l=strlen(s);
// 	for(int i=0;i<l;i++)
// 	{
// 		if(s[i]>='a'&&s[i]<='z')
// 			small_count++;
// 		else if(s[i]>='A'&&s[i]<='Z')
// 			capital_count++;
// 		else if(s[i]>='0'&&s[i]<='9')
// 			number_count++;
// 		else if(s[i]==' ')
// 			blank_count++;
// 	}
// 	if(l>=8 && small_count && capital_count && number_count && blank_count==0)
// 		printf("Yes\n");
// 	else
// 		printf("No\n");
// 	return 0;
// }

// #include<stdio.h>
// int main()
// {
// 	FILE *exp;
// 	if((exp=fopen("sustcse.txt","r++"))==0)
// 		printf("Cannot read the file\n");
// 	else
// 	{
// 		fprintf(exp,"Enjoy the vacation\n");
// 		fputs("Enjoy the vacation\n",exp);
// 		fclose(exp);
// 	}
// 	return 0;
// }

// #include<stdio.h>
// int is_prime(int n)
// {
// 	bool a=1;
// 	for(int i=2;i*i<=n;i++)
// 	{
// 		if(n%i==0)
// 		{
// 			a=0;
// 			break;
// 		}
// 	}
// 	if(a)
// 		return 1;
// 	else
// 		return 0;
// }

// int main()
// {
// 	int t,n;
// 	bool yes=1;
// 	scanf("%d",&t);
// 	while(t--)
// 	{
// 		scanf("%d",&n);
// 		while(n>0)
// 		{
// 			if(is_prime(n)==0)
// 			{
// 				yes=0;
// 				break;
// 			}
// 			n/=10;
// 		}
// 		if(yes)
// 			printf("Yes\n");
// 		else
// 			printf("No\n");
// 	}
// 	return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int fact(int n)
// {
// 	if(n==1)
// 		return 1;
// 	else
// 		return n*fact(n-1);
// }
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	double x,sum=0,n,pow_x=1;
// 	cin>>x>>n;
// 	for(int i=1,j=1;i<=n;i++,j+=2)
// 	{
// 		pow_x*=x;
// 		if(i%2)
// 			sum+=(pow_x/fact(j));
// 		else
// 			sum-=(pow_x/fact(j));
// 	}
// 	cout<<sum<<endl;

// 	return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int fact(int n)
// {
// 	if(n==1)
// 		return 1;
// 	else
// 		return n*fact(n-1);
// }
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
// 	double x,sum=1,n,pow_x=1;
// 	cin>>x>>n;
// 	for(int i=1;i<=n;i++)
// 	{
// 		pow_x=1;
// 		for(int j=1;j<=2*i;j++)
// 			pow_x*=x;
// 		sum+=(pow_x/fact(i));
// 	}
// 	cout<<sum<<endl;
// 	return 0;
// }

