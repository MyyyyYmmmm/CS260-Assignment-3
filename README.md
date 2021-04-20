# CS260-Assignment-3

![HW3_1](https://user-images.githubusercontent.com/59652655/115337434-d43d2080-a155-11eb-9e9f-5f0db0b808e8.png)
  
## Working of linked queue:  
It has main three operations as follows:
1.	Enqueue
2.	Dequeue
3.	Peek
![image](https://user-images.githubusercontent.com/59652655/115337541-064e8280-a156-11eb-9bf1-07312286cbeb.png).  


When one enqueue an element to queue, it will check for whether it is first of all element and will handle accordingly as shown in program. As it is dynamic queue, it will assign or allocate dynamic memory to new node.  It will initialize attribute of new node. And it will add that node at the end/ rear of the linked queue. And will update the tail as it is maintaining T in linked queue.  

When one dequeue an element from the linked queue, it will check if queue is not empty. If queue is empty it will show message accordingly. In case queue is not empty it will return element from the front and delete front node from the linked queue. After successful dequeue at the end of operation it free the memory occupied by front node.  

When one peek the element, it will check for at least one element is there. If there is at least one element it will returns data from the front of linked queue. If no element available in linked queue it will show message accordingly that cannot peek the element from empty queue.
This working of all the operation can be illustrated in a following topic “Test cases and result for linked queue.
One can run main program to perform operations in any sequence and can amuse by perfect working of linked queue.    
![image](https://user-images.githubusercontent.com/59652655/115337664-4150b600-a156-11eb-95bc-20c3e55bb812.png).  

## Test cases and result for Linked Queue:
      **Do following operation in sequence:**. 
![image](https://user-images.githubusercontent.com/59652655/115337726-5decee00-a156-11eb-9d8a-0b7348ca8d2d.png)

1.	Enque(1)
	It will insert 1 at rear.
2.	Enque(2)
	It will insert 2 at rear.
3.	Enque(3)
	It will insert 3 at rear.

4.	Peek()
	It will return 1.
5.	Deueue()
	it will return 1 and will delete it 
6.	Peek()
	It will return 2.
7.	Deueue()
	it will return 2 and will delete it 
8.	Enque(4)
	It will insert 4 at rear.
9.	Peek()
	It will return 3.
10.	Deueue()
	it will return 3 and will delete it 
11.	Deueue()
	it will return 4 and will delete it 
12.	Peek()
	It will show message can’t peek from empty structure.
13.	Deueue()
	It will show message can’t delete from empty structure.


![image](https://user-images.githubusercontent.com/59652655/115337797-82e16100-a156-11eb-9848-ecfb315d0e0f.png)

