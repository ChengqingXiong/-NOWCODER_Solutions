4 String Questions and Solutions
====

### 1.问题:<br/>
### 请实现一个函数，将一个字符串中的每个空格替换成“%20”。
### 例如，当字符串为We Are Happy.则经过替换之后的字符串为We%20Are%20Happy。<br/>

1.Replace space with %20 in a string <br/>

Task: replaceSpace(char *str,int length)<br/>
Parameters:<br/>
&emsp;&emsp;*str: the input string<br/>
&emsp;&emsp;length: the length of the input string<br/>
target:  an new string.<br/>
<br/>
Solution1 General_Cases Solution:<br/>
Shift the elements and replace the space with %20 from the end to the beginning.<br/>
T(n) = O(n); S(n) = O(1)<br/>

### 2.问题:<br/>
### 请实现一个函数用来匹配包括'.'和"*"正则表达式。模式中的字符'.'表示任意一个字符，而星号表示它前面的字符可以出现任意次（包含0次）。 在本题中，匹配是指字符串的所有字符匹配整个模式。<br/>
### 例如，字符串"aaa"与模式"a.a"和"ab*ac*a"匹配，但是与"aa.a"和"ab*a"均不匹配 <br/>

2.Match regular expression of the input string and input pattern<br/>

Task: bool match(char* str, char* pattern)<br/>
Parameters:<br/>
&emsp;&emsp;*str: the input string<br/>
&emsp;&emsp;*pattern: the pattern string for matching<br/>
Return value:<br/>
&emsp;&emsp;true for matching and false for not matching<br/>
<br/>
Solution 1 Recursion Solution：<br/>

### 3.问题:<br/>
### 请实现一个函数用来判断字符串是否表示数值(包括整数和小数)。<br/>
### 例如,字符串"+100","5e2","-123","3.1416"和"-1E-16"都表示数值。但"12e","1a3.14","1.2.3","+-5"和"12e+4.3"都不是。<br/>

3.Judge if the string represents a numerical<br/>

Task: bool isNumeric(char* string)<br/>
Parameters:<br/>
&emsp;&emsp;*string: the input string<br/>
Return value:<br/>
&emsp;&emsp;true for is numeric and false for not<br/>
<br/>
Solution 1 Direct Solution：<br/>
Directly use the char* for judging.<br/>
T(n) = O(n); S(n) = O(1)<br/>
<br/>
Solution 2 String Solution：<br/>
Convert to the string type for judging.<br/>
T(n) = O(n); S(n) = O(n)<br/>

### 4.问题:<br/>
### 请实现一个函数用来找出字符流中第一个只出现一次的字符。<br/>
### 例如，当从字符流中只读出前两个字符"go"时，第一个只出现一次的字符是"g"。当从该字符流中读出前六个字符“google"时，第一个只出现一次的字符是"l"。<br/>

4.Find the first charater that only appears once<br/>
Task: void Insert(char ch); char FirstAppearingOnce()<br/>
Parameters:<br/>
&emsp;&emsp;*string: ch: the input charater of a string<br/>
Return value:<br/>
&emsp;&emsp;the first charater that only appears once, if none, return # <br/>
<br/>
Solution 1 Hash Solution：<br/>
Use a hash table to record the numbers of appearance of each charater <br/>
T(n) = O(n); S(n) = O(1)<br/>
