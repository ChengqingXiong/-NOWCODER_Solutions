4 String Questions and Solutions
====

### 1.问题:<br/>
### 请实现一个函数，将一个字符串中的每个空格替换成“%20”。例如，当字符串为We Are Happy.则经过替换之后的字符串为We%20Are%20Happy。<br/>

1.Replace space with %20 in a string <br/>
Task: replaceSpace(char *str,int length)<br/>
Parameters:
         - *str: the input string
         - length: the length of the input string
target:  an new string.<br/> 

Solution1 (General_Cases Solution):<br/>
Shift the elements and replace the space with %20 from the end to the beginning.<br/>
T(n) = O(n); S(n) = O(1)<br/>

### 2.问题:<br/>
### 请实现一个函数用来匹配包括'.'和"*"正则表达式。模式中的字符'.'表示任意一个字符，而星号表示它前面的字符可以出现任意次（包含0次）。 在本题中，匹配是指字符串的所有字符匹配整个模式。例如，字符串"aaa"与模式"a.a"和"ab*ac*a"匹配，但是与"aa.a"和"ab*a"均不匹配 <br/>

2.Match regular expression of the input string and input pattern<br/>
Solution 1 Recursion Solution：<br/>
Task: bool match(char* str, char* pattern)<br/>
Parameters:<br/>
         *str: the input string<br/>
         *pattern: the pattern string for matching<br/>
Return value:<br/>
         true for matching and false for not matching<br/>
         
### 3.问题:<br/>
### 请实现一个函数用来判断字符串是否表示数值（包括整数和小数）。例如，字符串"+100","5e2","-123","3.1416"和"-1E-16"都表示数值。 但是"12e","1a3.14","1.2.3","+-5"和"12e+4.3"都不是。 <br/>

3.Judge if the string represents a numerical<br/>
Solution 1 Recursion Solution：<br/>
Task: bool isNumeric(char* string)<br/>
Parameters:<br/>
         *string: the input string<br/>
Return value:<br/>
         true for is numeric and false for not<br/>
T(n) = O(n); S(n) = O(1)<br/>
