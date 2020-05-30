// Solution 1 Hash Solution
// Time:3ms  Space:400K
// Time complexity:T(n) = O(n)   Space complexity:S(n) = O(1)
#include <iostream> 
#include <string> 
using namespace std;

class Solution {
public:
	// Parameters:
	//        ch: the input charater of a string
	// Return value:       
	//        the first charater that only appears once, if none, return #

    //Insert one char from stringstream
	string str;
	int hash[256] = {0};
	void Insert(char ch)
	{   
		// Save the charater together into a string
		str += ch;
		// Count the appearance of the charater using hash table
		hash[ch] += 1;
	}
	//return the first appearence once char in current stringstream
	char FirstAppearingOnce()
	{   
		int n = str.size();	
		// Go through the whole string and return the first charater that only appears once
		for (int i = 0; i <= n - 1; i++) {
			if (hash[str[i]] == 1) return str[i];
		}
		// Otherwise, return #
		return '#';
	}
};

int main()
{
	char str[] = "google";
	Solution s1;
	for (int i = 0; i <= strlen(str) - 1; i++) {
		s1.Insert(str[i]);
	}
	cout << "String 1 is: " << str << " the first charater that only appears once : " << s1.FirstAppearingOnce() << endl;
	return 0;
}