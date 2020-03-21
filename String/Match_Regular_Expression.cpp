// Solution 1 Recursion Solution
// Time:2ms  Space:500K
// Time complexity:T(s,p) = O(?)   Space complexity:S(s,p) = O(1)
#include <iostream> 
using namespace std;

class Solution {
public:
	// Parameters:
	//        str: the input string
	//	      pattern: the pattern string for matching
	// Return value:       
	//        true for matching and false for not matching
	bool match(char* str, char* pattern){
		// if str is empty and pattern is empty, they match.
		if (*str == '\0' && *pattern == '\0') return true;
		// if str is not empty but pattern is empty, they don't match.
		if (*str != '\0' && *pattern == '\0') return false;
		// if the next charater of pattern is not *, then decide and move on to the next one
		if (*(pattern + 1) != '*') {
			if ( (*pattern == *str) || (*str != '\0'&& *pattern == '.') ) {
				return match(str + 1, pattern + 1);
			}
			else
				return false;
		}
		// if the next charater of pattern is *:
		else {
			// case 1: charater before *  matches one or more charaters in the str
			//         move on to the next charater in the str
			if ((*pattern == *str) || (*str != '\0' && *pattern == '.')) {
				return match(str + 1, pattern) || match(str, pattern + 2);
			}
			// case 2: charater before * doesn't match the charater in the str
		    //         move on to the next charater after '*' in the pattern
			else
				return match(str , pattern + 2);
		}	
	}
};

int main()
{
	char str1[] = "aab";
	char str2[] = "mississippi";
	char str3[] = "abbbbca";
	char pattern1[] = "c*a*b";
	char pattern2[] = "mis*is*p*.";
	char pattern3[] = "ab*a*c*.*";
	Solution s1;
	cout << "The initial string 1 is: " << str1 << "pattern 1 is: " << pattern1 << endl;
	cout << "Result of matching is " << s1.match(str1, pattern1) << endl;
	cout << "The initial string 2 is: " << str2 << "pattern 2 is: " << pattern2 << endl;
	cout << "Result of matching is " << s1.match(str2, pattern2) << endl;
	cout << "The initial string 3 is: " << str3 << "pattern 3 is: " << pattern3 << endl;
	cout << "Result of matching is " << s1.match(str3, pattern3) << endl;
	return 0;
}