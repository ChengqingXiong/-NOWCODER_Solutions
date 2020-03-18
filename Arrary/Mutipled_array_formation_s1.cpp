// Got muptiply array B
// Given input A: a <int> 2-D array with length of n
// output B: a 2-D array with element B[i] in it equals to B[i]=A[0]*A[1]*...*A[i-1]*A[i+1]*...*A[n-1]

// Solution 1 General Solution
// Time:4ms  Space:472K
// Time complexity:T(n) = O(n)   Space complexity:S(n) = O(n)
#include <iostream> 
#include <vector>
using namespace std;

class Solution {
public:
	// Parameters:
	//        A:     a 2-D array(vector object) of integers with length n
	// Return value:       
	//        a 2-D array with element B[i] has the feature
	//        B[i] = A[0] * A[1] *... * A[i - 1] * A[i + 1] *... * A[n - 1]
	vector<int> multiply(const vector<int>& A) {
		// input check
		int array_length = A.size();
		if (array_length < 2)
		{
			cout << "Error input, please input a array with length more than 1" << endl;
			exit(0);
		};
		vector<int> B(array_length,1);
		
		// B = mutiply B0 = 1  A1 A2 A3 A4 ... An
 		//             B1 = A0 1  A2 A3 A4 ... An
		//             B2 = A0 A1 1  A3 A4 ... An
		//                  .....................
		//                  .....................
		//             Bn = A0 A1 A2 A3 A4 ...  1
		// Firstly calculate first part of Bn using B[n]_part1 = B[n-1]_part1 * A[n-1]
		// Secondly calculate second part of Bn using B[n-1]_part2 = B[n]_part2 * A[n]

		// Initialize the B[0]_part1 and B[n]_part2
		int temp = 1;
		// Calculate part1
		for (int i = 0; i < array_length-1; i++)
		{
			B[i+1] = B[i] * A[i];
		}
		// Calculate part2
		for (int i = array_length-1 ; i >= 0; i--)
		{
			B[i] = B[i] * temp;
			temp = temp * A[i];
		}
		return B;
	}
};

int main()
{
	//Simple test cases
        vector<int>  A1 = { 1,2,5,8,10,12 };
	vector<int>  A2 = { -2,-1,0,1,2};
	vector<int>  A3 = { 2,1,5,1,2 };
	Solution Result1, Result2, Result3;
	for (int i = 0; i <= A3.size()-1; i++)
		cout << Result3.multiply(A3)[i] << endl;

}
