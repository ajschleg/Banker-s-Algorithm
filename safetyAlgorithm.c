#include <stdio.h>
#include "main.h"

// Recursive algorithm to find safe sequence
int safe_sequence_check(int curr_index, int seq[])
{
  int swap;

  // copy the array so we don't have to reset the original if this fails
  int arr_size = NUMBER_OF_CUSTOMERS - curr_index;
  int sequence[arr_size];
  printf("Current sequence, starting at index %d: [", curr_index);
  for (int i = 0; i < arr_size; ++i)
  {
    sequence[i] = seq[i + curr_index];
    printf(" %d ", sequence[i]);
  }
  printf("]\n");

  int valid;
	// starting at first element of sequence array, use as customer index
	for (int n = 0, p; n < arr_size; ++n)
	{
    // perform swap if not first iteration
    if (n)
    { 
      swap = sequence[n];
      sequence[n] = sequence[0];
      sequence[0] = swap;
    }

		valid = 1;
		p = sequence[0];
    printf("Testing sequence index %d as customer %d\n", curr_index, p);

		for (int m = 0; m < NUMBER_OF_RESOURCES; ++m)
		{
			if (need[p][m] > work[m])
			{
        printf("need > work , invalid sequence for index %d as customer %d\n", curr_index, p);
				valid = 0;
				break;
			}
		}

		// if need <= work for all resources for this customer in this sequence
		if (valid)
		{
      // if this is the last element of the sequence, just return valid
      if (arr_size == 1)
      {
        return 1;
      }

			for (int m = 0; m < NUMBER_OF_RESOURCES; ++m)
			{
				work[m] += allocation[p][m];
			}

      printf("valid sequence for index %d as customer %d, testing next index...\n", curr_index, p);
      if (safe_sequence_check(curr_index + 1, sequence))
      {
        // could copy valid sequence portion back to pass in array before returning
        // so that caller will know know the final valid sequence
        printf("Valid sequence found with customer %d in index %d, returning true...\n", p, curr_index);
        return 1; // valid
      }
      // else, no valid sequence found down this path
      // undo changes to work array
      for (int m = 0; m < NUMBER_OF_RESOURCES; ++m)
			{
				work[m] -= allocation[p][m];
			}
		}

    // else, not valid
    // continue the loop which will swap with next element and continue testing
	}

  // if loop completed without finding valid sequence,
  // no valid sequence down this path
  printf("No valid sequence found on this path, returning false...\n");
  return 0; // invalid
}

