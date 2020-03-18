// Find any duplication element in an array
// In the array: int numbers[length],every element is smaller than int (length-1);

// Solution 1 General hash way
// Time:4ms  Space:488K
// Time complexity:T(n) = O(n) (length)  Space complexity:S(n) = O(n)
#include <iostream> 
using namespace std;

class Solution {
public:
	// Parameters:
	//        numbers:     an array of integers
	//        length:      the length of array numbers
	//        duplication: (Output) the duplicated number in the array number
	// Return value:       true if the input is valid, and there are some duplications in the array number
	//                     otherwise false
	bool duplicate(int numbers[], int length, int* duplication) {
		//Illegal input array check
		if (numbers == NULL) return false;
		for (int i = 0; i <= length - 1; i++)
		{
			int a = numbers[i];
			if (numbers[i] < 0 || numbers[i] > length - 1)
				return false;
		}
		// Use the hash array to count the number of occurence of the element
		int* hash_array = new int[length]();
		for (int i = 0; i <= length - 1; i++)
		{   
			hash_array[numbers[i]] ++;
			if (hash_array[numbers[i]] > 1)
			{
				*duplication = numbers[i];
				delete []hash_array;
				return true;
			}
		}
		delete[]hash_array;
		return false;
	}
};

int main()
{
	// Test cases
	// Results should be： 1: true 2  2: false none 3: false out_of_range
	int numbers1[] = { 6, 1, 2, 5, 3, 2, 4 };
	int numbers2[] = { 6, 1, 2, 5, 3, 0, 4 };
	int numbers3[] = { 6, 1, 2, 5, 3, 1, 7 };
	int duplication1, duplication2, duplication3;
	Solution Result1, Result2, Result3;
	bool result1 = Result1.duplicate(numbers1, 7, &duplication1);
	bool result2 = Result2.duplicate(numbers2, 7, &duplication2);
	bool result3 = Result3.duplicate(numbers3, 7, &duplication3);
	cout << "Duplication in the array1: " << result1 << " Duplication is:  "<< duplication1 <<endl;
	cout << "Duplication in the array2: " << result2 << " Duplication is:  " << duplication2 << endl;
	cout << "Duplication in the array3: " << result3 << " Duplication is:  " << duplication3 << endl;
}
