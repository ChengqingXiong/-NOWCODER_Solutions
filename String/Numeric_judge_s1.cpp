// Solution 1 Direct Solution
// Time:4ms  Space:472K
// Time complexity:T(n) = O(n)   Space complexity:S(n) = O(1)
#include <iostream> 
using namespace std;

class Solution {
public:
	// Parameters:
	//        string: the input string
	// Return value:       
	//        true for is numeric and false for not
	bool isNumeric(char* string) {
		// Flags for recording whether sign, demical, e(E) appears or not
		bool has_sign = false, has_demical = false, has_e = false;
		// Loop for each character in the string
		for (int i = 0; i < strlen(string); i++) {
			if (string[i] == 'e' || string[i] == 'E') {
				// If nothing else after or before e(E), return false
				if (i == 0) return false;
				if (i == strlen(string) - 1) return false;
				// If more than one e(E) is in the string, return false
				if (has_e == true) return false;
				has_e = true;
			}
			else if (string[i] == '+' || string[i] == '-') {
				// Case 1: the sign +(-) appears first time after e(E)
				if (!has_sign && i > 0 && string[i - 1] != 'e' && string[i - 1] != 'E') return false;
				// Case 2: the sign +(-) appears second time after e(E)
				if (has_sign && string[i - 1] != 'e' && string[i - 1] != 'E') return false;
				// If nothing else after +(-), return false
				if (i == strlen(string) - 1) return false;
				has_sign = true;
			}
			else if (string[i] == '.') {
				// The demical can only appear once before e
				if (has_demical || has_e) return false;
				// If nothing else after '.', return false
				if (i == strlen(string) - 1) return false;
				has_demical = true;
			}
			else if (string[i] < '0' || string[i]>'9') return false;
		}
		// Otherwise, return true
		return true;
	}
};

int main()
{
	char str1[] = "123.45e-12";
	char str2[] = "12.5e+1.5";
	char str3[] = "-1e-16";
	Solution s1;
	cout << "String 1 is: " << str1 << "  whether it is numerical : " << s1.isNumeric(str1) << endl;
	cout << "String 2 is: " << str2 << "  whether it is numerical : " << s1.isNumeric(str2) << endl;
	cout << "String 3 is: " << str3 << "  whether it is numerical : " << s1.isNumeric(str3) << endl;
	return 0;
}