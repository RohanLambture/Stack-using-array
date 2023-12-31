You need to implement a stack data structure using array data structure which supports the following functions :

1 . Push() : here you need to push an element to the stack. You will be given and integer x which is to be pushed inside the stack. You can assume that stack size is INT_MAX i.e. no issue of overflow and you can insert as many numbers as you want.

2. Pop() : remove the top element of a stack. In case when no element is present inside stack, you need to print "stack is empty".

3. peek() : print the top element of the stack. In case when no elements are present inside stack, print -1 instead (input numbers given are always non negative).

4. Size() : print the size of stack.

5. isempty() : in this function we need to check wheteher the stack is empty or not. Print 1 if stack is empty and 0 if not.

 

Note : You are expected to perform all the above operation inO(1) time complexity.

 

Input Format -

In the first line, a positive integer q is given which denotes the number of operations you need to perform. Next q lines denote the operations. In each line, you will be given a string s which denotes the name of operation to be performed. In case of push operation, an extra integer x, the element to be inserted will also be given.  

 

Output Format - 

Output for the operations should be printed on seperate lines

 

Sample Test Case-1 :

5
push 1
push 2
pop
pop
peek

 

Output : 

-1

 

Explanation :

-> first we push 1 into the stack 

-> next we push 2 into the stack 

-> we pop 2 (the top element) from the stack

-> we pop 1 fromt the stack

-> now since the stack is empty, we return -1

 

Sample Test Case-2 :

7
push 1
size
push 2
size
pop
isempty
peek

 

Output : 

1
2
0
1

 

Explanation : 

-> we push 1 into the stack

-> we return 1 since stack has only element 

-> we push 2 into the stack

> since now stack has 2 elements, we return 2

-> we pop 2 from the stack

-> since stack has 1 element , and hence non-empty, we return 0

-> we return 1, the top element of the stack 

