# Banker-s-Algorithm

## Commands
### To make
> make
### To run
> make run # # #

# Outline
  When a new process enters the system, it must declare the maximum
number of instances of each resource type that it may need. This number may
not exceed the total number of resources in the system. When a user requests
a set of resources, the system must determine whether the allocation of these
resources will leave the system in a safe state. If it will, the resources are
allocated; otherwise, the process must wait until some other process releases
enough resources.

    Each process will contain an array for total number of resources required.

  Several data structures must be maintained to implement the banker’s
algorithm. These data structures encode the state of the resource-allocation
system. We need the following data structures, where n is the number of
processes in the system and m is the number of resource types:

Example: n x m

    A B C
P1  1 3 4
P2  4 5 6
P3  7 8 9
P4  10 11 12


• Available. A vector of length m indicates the number of available resources
of each type. If Available[j] equals k, then k instances of resource type R j
are available.

• Max. An n × m matrix defines the maximum demand of each process.
If Max[i][j] equals k, then process P i may request at most k instances of
resource type R j .

• Allocation. An n × m matrix defines the number of resources of each type
currently allocated to each process. If Allocation[i][j] equals k, then process
P i is currently allocated k instances of resource type R j .

• Need. An n × m matrix indicates the remaining resource need of each
process. If Need[i][j] equals k, then process P i may need k more instances
of resource type R j to complete its task. Note that Need[i][j] equals Max[i][j]
− Allocation[i][j].

  These data structures vary over time in both size and value.
To simplify the presentation of the banker’s algorithm, we next establish
some notation. Let X and Y be vectors of length n. We say that X ≤ Y if and
only if X[i] ≤ Y[i] for all i = 1, 2, ..., n. For example, if X = (1,7,3,2) and Y =
(0,3,2,1), then Y ≤ X. In addition, Y < X if Y ≤ X and Y = X.

  We can treat each row in the matrices Allocation and Need as vectors
and refer to them as Allocation i and Need i . The vector Allocation i specifies
the resources currently allocated to process P i ; the vector Need i specifies the
additional resources that process P i may still request to complete its task.

This programming assignment combines three separate topics:
(1) multithreading, (2) preventing race conditions, and (3) deadlock avoidance.

# The Banker
The banker will consider requests from n customers for m resources types.

# The Customers
Create n customer threads that request and release resources from the bank.
The customers will continually loop, requesting and then releasing random
numbers of resources. The customers’ requests for resources will be bounded
by their respective values in the need array. The banker will grant a request if
it satisfies the safety algorithm outlined in Section 7.5.3.1. If a request does not
leave the system in a safe state, the banker will deny it.

## Safety Algorithm in Section 7.5.3.1
We can now present the algorithm for finding out whether or not a system is
in a safe state. This algorithm can be described as follows:
    1. Let Work and Finish be vectors of length m and n, respectively. Initialize
        Work = Available and Finish[i] = false for i = 0, 1, ..., n − 1.
    2. Find an index i such that both
        a. Finish[i] == false
        b. Need i ≤ Work
            If no such i exists, go to step 4.
    3. Work = Work + Allocation i
        Finish[i] = true
        Go to step 2.
    4. If Finish[i] == true for all i, then the system is in a safe state.
        This algorithm may require an order of m × n 2 operations to determine whether
        a state is safe.

#Implementation
You should invoke your program by passing the number of resources of each
type on the command line. For example, if there were three resource types,
with ten instances of the first type, five of the second type, and seven of the
third type, you would invoke your program follows:
./a.out 10 5 7
The available array would be initialized to these values. You may initialize
the maximum array (which holds the maximumdemand of each customer) using
any method you find convenient.

# Assignment requirements
You may assume that you have three resources with the following number of instances (available array)
The number of customers, n, can vary.
Initialize your maximum array with random numbers less than available array
Every time you make an allocation show the following:
The request,
Allocation,
Available,
Maximum, and
Need
Indicate whether the request was successful or denied
In your report show an example of a denied request and a granted request and explain the results. Why was the request denied or granted.

## Grading
(4 pts) implementation of customer threads

(4 pts) implementation of request_resources

(4 pts) implementation of safety algorithm

(4 pts) overall working program

(4 pts) report
