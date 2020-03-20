// Solution 1 General Solution
// Time:4ms  Space:612K
// Time complexity:T(n) = O(n)   Space complexity:S(n) = O(1)
#include <iostream> 
using namespace std;

class Solution {
public:
	// Parameters:
	//        str: a string
	//	      length: the length of the input string
	// Return value:       
	//        a new string
	void replaceSpace(char* str, int length) {

		// count the number of the space in the string
		int count = 0; 
        for (int i = 0; i < length; i++) {
			if (str[i] == ' ') {
				count++;
			}
	    }
		// Shift the elements and replace the space with %20 from the end to the beginning
		for (int i = length - 1; i >= 0; i--) {
			if (str[i] != ' ') {
				str[i + 2 * count] = str[i];
			}
			else {
				count--;
				str[i + count * 2] = '%';
				str[i + count * 2 + 1] = '2';
				str[i + count * 2 + 2] = '0';
			}
		}
	}
};

int main()
{   
	char str1[100] = "We are the champion";
	char str2[100] = "I am from SJTU";
	char str3[100] = "My name is Chengqing Xiong";
	cout << "The initial string 1 is: " << str1 << endl;
	cout << "The initial string 2 is: " << str2 << endl;
	cout << "The initial string 3 is: " << str3 << endl;
	Solution s1;
	s1.replaceSpace(str1, 20);
	s1.replaceSpace(str2, 15);
	s1.replaceSpace(str3, 27);
	cout << "The new string 1 after replacement is: " << str1 << endl;
	cout << "The new string 2 after replacement is: " << str2 << endl;
	cout << "The new string 3 after replacement is: " << str3 << endl;
	return 0;
}
