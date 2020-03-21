4 String Questions and Solutions
====

### 1.问题:<br/>
### 请实现一个函数，将一个字符串中的每个空格替换成“%20”。例如，当字符串为We Are Happy.则经过替换之后的字符串为We%20Are%20Happy。<br/>

1.Replace space with %20 in a string <br/>
Task: replaceSpace(char *str,int length)<br/>
Parameters:<br/>
         *str: the input string<br/>
         length: the length of the input string<br/>
target:  an new string.<br/> 

Solution1 (General_Cases Solution):<br/>
Shift the elements and replace the space with %20 from the end to the beginning.<br/>
T(n) = O(n); S(n) = O(1)<br/>

### 2.问题:<br/>
### 请实现一个函数用来匹配包括'.'和"*"正则表达式。模式中的字符'.'表示任意一个字符，而星号表示它前面的字符可以出现任意次（包含0次）。 在本题中，匹配是指字符串的所有字符匹配整个模式。例如，字符串"aaa"与模式"a.a"和"ab*ac*a"匹配，但是与"aa.a"和"ab*a"均不匹配 <br/>

1. Match regular expression of the input string and input pattern
Solution 1 Recursion Solution：<br/>
Task: bool match(char* str, char* pattern)<br/>
Parameters:<br/>
         *str: the input string<br/>
         *pattern: the pattern string for matching<br/>
Return value:<br/>       
         true for matching and false for not matching<br/>
