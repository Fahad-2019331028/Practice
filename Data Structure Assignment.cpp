Question Setter
---------------
Name:  **Fahad Bin Mahbub**         
Registration #**2019331028**            
Session: *2019-20*            
GitHub Username: *Fahad-2019331028*               
Cell: *01878422339*              
Email: *fahadbm3234@gmail.com*         

Question Set with Answers
=========================
<div align="center"><img src="sust-logo.png" alt="sust-logo" width="100px"></div>
<div style="text-align:center">
  <div align="center">Shahjalal University of Science and Technology
  </div>   
  <div align = "center">Department of Computer Science and Engineering
  </div>  
  <div align = "center"><span> 1<sup>st</sup> Year 2<sup>nd</sup> Semester Final Examination &mdash;
  December 2020 (Session 2019-20) </span></div>  
  <br>
  <div align = "center"> Course No. &mdash; <b> CSE 137</b> </div>  
  <div align="center"> Course Title &mdash; <b> Data Structures</b> </div>
  <br>
  <div align = "center">
    Time &mdash; <b> 3 Hours</b>&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;Credit:<b> 3.00</b>&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;Total Marks # <b> 100</b>
    </div><br>
    <div align = "center">(Answer all the questions)</div></div>
<div align="center"><h4>Group A</h4></div>
<div style="text-align:left">1. Answer the following Questions in short. (Any <b>Five</b>).</div>
<div align="right">5 &times; 2 = 10 </div>


(a)	What do you mean by overflow and underflow?

**Answer:** 
When new data is to be inserted into the data structure but there is no available space , that situation is called overflow.

When we want to delete data from a data structure that is empty , that situation is called underflow.
   
(b) Write some differences between local variable and global variable.

**Answer:** 

1.Local variable is declared inside a function whereas Global variable is declared outside the function.

2.Local variables are created when the function has started execution and is lost when the function terminates, on the other hand, Global variable is created as execution starts and is lost when the program ends.

3.Local variable doesn’t provide data sharing whereas Global variable provides data sharing.
     
(c) Define path leaf and depth of a tree.

**Answer:**

**Leaf-** In a tree data structure, the node which does not have a child is called as LEAF Node. In simple words, a leaf is a node with no child.

**Path-** In a tree data structure, the sequence of Nodes and Edges from one node to another node is called as PATH between that two Nodes.

**Depth-** In a tree data structure, the total number of egdes from root node to a particular node is called as DEPTH of that Node.
      
(d) 
```c
struct rectangle 
{
	int number[50]; 
	int length;
	int breadth;
}
int main()
{
	struct rectangle r;
	int *p=&r;
}
```
What is the size of the pointer p?

**Answer:** The size of any pointer is 2. So the answer is 2.
        
(e) What are the differences between heap and Binary Search Tree(BST)? When to use heap and when to use BST?

**Answer:** 
The main difference is that Binary Search Tree doesn’t allow duplicates, however, the Heap does. The BST is ordered, but the Heap is not. So, if order matters, then it is better to use BST. If an order is not relevant, but we need to be sure that insert and remove will take   time, then the Heap guarantees to achieve this time. In a Binary Search Tree, this may take up to   time, if the tree is completely unbalanced (chain is the worst case). Also, Heap can be built in linear time, however, the BST needs   to be created.

(f) Why does a good hash function important?

**Answer:**
A good hash function satisfies two basic properties: 

1) It should be very fast to compute.

2) It should minimize duplication of output values (collisions). 

Hash functions rely on generating favorable probability distributions for their effectiveness, reducing access time to nearly constant.
     
(g) What is garbage collection?

**Answer:** Garbage Collection is process of reclaiming the runtime unused memory automatically. In other words, it is a way to destroy the unused objects.
    
(h) What are the differences between field and record?

**Answer:**

**Field-** It is defined as a unit of meaningful information about an entity like date of flight, name of passenger, address etc. 

**Record–** It is a collection of units of information about a particular entity. Passenger of an airplane, an employee of an organization, or an article sold from a store.


<div>
  <span id="marking">
    <span class="alignleft">2. Answer the following Questions. (Any <b>Four</b>).</span>
    <span class="alignright">4 &times; 5 = 20 </span>
  </span>
</div>

(a) Write an algorithm to reverse a linked list.

**Answer:** 

**Step1:** Define three nodes one with the reference to the head node, and other two nodes as NULL.

**Step2:** Now run a loop which will be used to traverse the linked list once until the next node does not become NULL.

**Step3:** Now inside the loop, the first NULL node is defined as the next node to the head node.

**Step4:** Secondly, the next node of the head node is defined as the second NULL node.

**Step5:** Now, the second NULL node in step 4 is again redefined as the node which holds the reference to the head node in step 1.

**Step6:** And finally, the node holding the reference to the head node in step 1 is made to hold the reference to the next node in the linked list and hence, the pointer now points to its previous node.
         
(b) 
```c
void tree(int n)
{
	if(n>0)
	{
		cout<<n<<" ";
		tree(n-1);
		tree(n-1);
	}
}
int main()
{
	int a;
	cin>>a;
	tree(a);
	return 0;
}
```
**Answer:** 3 2 1 1 2 1 1
       
(c) Suppose A is a three dimensional array declared in C language. The location of A[0][0][0] is 100 and the declaration is A[5][6][7].
Where is the location of A[1][2][3] if the column major representation is used?

**Answer:**

A[5][6][7]= 100+[{(7*6*5)+(6*5)+5}*2]

	   =100+{(210+30+5)*2} 
	   =100+490
	   =590
       
(d) Write down the shortest path algorithm for graph.

**Answer:**

The shortest path algorithm for graph is Called Dijkstra’s algorithm.

Let the node at which we are starting be called the initial node. Let the distance of node Y be the distance from the initial node to Y. Dijkstra's algorithm will assign some initial distance values and will try to improve them step by step.

1.	Mark all nodes unvisited. Create a set of all the unvisited nodes called the unvisited set.

2.	Assign to every node a tentative distance value: set it to zero for our initial node and to infinity for all other nodes. Set the initial node as current.

3.	For the current node, consider all of its unvisited neighbours and calculate their tentative distances through the current node. Compare the newly calculated tentative distance to the current assigned value and assign the smaller one. For example, if the current node A is marked with a distance of 6, and the edge connecting it with a neighbour B has length 2, then the distance to B through A will be 6 + 2 = 8. If B was previously marked with a distance greater than 8 then change it to 8. Otherwise, the current value will be kept.

4.	When we are done considering all of the unvisited neighbours of the current node, mark the current node as visited and remove it from the unvisited set. A visited node will never be checked again.

5.	If the destination node has been marked visited (when planning a route between two specific nodes) or if the smallest tentative distance among the nodes in the unvisited set is infinity (when planning a complete traversal; occurs when there is no connection between the initial node and remaining unvisited nodes), then stop. The algorithm has finished.

6.	Otherwise, select the unvisited node that is marked with the smallest tentative distance, set it as the new "current node", and go back to step 3.

(e)Why do we need postfix and prefix notation over infix notation? Translate the infix notation A*(B+D)/E-F*(G+H/K) to its equivalent postfix notation using stack.

**Answer:**

Infix and postfix are different ways to write mathematical operations. In infix notation we write the first operand, then we write the operator and then we write the second operator. For example x + y, x * y etc. In postfix notation, we write the first operand, followed by the second operand and then we write the operator. For example xy+, xy*.  There are two advantages of using a postfix notation over an infix notation. These are-

1.	Postfix notation does not require parentheses, precedence rules and associative rules.

2.	We can evaluate the value of the expression in one traversal only.

The postfix notation of that infix notation is **ABD+*E/FGHK/+ *-** 

(f)Use merge sort to find the largest integer on 38,27,43,3,9,82,10,16. Show your work step by step.

**Answer:**
```c
1.	Devide the array into 2 sub-array {38,27,43,3} | {9,82,10,16}
2.	Devide the sub arrays again in 2 sub list {38,27}|{43,3} || {9,82}|{10,16}
3.	Now sort them in them  {27,38}|{3,43} || {9,82}|{,10,16}
4.	Merge them into sub arrays {3,27,38,43} |{9,10,16,82}
5.	Make the final merge {3,9,10,16,27,28,43,82}
So 82 is the last member of the array . Hence 82 is the largest number.
```



<div>
  <span id="marking">
    <span class="alignleft">3. Answer the following Questions. (Any <b>Two</b>).</span>
    <span class="alignright">2 &times; 10 = 20 </span>
  </span>
</div>

(a) Sort the items using Quick Sort algorithm: 44,33,22,55,77,44,40,90 and 60.

**Answer:**
Quick Sort is one of the different Sorting Technique which is based on the concept of Divide and Conquer, just like merge sort. But in quick sort all the heavy lifting(major work) is done while dividing the array into subarrays, while in case of merge sort, all the real work happens during merging the subarrays. In case of quick sort, the combine step does absolutely nothing.

It is also called partition-exchange sort. This algorithm divides the list into three main parts:

1.Elements less than the Pivot element

2.Pivot element(Central element)

3.Elements greater than the pivot element

**Steps to follow-**

1.	After selecting an element as pivot, which is the last index of the array in our case, we divide the array for the first time.

    In this array {44,33,22,55,77,44,40,90,60} let's select 60 as a pivot
2.	In quick sort, we call this partitioning. It is not simple breaking down of array into 2 subarrays, but in case of partitioning, the array elements are so positioned that all the elements smaller than the pivot will be on the left side of the pivot and all the elements greater than the pivot will be on the right side of it.
3.	And the pivot element will be at its final sorted position.

    44 33 22 55 44 40 **60** 77 90
4.	The elements to the left and right, may not be sorted.
5.	Then we pick subarrays, elements on the left of pivot and elements on the right of pivot, and we perform partitioning on them by choosing a pivot in the subarrays.

Take 40 as pivot.

33 22 **40** 44 50 44 60 77 90

Take 33 as pivot.

22 **33** 40 44 50 44 60 77 90

Take 44 as pivot.

22 33 40 **44** 50 44 60 77 99

And that’s our sorted array with Quick sort algorithm.
     
(b) Define and discuss the criteria of Recursion. Solve the ”Tower of Hanoi” problem recursively. Discuss advantages and disadvantages of recursion.

**Answer:**
A recursive function can go infinite like a loop. To avoid infinite running of recursive function, there are two properties that a recursive function must have −

**Base criteria−** There must be at least one base criteria or condition, such that, when this condition is met the function stops calling itself recursively.

**Progressive approach−** The recursive calls should progress in such a way that each time a recursive call is made it comes closer to the base criteria.

```c
void TOH(int n ,char source ,char auxiliary ,char destination)
{
	if(n==1)
	{
	cout<<"Move Disk "<<n<<" from "<<source<<" to "<<destination<<endl;
	return;
	}
	
	TOH(n-1,source,destination,auxiliary);
	cout<<"Move Disk "<<n<<" from "<<source<<" to "<<destination<<endl;
	TOH(n-1,auxiliary,source,destination);
}
```
**Advantages:**

•Reduce unnecessary calling of function.

•Through Recursion one can Solve problems in easy way while its iterative solution is very big and complex.

**Disdvantages:**

•Recursive solution is always logical and it is very difficult to trace.(debug and understand).

•In recursive we must have an if statement somewhere to force the function to return without the recursive call being executed, otherwise the function will never return.

•	Recursion takes a lot of stack space, usually not considerable when the program is small and running on a PC.

•	Recursion uses more processor time
       
(c)Define hashing and hash function. Discuss  five hash function techniques.

**Answer:**

Hashing is a technique or process of mapping keys, values into the hash table by using a hash function. It is done for faster access to elements. The efficiency of mapping depends on the efficiency of the hash function used.

A hash function converts strings of different length into fixed-length strings known as hash values or digests. You can use hashing to scramble passwords into strings of authorized characters for example. The output values cannot be inverted to produce the original input.

**Checksum:** A checksum is a small-sized block of data derived from another block of digital data for the purpose of detecting errors that may have been introduced during its transmission or storage. By themselves, checksums are often used to verify data integrity but are not relied upon to verify data authenticity.
The procedure which generates this checksum is called a checksum function or checksum algorithm.

**Rabin fingerprint:** The Rabin fingerprinting scheme is a method for implementing fingerprints using polynomials over a finite field. Given an n-bit message m0,...,mn-1, we view it as a polynomial of degree n-1 over the finite field GF(2).
Many implementations of the Rabin–Karp algorithm internally use Rabin fingerprints.
The Low Bandwidth Network Filesystem (LBFS) from MIT uses Rabin fingerprints to implement variable size shift-resistant blocks. The basic idea is that the filesystem computes the cryptographic hash of each block in a file. To save on transfers between the client and server, they compare their checksums and only transfer blocks whose checksums differ.

**Pearson hashing:** Pearson hashing is a hash function designed for fast execution on processors with 8-bit registers. Given an input consisting of any number of bytes, it produces as output a single byte that is strongly dependent on every byte of the input. Its implementation requires only a few instructions, plus a 256-byte lookup table containing a permutation of the values 0 through 255.

**Jenkins hash function:** The Jenkins hash functions are a collection of (non-cryptographic) hash functions for multi-byte keys designed by Bob Jenkins. It was originally created to fulfill certain requirements described by Colin Plumb, a cryptographer, but was ultimately not put to use.

**Tabulation hashing:** In computer science, tabulation hashing is a method for constructing universal families of hash functions by combining table lookup with exclusive or operations. It was first studied in the form of Zobrist hashing for computer games; later work by Carter and Wegman extended this method to arbitrary fixed-length keys. Generalizations of tabulation hashing have also been developed that can handle variable-length keys such as text strings.
       

<div align="center"><h4>Group B</h4></div>
<div align="left">1. Answer the following Questions in short. (Any <b>Five</b>).</div>
<div align="right">5 &times; 2 = 10 </div>


(a)Discuss how stack can be used for checking balancing of symbols?

**Answer:**
```c
1.Create a stack.
2.while ( end of input is not reached ) {
    >If the character read is not a symbol to be balanced, ignore it.
    >If the character is an opening delimiter like ( , {  or [ , PUSH it into the stack.
    >If it is a closing symbol like ) , } , ] , then if the stack is empty report an error, otherwise POP the stack.
    >If the symbol POP-ed is not the corresponding delimiter, report an error.
3.At the end of the input, if the stack is not empty report an error.
```
        
(b)What is an articulation point? How can you find articulation point of a directed graph?
    
**Answer:**
    
Articulation points represent vulnerabilities in a connected network – single points whose failure would split the network into 2 or more components.
    
In order to find all the articulation points in a given graph, the brute force approach is to check for every vertex if it is an articulation point or not, by removing it and then counting the number of connected components in the graph.
        
(c)What do you mean by Heap and Heap Property?
    
**Answer:**
    
A heap is a tree with some special properties. The basic requirement of a heap is that the value of a node must be ≥ (or ≤) than the values of its children. This is called heap property. A heap also has the additional property that all leaves should be at h or h — 1 levels (where h is the height of the tree) for some h > 0 (complete binary trees). That means heap should form a complete binary tree .
      
(d)What is the output of the following code snippet?
```c
string str ("He managed to submit the assignment in 10 days somehow");
string str2 ("assignment");
unsigned found = str.find(str2);
if(found!=string :: npos)
	cout <<found<<endl;
```

**Answer:** 25
         
(e)Define floor and ceiling function.

**Answer:**

**Floor Function:** the greatest integer that is less than or equal to x.
The floor of 3.56 is 3

**Ceiling Function:** the least integer that is greater than or equal to x
The ceiling of 3.56 is 4
        
(f) Write down the algorithm to delete an edge from a Graph G.

**Answer:**
```c
1.Start with graph G, which contains a list of edges E.
2.Go through E in decreasing order of edge weights.
3.For each edge, check if deleting the edge will further disconnect the graph.
4.Perform any deletion that does not lead to additional disconnection.
``` 

(g)What is polish notation?

**Answer:**
Polish notation is a notation form for expressing arithmetic, logic and algebraic equations. Its most basic distinguishing feature is that operators are placed on the left of their operands. If the operator has a defined fixed number of operands, the syntax does not require brackets or parenthesis to lessen ambiguity.
   
(h)What is the most important advantage of B+ tree compared to B tree?

**Answer:**
The principal advantage of B+ trees over B trees is they allow you to pack in more pointers to other nodes by removing pointers to data, thus increasing the fanout and potentially decreasing the depth of the tree.
      

<div>
  <span id="marking">
    <span class="alignleft">2. Answer the following Questions. (Any <b>Four</b>).</span>
    <span class="alignright">4 &times; 5 = 20 </span>
  </span>
</div>

(a)What is the output of the following code snippet?
```c
int fun(int n)
{
	static int x=0;
	if(n>0)
	{
		x++;
		return fun(n-1)+x;
	}
	return 0;
}
int main()
{
	int a=5;
	cout<<fun(a)<<endl;
	return 0;
}
```
**Answer:** 25
          
(b) Suppose A is a three dimensional array declared in C language. The location of A[0][0][0] is 200 and the declaration is A[5][6][7].
Where is the location of A[1][2][3] if the row major representation is used?

**Answer:**
```c
A[1][2][3]= 200+[{(1*6*7)+(2*7)+3}*2]
	   =200+{(42+14+3)*2}
	   =200+118
	   =318
```       
(c)What is the limitation of binary search algorithm? Distinguish between linear search and binary search.

**Answer:**
```c
The only limitation is that the array or list of elements must be sorted for the binary search algorithm to work on it.
Key Differences Between Linear Search and Binary Search
1.	Linear search is iterative in nature and uses sequential approach. On the other hand, Binary search implements divide and conquer approach.
2.	The time complexity of linear search is O(N) while binary search has O(log2N).
3.	The best case time in linear search is for the first element i.e., O(1). As against, in binary search, it is for the middle element, i.e., O(1).
4.	In the linear search, worst case for searching an element is N number of comparison. In contrast, it is log2N number of comparison for binary search.
5.	Linear search can be implemented in an array as well as in linked list whereas binary search can not be implemented directly on linked list.
6.	As we know Binary search requires the sorted array that is reason It requires processing to insert at its proper place to maintain a sorted list. On the contrary linear search does not require sorted elements, so elements are easily inserted at the end of the list.
7.	Linear search is easy to use, and there is no need for any ordered elements. On the other hand, Binary search algorithm is however tricky, and elements are necessarily arranged in order.
Both linear and binary search algorithms can be useful depending on the application. When an array is the data structure and elements are arranged in sorted order, then binary search is preferred for quick searching. If linked list is the data structure regardless how the elements are arranged, linear search is adopted due to unavailability of direct implementation of binary search algorithm.
```  
(d)What are the differences between Heap and BST? When to use heap and when to use BST?

**Answer:**

The main difference is that Binary Search Tree doesn’t allow duplicates, however, the Heap does. The BST is ordered, but the Heap is not. So, if order matters, then it is better to use BST. If an order is not relevant, but we need to be sure that insert and remove will take O(log(n)) time, then the Heap guarantees to achieve this time. In a Binary Search Tree, this may take up to O(n) time, if the tree is completely unbalanced (chain is the worst case). Also, Heap can be built in linear time, however, the BST needs O(n*log(n)) to be created.

If an ordered set of items is wanted from which any item can be quickly located any, or that  can be traversed in order, then a binary search tree is used.

If an implementation of the priority queue abstract data type is wanted: a bag that will quickly give the smallest or largest, item when asked for it, then a heap is used.
  
(e)What are the differences between linked list and array?

**Answer:**
```c
1.	An array is the data structure contains a collection of similar type data elements whereas the Linked list is considered as non-primitive data structure contains a collection of unordered linked elements known as nodes.
2.	In the array the elements belong to indexes, i.e., if you want to get into the fourth element you have to write the variable name with its index or location within the square bracket.
In a linked list though, you have to start from the head and work your way through until you get to the fourth element.
3.	While accessing an element array is fast while Linked list takes linear time so, it is quite bit slower.
4.	Operations like insertion and deletion in arrays consume a lot of time. On the other hand, the performance of these operations in Linked lists is fast.
5.	Arrays are of fixed size. In contrast, Linked lists are dynamic and flexible and can expand and contract its size.
6.	In an array, memory is assigned during compile time while in a Linked list it is allocated during execution or runtime.
7.	Elements are stored consecutively in arrays whereas it is stored randomly in Linked lists.
8.	The requirement of memory is less due to actual data being stored within the index in the array. As against, there is a need for more memory in Linked Lists due to storage of additional next and previous referencing elements.
9.	In addition memory utilization is inefficient in the array. Conversely, memory utilization is efficient in the array.
```

(f)What is the best time complexity that can be achieved by using comparison based sorting algorithms? Explain your answer.

**Answer:**

The best time complexity is O(log(n)).

In comparison based sorting, elements of an array are compared with each other to find the sorted array.
```c
•Bubble sort and Insertion sort –
Average and worst case time complexity: n^2
Best case time complexity: n when array is already sorted.
Worst case: when the array is reverse sorted.
•Selection sort –
Best, average and worst case time complexity: n^2 which is independent of distribution of data.
•Merge sort –
Best, average and worst case time complexity: nlogn which is independent of distribution of data.
•Heap sort –
Best, average and worst case time complexity: nlogn which is independent of distribution of data.
•Quick sort –
It is a divide and conquer approach with recurrence relation:
Worst time complexity is O(n^2) and best is O(log(n))
```


<div>
  <span id="marking">
    <span class="alignleft">3. Answer the following Questions. (Any <b>Two</b>).</span>
    <span class="alignright">2 &times; 10 = 20 </span>
  </span>
</div>

(a) Sort these items 77,33,44,11,88,22,66 and 55 using Insertion Sort algorithm and write the steps.

**Answer:**
```c
77,33 ,44 ,11 ,88 ,22 ,66 ,55
Let us loop for i=1 to 7
i=1 Since 33 is smaller than 77 ,move 77 and insert 33 before 77
33,77,44,11,88,22,66,55
i=2 Since 44 is smaller than 77 ,move 77 and insert 44 before 77
33,44,77,11,88,22,66,55
i=3 11 will move to the beginning and all other elements from 33 to 77 will move one position ahead of their current position.
11,33,44,77,88,22,66,55
i=4 88 will remain at its position as all elements before it are smaller than 88.
11,33,44,77,88,22,66,55
i=5 22 will move to position after 11 and all other elements from 33 to 88 will move one position ahead of their current position.
11,22,33,44,77,88,66,55
i=6 66 will move to position after 33 and all other elements from 77 to 88 will move one position ahead of their current position.
11,22,33,44,66,77,88,55
i=7  55 will move to position after 44 and all other elements from 66 to 88 will move one position ahead of their current position.
11,22,33,44,55,66,77,88
```
         
(b)Define the terms: directed graph, complete graph and connected graph. Discuss the steps needed to follow to insert a node after a given node into a linked list.

**Answer:**

**Directed graph:** A directed graph is graph, i.e., a set of objects (called vertices or nodes) that are connected together, where all the edges are directed from one vertex to another.

**Complete Graph:** A complete graph is a graph in which each pair of graph vertices is connected by an edge. The complete graph with graph vertices is denoted and has (the triangular numbers) undirected edges, where is a binomial coefficient.

**Connected Graph:** A graph in which there is a path joining each pair of vertices, the graph being undirected.
```c
Steps to insert a node after a given node into a linked list:
1.	Check if the given node(as in prev_node) is NULL
2.	Allocate new node
3.	Put in the data
4.	Make next of new node next of given node(prev_node)
5.	Move the next of given node(prev_node) as new_node
```
      
(c) Write a Function that will merge two linked lists of integer , assuming that they are sorted. The merged list should itself be sorted.

**Answer:**
```c
struct node {
   int data;
   struct node *next;
};
node *createList(int *arr, int n){
   node *head, *p;
   p = head = new node;
   head->data = arr[0];
   head->next = NULL;
   for (int i = 1; i < n; ++i) {
      p->next = new node;
      p = p->next;
      p->data = arr[i];
      p->next = NULL;
   }
return head;
}
void displayList(node *head){
   while (head != NULL) {
      cout << head->data << " ";
      head = head->next;
   }
   cout << endl;
}
node *mergeSortedLists(node *head1, node *head2){
   node *result = NULL;
   if (head1 == NULL) {
      return head2;
   }
   if (head2 == NULL) {
      return head1;
   }
   if (head1->data < head2->data) {
      result = head1;
      result->next = mergeSortedLists(head1->next, head2);
   } else {
      result = head2;
      result->next = mergeSortedLists(head1, head2->next);
   }
   return result;
}
```


---

  <div align="center"><h2>END</h2></div>
  
- [x] I am declaring that, the above work is my own work. Whatever added above
except the template is the result of my brainstorming. I also understand that
submitting work that isn’t my own may result in permanent failure of this course