/* File Name: QuickSort.h
** Author: Ovidio de Jesus Henriquez
**
** This file contains an implementation of the quick sort algorithm.
*/

/** INCLUDES **/
#include <vector>

template <class T>
std::vector<T> quick_sort(std::vector<T> unsorted)
{
	std::vector<T> less;
	std::vector<T> equal;
	std::vector<T> greater;

	// Select pivot (for this case, the last element)
	if (unsorted.size() > 1)
	{
		T pivot = unsorted.back();

		// Create vectors to store the elements less than the pivot,
		// greater than the pivot, and equal to the pivot
		for (int i = 0; i < unsorted.size(); ++i)
		{
			if (unsorted[i] < pivot)
			{
				less.push_back(unsorted[i]);
			}
			else if (unsorted[i] > pivot)
			{
				greater.push_back(unsorted[i]);
			}
			else
			{
				equal.push_back(unsorted[i]);
			}
		}

		// Recursively sort the less and greater vectors
		std::vector<T> sorted_less = quick_sort(less);
		std::vector<T> sorted_greater = quick_sort(greater);

		// Generate the sorted vector
		std::vector<T> sorted;
		sorted.insert(sorted.end(), sorted_less.begin(), sorted_less.end());
		sorted.insert(sorted.end(), equal.begin(), equal.end());
		sorted.insert(sorted.end(), sorted_greater.begin(), sorted_greater.end());

		return sorted;
	}

	// Do nothing
	return unsorted;
}