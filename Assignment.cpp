Question Setter
---------------
Name:  **Fahad Bin Mahbub**         
Registration # **2019331028**            
Session: *2019-20*            
GitHub Username: *Fahad-2019331028*               
Cell: *01878422339*              
Email: *fahadbm3234@gmail.com*         

Question Set with Answers
=========================
<div style="text-align:center"> 
  <style> 
    #marking { 
        display: flex;
        margin: 0;
        padding: 0;
}
    .alignleft {
        flex: 1;
        text-align: left;
    }
    .aligncenter {
        flex: 1;
        text-align: center;
    }
    .alignright {
        flex: 1;
        text-align: right;
    }
    hr.divider {
     margin: 0em;
     border-width: 2px;
     background-color: black;
    }

    p {
     margin: 0;
     padding: 0;
    }
  </style>
  <span style="font-size:1.3em">Shahjalal University of Science and Technology
  </span><br>
  <span style="font-size:1.2em">Department of Computer Science and Engineering
  </span><br>
  <span> 1<sup>st</sup> Year 1<sup>st</sup> Semester Final Examination &mdash;
  June 2020 (Session 2019-20) </span><br>
  <span> Course No. &mdash; <b> CSE 133</b> </span><br>
  <span> Course Title &mdash; <b> Structured Programming Language</b> </span>
  <span id="marking">
    <span class="alignleft">Time &mdash; <b> 3 Hours</b></span>
    <span class="aligncenter">Credit: <b> 3.00</b></span>
    <span class="alignright">Total Marks # <b> 100</b></span>
  </span>
  <hr class="divider">
  <span style="margin-bottom: 1.2em"> (Answer All the Questions)</span><br>
</div>
<div style="text-align:center">
  <span style="font-size:1.2em"><b>Group A</b>
  </span>
  <span id="marking">
    <span class="alignleft">1. Answer the following Questions in short. (Any <b>Five</b>).</span>
    <span class="alignright">5 &times; 2 = 10 </span>
  </span>
</div>

(a) What is the desired output of the following code?
```c
#include<stdio.h>
int main()
{
	struct result{
		int roll_no;
		char name[100];
		float marks;
		float point;
	};
	printf("%d\n",sizeof(struct result));
	return 0;
}
```
**Answer:** 112

</br>
(b)What are the differences between getchar() and getche()?</br>
**Answer:** getchar() returns a single character typed on the keyboard. This function waits for a key to be pressed. Then it echoes the keystroke to the screen and returns the value of the key to the caller.
getche() returns its value immediately after a key is pressed and it does not line buffer input.

</br>
(c) Is the following segment is valid? What will be the output if so?
```c
int a=4,b=7,c;
c=a+++b;
printf(“%d %d %d”,a,b,c);
```
**Answer:** Yes. The code segment is valid. The output is 5 7 11
</br>     
(d)Match the following:</br>
```c
A.for	         1.preferred when we want to execute a set of statements at least once      	
B.while		   2. preferred when we want to execute any one statement out of a set of statement
C.do-while	    3. preferred when we want to execute a set of statements n times
D.switch	      4. preferred when we are not sure how many times a set of statements will be exexuted
```
**Answer:** A-3, B-4,C-1,D-2

</br>
       
(e) Find the output of a,b and c if the input is “1234 56789”
int a,b,c;
scanf("%2d %4d %3d",&a,&b,&c);

**Answer:** 12 34 567
      
</br>
(f) What does scanf(“%[^\n]”) means? What will be the output of scanf(“%[^abc]”,&c) if the input is **helalobc** </br>
**Answer:** It means the scanf function will read the string until a new line arrives. The output will be **hel**

</br>
(g) What is the typedef declaration?

**Answer:**
The typedef feature allows users to define new data-types that are equivalent to existing data types. Once a user-defined data type has been established, then new variables, arrays, structures, etc. can be declared in terms of this new data type.
In general terms, a new data type is defined as

**typedef type new- type;**

_Example:_
**typedef int age;**
In this declaration **age** is a user-defined data type, which is equivalent to type **int** . Hence, the variable declaration
**age male, female;**
is equivalent to writing
**int male, female;**
    
</br>
(h) What are the similarities between register variables and automatic variables?
**Answer:**
The register and automatic storage classes are closely related. In particular, their visibility is the same. Thus, register variables, like automatic variables, are local to the function in which
they are declared. Furthermore, the rules governing the use of register variables are the same as those for automatic variables.The register storage class can be assigned only to variables that would otherwise have the storage class automatic. If a register declaration is not honored, the variables will be treated as having the storage class automatic.


</br>
</br>
    
<div>
  <span id="marking">
    <span class="alignleft">2. Answer the following Questions. (Any <b>Four</b>).</span>
    <span class="alignright">4 &times; 5 = 20 </span>
  </span>
</div>

(a) Find the output of the following code:
```c
#include<stdio.h>
int main()
{
  int a=10,b=5;
  a=b++ + ++b;
  a+=(a+b++)+ (++b+a);
  printf(“%d”,++a);
  printf(“%d”,b++);
  return 0;
}
```
**Answer:** 53 9   
</br>
(b)  Write a c program to take a sentence as input and output the string with the first letter of the line as a capital and the rest as small letters. 

**Answer:**
```c
#include<stdio.h>
#include<string.h>
int main()
{
	char s[1000];
	int l;
	gets(s);
	l=strlen(s);
	for(int i=0;i<l;i++)
	{
		if((s[i]>='a'&&s[i]<='z'))
		{
			if(i==0)
				printf("%c",s[i]-32);
			else
				printf("%c",s[i]);
		}
		else if((s[i]>='A'&&s[i]<='Z'))
		{
			if(i==0)
				printf("%c",s[i]);
			else
				printf("%c",s[i]+32);
		}
		else
			printf("%c",s[i]);
	}
	return 0;
}
```
     
</br>
(c)    Write down a program to show the following pattern of n lines and take n as input. 
```c
      *
     ***
    * * *
   *  *  *
  *   *   *
 *    *    *
*************
```
**Answer:**
```c
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		if(i==n)
		{
			for(int j=1;j<=2*n-1;j++)
				printf("*");
			break;
		}
		for(int j=1;j<=n-i;j++)
			printf(" ");
		if(i>1)
		{
			printf("*");
			for(int j=1;j<=2*(i-1)-1;j++)
			{
				if(j==i-1)
					printf("*");
				else
					printf(" ");
			}
		}
		printf("*\n");	
	}
	return 0;
}
```

</br>
(d)What is the fscanf() and fprintf() function? Give example.

**Answer:**
```c
fscanf()
Declaration: int fscanf(FILE *fp, const char *format, …)
fscanf() function is used to read formatted data from a file. In a C program, we use fscanf() as below.
fscanf(fp,“%d”,&age);
Where,fp is file pointer to the data type “FILE”.
Age–Integer	variable
Any specifiers  can be used with any data type as we use in normal scanf() function.

fprintf()
Declaration: int fprintf(FILE *fp, const char *format, …)
fprintf() function is used to write formatted data into a file. In a C program, we use fprinf() as below.
fprintf (fp, “%s %d”, “var1”, var2);
Where, fp is file pointer to the data type “FILE”.
var1 – string variable
var2 – Integer variable
Any specifiers  can be used with any data type as we use in normal printf() function.
#include <stdio.h>
 
int main ()
{
   char name [20];
   int age, length;
   FILE *fp;
   fp = fopen ("test.txt","w");
   fprintf (fp, "%s %d", “Fresh2refresh”, 5);
   fscanf (fp, "%d", &age);
   fscanf (fp, "%s", name);
   fclose (fp);
   printf ("Name: %s \n Age: %d \n",name,age);
   printf ("Total number of characters in file is %d", length);
   return 0;
}
```  

(e) What is the desired output for the desired code:
```c
#include <stdio.h>
int main()
{
    int *p,**q,a=100;
	p=&a;
	q=&p;
	*p=6;
	**q=(*p)*105;
	printf(“%d”,a);
	return 0;
}
```
Answer: 630

</br>
(f)Wride down some differences between Procedural vs Non- Procedural programming language.
**Answer:**

Procedural and nonprocedural languages are the computations models for specifying most programming today. The major difference between these computational models is that the procedural language is command-driven whereas non-procedural language is function oriented.
Furthermore, procedural programming languages perform computation as a sequence of statements that manipulate stored data until the desired result is achieved. In contrast, the nonprocedural language represents programs as relationships between mathematical expressions which are based on dependencies.
I case of semantics, procedural language is quite complex, whereas non-procedural language is simple.
Procedural language works through state of the machine and non-procedural language works through mathematical functions;



</br>
</br>
<div>
  <span id="marking">
    <span class="alignleft">3. Answer the following Questions. (Any <b>Two</b>).</span>
    <span class="alignright">2 &times; 10 = 20 </span>
  </span>
</div>

(a) Write a c program to print the sum of the following series
1+3\*5^2+6\*8^2+9\*11^2+…..+30\*32^2 
**Answer:**
```c
#include<stdio.h>
int main()
{
	long long int sum=1;
	for(int i=3;i<=30;i+=3)
	{
		sum+=(i*(i+2)*(i+2));
	}
	printf("%d\n",sum);
	return 0;
}
    ```  
(b) Suppose, a number is a super prime number if you delete the last digit of the number once at a time  and the number is still a prime  number. 
**Input:** You will take t<100 test cases. Each test case contains an integer n.
**Output:** For every test case print if the number n is a super prime.
**Sample input:**
2
7331
4550
**Sample Output:**
Yes
No

_Hint: 7331 is a super prime because 7331,733,73 and 7 are prime numbers._

**Answer:**
```c
#include<stdio.h>
int is_prime(int n)
{
	bool a=1;
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			a=0;
			break;
		}
	}
	if(a)
		return 1;
	else
		return 0;
}

int main()
{
	int t,n;
	bool yes=1;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		while(n>0)
		{
			if(is_prime(n)==0)
			{
				yes=0;
				break;
			}
			n/=10;
		}
		if(yes)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}
```

</br>
(c) Make a calculator to operate the basic calculations(+,-,\*,/) writing a c program
**Answer:**
```c
#include<stdio.h>
int main()
{
	int a,b;
	char c;
	scanf("%d %c %d",&a,&c,&b);
	if(c=='+')
		printf("%d\n",a+b);
	else if(c=='-')
		printf("%d\n",a-b);
	else if(c=='*')
		printf("%d\n",a*b);
	else if(c=='/')
		printf("%d\n",a/b);
	return 0;
}
```       

<div style="text-align:center">
  <span style="font-size:1.2em"><b>Group B</b>
  </span>
  <span id="marking">
    <span class="alignleft">1. Answer the following Questions in short. (Any <b>Five</b>).</span>
    <span class="alignright">5 &times; 2 = 10 </span>
  </span>
</div>

(a) Match the following:
```c
A. Compiler		   1. Final memory allocation
B. Interpreter		2. Accept multiple object files as input
C. Linker		     3. Translates program one statement at a time
D. Loader		     4. Generates relocatable machine code
```
**Answer:** A-4,B-3,C-2,D-1
      
(b) What is the output of the following code?
```c
#include<stdio.h>
int main()
{
	int a=145;
	float b=463.82;
	char c[]="Hello";
	printf("\"%8.6d %2.5f %5.3s\"",a,b,c);
	return 0;
}
Answer: “  000145 463.82001   Hel”
```      
(c) Find the ouput of the following code.
```c
#include<stdio.h>
int main()
{
	char *p="assignment";
	char c;
	c=*(p+3);
	c+=9;
	printf("%c %c",*(p+5),c);
	return 0;
}
```
**Answer:** n r

</br>
(d) Write down the differences between call by value and call by reference of a function.

**Answer:**
1.In call by value method, the value of the actual parameters is copied into the formal parameters. In other words, we can say that the value of the variable is used in the function call in the call by value method.
In call by reference, the address of the variable is passed into the function call as the actual parameter.

2.In call by value method, we can not modify the value of the actual parameter by the formal parameter.
Whereas in call by reference, the value of the actual parameters can be modified by changing the formal parameters since the address of the actual parameters is passed.
</br>     
(e) Consider the following declaration int p[2][3][2]={1,2,3,4,5,6,7,8,9,10,11,12};
What will be the value of *(*(*p+1)+2))?

**Answer:** 5

</br>
(f)  What are the differences between structure and union?

**Answer:**
Within a structure all members gets memory allocated and members have addresses that increase as the declarators are read left-to-right. That is, the members of a structure all begin at different offsets from the base of the structure. The offset of a particular member corresponds to the order of its declaration; the first member is at offset 0. The total size of a structure is the sum of the size of all the members or more because of appropriate alignment.
For a union compiler allocates the memory for the largest of all members and in a union all members have offset zero from the base, the container is big enough to hold the WIDEST member, and the alignment is appropriate for all of the types in the union.
When the storage space allocated to the union contains a smaller member, the extra space between the end of the smaller member and the end of the allocated memory remains unaltered.

</br>
(g) Write a c program to input and store a 5x5 integer matrix from console.

**Answer:**
```c
#include<stdio.h>
int main()
{
	int matrix[5][5];
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=5;j++)
			scanf("%d",&matrix[i][j]);
	}
	return 0;
}
```

</br>
(h)   What will be the value of r:
int x=2,y=3,z=4,r;
(i)r = x&y|z; 	
(ii)r = x<< y >>2;

Answer: (i) 6 (ii) 4


</br>
     

<div>
  <span id="marking">
    <span class="alignleft">2. Answer the following Questions. (Any <b>Four</b>).</span>
    <span class="alignright">4 &times; 5 = 20 </span>
  </span>
</div>

(a) Write a c program to find the number of distinct numbers in an array.
**Answer:**
```c
#include<stdio.h>
int count[1000005],array[1000005];

int main()
{
	int n,cnt=0;
	scanf("%d",&n);
	for(int i=0;i<1000005;i++)
		count[i]=0;
	for(int i=0;i<n;i++)
		scanf("%d",&array[i]);
	for(int i=0;i<n;i++)
	{
		if(count[array[i]]==0)
		{
			cnt++;
			count[array[i]]=1;
		}
	}
	printf("%d\n",cnt);
	return 0;
}
```     
(b) Why do we need dynamic memory allocation? Explain malloc() and calloc().

**Answer:**

**Dynamic memory** allocation is the process of assigning the memory space during the execution time or the run time.
Because, even though it isn’t blatantly visible, not being able to allocate memory during run time precludes flexibility and compromises with space efficiency. Specially, those cases where the input isn’t known beforehand, we suffer in terms of inefficient storage use and lack or excess of slots to enter data. As we have been going through it all, we can tell that it allocates the memory during the run time which enables us to use as much storage as we want, without worrying about any wastage.

**malloc():**
**prototype-** void\* malloc(size_t size);
**parameters-** 
size: An unsigned integral value which represents the memory block in bytes.
**return value-** a pointer to the uninitialized memory block allocated by the function and null pointer if allocation fails.

**calloc():**
**prototype-** void\* calloc(size_t num,size_t size);
**parameter-** 
num: An unsigned integral value which represents number of elements
size: Ans unsigned integral value which represents the memory block in byte
**return type-** a pointer to the start of the memory block allocated by the function and null pointer if allocation fails.
  
</br>
(c) Whar will be the output of the following code? 
```c
 #include<stdio.h>
void stat(void);

int main()
{
	int i;
	stat();
	for(int i=5;i>=1;i--)
		stat();
	return 0;
}
void stat(void)
{
	static int x=0;
	if(x%2)
		printf("You did it\n");
	printf("x = %d\n",x);
	x++;
}
Answer:
x = 0
You did it
x = 1
x = 2
You did it
x = 3
x = 4
You did it
x = 5
```    

</br>
(d) Write a c program to input and store a 5x5 integer matrix from console.
**Answer:**
```c
#include<stdio.h>
int main()
{
	int matrix[5][5];
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=5;j++)
			scanf("%d",&matrix[i][j]);
	}
	return 0;
}
```

(e) Explain “array of structures” and “structure within a structure” with examples.
**Answer:**
```c
An array of structures is simply an array in which each element is a structure of the same type. The referencing and subscripting of these arrays (also called structure arrays) follow the same rules as simple arrays.

typedef struct{
	int roll;
	char student_name[50];
	int marks;
	int points;
}result[100];

Here result is an array of structure which can contain 100 information with roll, student name, marks and points, Each of the index of result contains the whole structure.

A structure variable may be defined as a member of another structure. In such situations, the declaration
of the embedded structure must appear before the declaration of the outer structure.

typedef struct{
	int month;
	int date;
	int year;
} date;

typedef struct{
	int roll;
	char name[100];
	struct date;
} attendance[100];

Here the structure date is defined as a member of structure attendance.
```

</br>
(f)  Write a C code which  will open a file named “sustcse.txt” in D drive for read and will notify the user if it is not available for read.
**Answer:**
```c
#include<stdio.h>
int main()
{
	FILE *exp;
	if((exp=fopen("sustcse.txt","r++"))==0)
		printf("Cannot read the file\n");
	else
	{
		fprintf(exp,"Enjoy the vacation\n");
		fputs("Enjoy the vacation\n",exp);
		fclose(exp);
	}
	return 0;
}
``` 
 


</br>
<div>
  <span id="marking">
    <span class="alignleft">3. Answer the following Questions. (Any <b>Two</b>).</span>
    <span class="alignright">2 &times; 10 = 20 </span>
  </span>
</div>

(a) Suppose you have a friend. You and your friend lives in two corner of a grid. You are invited to your friends house.You can go up and right in the grid. But you cannot go down or left. 
You are given the coloum number a and row number b of the grid. Calculate the path number you can go to your friends house.
Input: There are t test cases.Every test case contains a single line containing a and b (a.b<20)
Output: Print the number of path you can use to go to your friends house. 
Sample input: 
1
7 8
Sample output: 6435
**Answer:**
```c
#include<stdio.h>
long long fact(long long n)
{
	if(n==1)
		return 1;
	else
		return n*fact(n-1);
}
int main()
{
	int t;
    scanf(“%d”,&t);
    while(t--)
{
		long long coloumn,row,ans;
		scanf("%lld %lld",&coloumn,&row);
		ans=fact(coloumn+row)/(fact(coloumn)*fact(row));
		printf("%lld",ans);
}
return 0;
}
```
Hint: The answer will be the permutation of couloumn and row. Suppose if coloumn is 7 and row is 5 then I can go **right** 5 times and **up** 7 times. RRRRRUUUUUUU.
If we permute this we will find the possible ways to go to my friends house.

</br>
(b) Create a structure ‘customer’ with fields like CustNo, Name,Address and Phone no.Take an array of structure variable and input the values for members and display it in proper format.
**Answer:**
```c
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

(c) Take a string as input and determine whether the input is a valid password or not. A password is valid if it satisfies the following condition-
-A password must contain at least 8 characters
-It must contain at least one small letter , at least one capital letter and at least one digit.
-It does not contain any blank space
Answer:
#include<stdio.h>
#include<string.h>
int main()
{
	int l,small_count=0,capital_count=0,number_count=0,blank_count=0;
	char s[100];
	gets(s);
	l=strlen(s);
	for(int i=0;i<l;i++)
	{
		if(s[i]>='a'&&s[i]<='z')
			small_count++;
		else if(s[i]>='A'&&s[i]<='Z')
			capital_count++;
		else if(s[i]>='0'&&s[i]<='9')
			number_count++;
		else if(s[i]==' ')
			blank_count++;
	}
	if(l>=8 && small_count && capital_count && number_count && blank_count==0)
		printf("Valid\n");
	else
		printf("Invalid\n");
	return 0;
}
       
```

<div style="text-align:center">
  <span style="font-size:1.0em">- End -</span>
</div>

- [x] I am declaring that, the above work is my own work. Whatever added above
except the template is the result of my brainstorming. I also understand that
submitting work that isn’t my own may result in permanent failure of this course
as well as the whole current semester.
