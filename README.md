# CS260-Assignment-3

## Details (Linked Queue):
1. Based on what we know about linked lists, stacks, and queues, design a linked queue (a queue using a linked-list to store the data in the structure)

2. Design, implement, and test a Queue data structure that:

	1. uses a **linked-list** to store values in the queue

	2. has an **enqueue** method that will appropriately add a value to the back of the queue as an appropriate element

	3. has a **dequeue** method that will appropriately **remove** an element from the **front** of the queue **and return its value**

	4. Optionally has a **peek** method that **returns the value at the front** of the queue **without removing it**
Bonus if you also create an array based Queue!

3. (**Note winter 2021:** we had not covered this yet at the time that this assignment was assigned, you do not have to analyze your work this week) Analyze the complexity of your implementations (at least the run-time of the add, remove, and peek methods).
(note that we will consider operations not having to do with the structure as O(1), even if they might be expensive operations in terms of real-time or space used)
(note that if you are not in class when we talk about Asymptotic Big-O notation, you can find tons of good examples online)

4. Tests: Be sure to include at least one test for each piece of functionality that should verify that your code is working!

4. Be sure to commit changes regularly to your git repo

5. Remember to submit a link to this project in Moodle to remind us to grade it!

**Note:** This assignment is partly to get you some practice with basic pointers if you have not used them much, to get you thinking about dynamically sizing containers, and to think about what might be efficient and what might be able to be improved.


## Design of Linked queue:
![HW3 1](https://user-images.githubusercontent.com/59652655/115339880-84ad2380-a15a-11eb-8697-c010c90cd7db.png)
  
  
## Working of linked queue:  
It has main three operations as follows:  

1.	**Enqueue**
2.	**Dequeue**
3.	**Peek**



	When one enqueue an element to queue, it will check for whether it is first of all element and will handle accordingly as shown in program. As it is dynamic queue, it will assign or allocate dynamic memory to new node.  It will initialize attribute of new node. And it will add that node at the end/ rear of the linked queue. And will update the tail as it is maintaining T in linked queue.    
  
	When one dequeue an element from the linked queue, it will check if queue is not empty. If queue is empty it will show message accordingly. In case queue is not empty it will return element from the front and delete front node from the linked queue. After successful dequeue at the end of operation it free the memory occupied by front node.    
  
	When one peek the element, it will check for at least one element is there. If there is at least one element it will returns data from the front of linked queue. If no element available in linked queue it will show message accordingly that cannot peek the element from empty queue.
This working of all the operation can be illustrated in a following topic “Test cases and result for linked queue.
One can run main program to perform operations in any sequence and can amuse by perfect working of linked queue.     
  
  
## Test cases and result for Linked Queue:

**Do following operation in sequence:**  
  
  
1.	Enque(1)  
	It will insert 1 at rear.  
  	
2.	Enque(2)  
	It will insert 2 at rear.  
  	
3.	Enque(3)  
	It will insert 3 at rear.  
  
4.	Peek()  
	It will return 1.  
  	
5.	Deueue()  
	it will return 1 and will delete it.  
  	
6.	Peek()  
	It will return 2.  
  	
7.	Deueue()  
	it will return 2 and will delete it.  
  	
8.	Enque(4)  
	It will insert 4 at rear.  
  	
9.	Peek()  
	It will return 3.  
  	
10.	Deueue()  
	it will return 3 and will delete it.  
  	
11.	Deueue()  
	it will return 4 and will delete it.  
  	
12.	Peek()  
	It will show message can’t peek from empty structure.  
  	
13.	Deueue()  
	It will show message can’t delete from empty structure.  




