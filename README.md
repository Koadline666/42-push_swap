# 42-push_swap
#### **
This is a project for [42Heilbronn](https://www.42heilbronn.de/en/curriculum/) school's curriculum.
The goal of the project is to sort a stack of integers in ascending order using a limited set of operations.

## Rules
Push_swap uses two stacks named a and b.
At the beginning, a contains a random amount of negative and/or positive numbers which cannot be duplicated, and b is empty.
The goal is to sort a in ascending order with as few operations as possible.

The following operations are available:
+ __sa__	 (`swap a`) swap the first 2 elements at the top of stack a. Do nothing if there is only one or no elements.
+ __sb__	 (`swap b`) swap the first 2 elements at the top of stack b. Do nothing if there is only one or no elements.
+ __ss__	 (`swap both`) sa and sb at the same time.
+ __pa__   (`push a`) take the first element at the top of b and put it at the top of a. Do nothing if b is empty.
+ __pb__   (`push b`) take the first element at the top of a and put it at the top of b. Do nothing if a is empty.
+ __ra__	 (`rotate a`) shift up all elements of stack a by 1. The first element becomes the last one.
+ __rb__	 (`rotate a`) shift up all elements of stack b by 1. The first element becomes the last one.
+ __rr__	 (`rotate both`) ra and rb at the same time.
+ __rra__	(`reverse rotate a`) shift down all elements of stack a by 1. The last element becomes the first one.
+ __rrb__	(`reverse rotate b`) shift down all elements of stack b by 1. The last element becomes the first one.
+ __rrr__	(`reverse rotate both`) rra and rrb at the same time.

if the given input is
+ not a number
+ duplicated
+ bigger/smaller than int

the program displays `Error`
, otherwise it dispays the operations divided by a newline

## Description
### mandatory part:
**run _`make`_**

The program will be executed as follows:

__`./push_swap num1 num2 num3 ... numn`__

i.e:
```
$>./push_swap 2 1 3 6 5 8
sa
pb
pb
pb
sa
pa
pa
pa
$>./push_swap 0 one 2 3
Error
$>
```

### bonus part:
**run _`make bonus`_**

The bonus is about writing a __checker__-program to test the output of push_swap.

The program will be executed as follows:

__`./push_swap num1 num2 num3 ... numn | ./checker num1 num2 num3 ... numn`__ <sub>(same numbers for both programs)<sub>

it will display __OK__ if the instructions successfully sorted the stack and __KO__ if not.

## What i learned:
+ Learned about different `types of sorting algorithms`
+ Gained more practical knowledge about `linked lists`
+ Learned about `stacks`
+ Learned about `time` and `memory complexity`

