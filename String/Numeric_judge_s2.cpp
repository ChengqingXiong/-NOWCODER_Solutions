// Solution 2 String Solution
// Time:3ms  Space:360K
// Time complexity:T(n) = O(n)   Space complexity:S(n) = O(n)
#include <iostream> 
#include <string> 
using namespace std;

class Solution {
public:
	// Parameters:
	//        string: the input string
	// Return value:       
	//        true for is numeric and false for not
	bool isNumeric(char* str1) {
		// Convert the char* type to string type
		string str = string(str1);
		// Split the string to two parts: The base number and the exponent
		int e = str.find('e');
		int E = str.find('E');
		if (e == string::npos && E == string::npos) return judge_base(str);
		else if (e != string::npos && E != string::npos)  return false;
		else if (e != string::npos && E == string::npos) {
			if (e == strlen(str1) - 1) return false;
			else return (judge_base(str.substr(0, e)) && judge_exponent(str.substr(e + 1)));
		}
		else if (e == string::npos && E != string::npos) {
			if (E == strlen(str1) - 1) return false;
			else return (judge_base(str.substr(0, E)) && judge_exponent(str.substr(E + 1)));
		}
	}

	bool judge_base(string str) {
		// The length of the str
		int n = str.size();
		// Flags for recording whether demical appears or not
		bool has_demical = false;
		// Judge the base number part according to the following rules:
		for (int i = 1; i < n; i++) {
			if (str[i] == '+' || str[i] == '-') {
				// Case 1: The +(-) must appear at the first place
				if (i != 0) return false;
			}
			else if (str[i] == '.') {
				// Case 2: The . can not appear at the first or the last place
				if (i == 0 || i == n - 1) return false;
				// Case 3: The . can only appear once 
				if (has_demical == true) return false;
				has_demical = true;
			}
			else if (str[i] < '0' || str[i] > '9') 
				// Case 4: The charater should be 0~9
				return false;
		}
		return true;
	}
	bool judge_exponent(string str) {
		// The length of the str
		int n = str.size();
		// Judge the exponent part according to the following rules:
		for (int i = 1; i < n; i++) {
			if (str[i] == '+' || str[i] == '-') {
				// Case 1: The +(-) must appear at the first place and not the last place
				if (i != 0 || i == n - 1) return false;
			}
			else if (str[i] < '0' || str[i] > '9')
				// Case 2: The charater should be 0~9
				return false;
		}
		return true;
	}
};

int main()
{
	char str1[] = "123.45e-12";
	char str2[] = "12.5e";
	char str3[] = "-1e-16";
	Solution s1;
	cout << "String 1 is: " << str1 << "  whether it is numerical : " << s1.isNumeric(str1) << endl;
	cout << "String 2 is: " << str2 << "  whether it is numerical : " << s1.isNumeric(str2) << endl;
	cout << "String 3 is: " << str3 << "  whether it is numerical : " << s1.isNumeric(str3) << endl;
	return 0;
}