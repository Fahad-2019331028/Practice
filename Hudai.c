//#include<stdio.h>
//#include<string.h>
//#include<math.h>
//long long fact(long long n)
//{
//	if(n==1)
//		return 1;
//	else
//		return n*fact(n-1);
//}
//int main()
//{
//	long long coloumn,row,ans;
//	scanf("%ld %ld",&coloumn,&row);
//	ans=fact(coloumn+row)/(fact(coloumn)*fact(row));
//	printf("%ld",ans);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//#include<math.h>
//int main()
//{
//	char s="Assignment";
//	char *p;
//	p=&s;
//	char c;
//	c=++*p++;
//	printf("%c",c);
//	return 0;
//}
\
#include<stdio.h>
typedef struct{
	int cust_no;
	char name[30];
	char address[100];
	char phone_no[20];
} record;

record readinput(int i)
{
	record customer;
	customer.cust_no=i+1;
	printf("Customer no. %d\n",customer.cust_no);

	printf("Enter name: ");
	scanf("%s",customer.name);
	printf("Enter address: ");
	scanf("%s",customer.address);
	printf("Enter phone no: ");
	scanf("%s",customer.phone_no);
	return(customer);
}

void writeoutput(record customer)
{
	printf("Customer no: %d\n",customer.cust_no);
	printf("Name: %s\n",customer.name);
	printf("Address: %s\n",customer.address);
	printf("Phone no: %s\n",customer.phone_no);
	return;
}

int main()
{
	int i,n;
	record customer[100];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		customer[i]=readinput(i);
	for(int i=0;i<n;i++)
		writeoutput(customer[i]);
	return 0;
}


