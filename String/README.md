4 String Questions and Solutions
====

### 1.问题:<br/>
### 请实现一个函数，将一个字符串中的每个空格替换成“%20”。例如，当字符串为We Are Happy.则经过替换之后的字符串为We%20Are%20Happy。

1.Replace space to %20 in a string <br/>
Task: replaceSpace(char *str,int length)<br/>
Parameters:<br/>
         *str: the input string<br/>
         length: the length of the input string<br/>
target:  an new string.<br/> 

Solution1 (General_Cases Solution):<br/>
Shift the elements and replace the space with %20 from the end to the beginning.<br/>
T(n) = O(n); S(n) = O(1)<br/>
