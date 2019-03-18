# Banker-s-Algorithm
  When a new process enters the system, it must declare the maximum
number of instances of each resource type that it may need. This number may
not exceed the total number of resources in the system. When a user requests
a set of resources, the system must determine whether the allocation of these
resources will leave the system in a safe state. If it will, the resources are
allocated; otherwise, the process must wait until some other process releases
enough resources.

  Several data structures must be maintained to implement the banker’s
algorithm. These data structures encode the state of the resource-allocation
system. We need the following data structures, where n is the number of
processes in the system and m is the number of resource types:

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
