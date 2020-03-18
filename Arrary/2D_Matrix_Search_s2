// Search target in a 2D array
// Target feature: An integer.
// The 2D array feature: Every element is an integer;
// In each row, element's value increases from left to right;
// In each column, element's value increases from up to down.

// Solution 2 General_Cases Search  
// Time:13ms  Space:1484K
// Time complexity:T(n) = O(nlogn) (row * log2(column))  Space complexity:S(n) = O(1)
#include <iostream> 
#include <vector>
using namespace std;

class Solution {
public:
	bool Find(int target, vector<vector<int> > array) {

		// Illegal input check
		if (array.empty()) { return "Error, please input a 2D Vector object"; }

		// Get length of row in the array
		int row_count = array.size();

		// Start loop for overall search:
		// Look up the target in the array from the bottom row by binary search
		// Go through all the rows in the array
		int row, col;		
		for(row = row_count - 1; row >= 0; row--)
		{
			int low = 0;
			int high = array[row].size() - 1;
			int mid;
			while (low <= high)
			{   
				mid = (low + high) / 2;
				if (target > array[row][mid])
					low = mid + 1;
				else if (target < array[row][mid])
					high = mid - 1;
				else
					return true;
			}
		}
		return false;
	}
};

int main()
{
	//Simple test cases
	vector<vector<int> > array = { {-3,-2,-1,0},{1,2,3,4},{5,6,7,8} };

	int target1 = 6;
	int target2 = -2;
	int target3 = 10;
	Solution Result1, Result2, Result3;
	cout << "Target  " << target1 << "  in the array : " << Result1.Find(target1, array) << endl;
	cout << "Target  " << target2 << "  in the array : " << Result1.Find(target2, array) << endl;
	cout << "Target  " << target3 << "  in the array : " << Result1.Find(target3, array) << endl;

}
