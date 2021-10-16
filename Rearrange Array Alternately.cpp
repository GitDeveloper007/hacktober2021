/*
Given a sorted array of positive integers. Your task is to rearrange  the array elements alternatively i.e first element should be max value, second should be min value, third should be second max, fourth should be second min and so on.

Example 1:

Input:
N = 6
arr[] = {1,2,3,4,5,6}
Output: 6 1 5 2 4 3
Explanation: Max element = 6, min = 1, 
second max = 5, second min = 2, and 
so on... Modified array is : 6 1 5 2 4 3.
Example 2:

Input:
N = 11
arr[]={10,20,30,40,50,60,70,80,90,100,110}
Output:110 10 100 20 90 30 80 40 70 50 60
Explanation: Max element = 110, min = 10, 
second max = 100, second min = 20, and 
so on... Modified array is : 
110 10 100 20 90 30 80 40 70 50 60.
Your Task:
The task is to complete the function rearrange() which rearranges elements as explained above. Printing of the modified array will be handled by driver code.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

Constraints:
1 <= N <= 107
1 <= arr[i] <= 107
*/

// C++ program to rearrange an array in minimum
// maximum form
#include <bits/stdc++.h>
using namespace std;

// Prints max at first position, min at second position
// second max at third position, second min at fourth
// position and so on.
void rearrange(int arr[], int n)
{
	// Auxiliary array to hold modified array
	int temp[n];

	// Indexes of smallest and largest elements
	// from remaining array.
	int small = 0, large = n - 1;

	// To indicate whether we need to copy remaining
	// largest or remaining smallest at next position
	int flag = true;

	// Store result in temp[]
	for (int i = 0; i < n; i++) {
		if (flag)
			temp[i] = arr[large--];
		else
			temp[i] = arr[small++];

		flag = !flag;
	}

	// Copy temp[] to arr[]
	for (int i = 0; i < n; i++)
		arr[i] = temp[i];
}

// Driver code
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6 };
	int n = sizeof(arr) / sizeof(arr[0]);

	cout << "Original Array\n";
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";

	rearrange(arr, n);

	cout << "\nModified Array\n";
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	return 0;
}

