// Search target in a 2D array
// Target feature: An integer.
// The 2D array feature: Every element is an integer;
// In each row, element's value increases from left to right;
// In each column, element's value increases from up to down.

// Solution 1 Special_Featured Search 
// Time:11ms  Space:1500K
// Time complexity:T(n) = O(n) (row + coloum)  Space complexity:S(n) = O(1)
#include <iostream> 
#include <vector>
using namespace std;

class Solution {
public:
	bool Find(int target, vector<vector<int> > array) {

		// Illegal input check
		if (array.empty()) { return "Error, please input a 2D Vector object"; }

		// Get array's rows' and columns' count number 
		int row_count = array.size();
		int column_count = array[0].size();

		// Start loop for overall search:
		// Look up the target in the array from the bottom-left element;
		// If target is smaller than the point, let point go up; If larger, go right.
		int row = row_count - 1;
		int col = 0;
		while (row >= 0 && col < column_count)
		{
			if (target < array[row][col])
				row--;
			else if (target > array[row][col])
				col++;
			else
				return true;
		}
		return false;
	}
};

int main()
{
	//Simple test cases
	vector<vector<int> > array = { {-3,-2,-1,0},{1,2,3,4},{5,6,7,8} };

	int target1 =  6;
	int target2 = -2;
	int target3 = 10;
	Solution Result1, Result2, Result3;
	cout << "Target  " << target1 << "  in the array : " << Result1.Find(target1, array) << endl;
	cout << "Target  " << target2 << "  in the array : " << Result1.Find(target2, array) << endl;
	cout << "Target  " << target3 << "  in the array : " << Result1.Find(target3, array) << endl;

}
