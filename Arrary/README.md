1.问题：  
在一个二维数组中（每个一维数组的长度相同），每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。
请完成一个函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。  

1.Search target in a 2D array  
Task: Find(int target, vector<vector<int>> array)  
Parameter features:  
target:  an integer.    
array:  an 2D array, every element is an integer; In each row/column, element’s value increases from left to right/up to down.  

Solution1 (General_Cases Solution):  
Look up the target in each row by Binary Search, then go through (loop) all the rows.  
T(n) = O(nlogn); S(n) = O(1)  

Solution2 (Special_Featured Solution):  
Look up the target from the bottom-left element;  
If the target is smaller than the point, let the point go up; If the target is larger, let the point go right.  
T(n) = O(n); S(n) = O(1)  

2.问题：  
在一个长度为n的数组里的所有数字都在0到n-1的范围内。 数组中某些数字是重复的，但不知道有几个数字是重复的。  
也不知道每个数字重复几次。请找出数组中任意一个重复的数字。 例如，如果输入长度为7的数组{2,3,1,0,2,5,3}，那么对应的输出是第一个重复的数字2。  
  
2.Find any duplication element in an array  
Task: duplicate(int numbers[], int length, int* duplication)  
Array features: Every element is smaller than int(length-1) in the array. Numbers[length]  
Parameters:  
numbers:    an array of integers   
length:      the length of array numbers  
duplication:  (Output) the duplicated number in the array number  
Return value:  
true if the input is valid, and there are some duplications in the array number; otherwise false  
  
Solution1 (General Hash Solution):  
Use the hash array to count the number of occurrences of the element,   
if the related hash array value >1, which means the occurrence of the element is more than 1, record the element and return true.Otherwise return false.  
T(n) = O(n); S(n) = O(1)  

3.问题：给定一个数组A[0,1,...,n-1],请构建一个数组B[0,1,...,n-1],其中B中的元素B[i] = A[0] * A[1] * ... * A[i-1] * A[i+1] *...* A[n-1]。不能使用除法。（注意：规定B[0] = A[1] * A[2] * ... * A[n-1]，B[n-1] = A[0] * A[1] * ... * A[n-2];）
