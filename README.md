Write a recursive function that takes 3 integers: A, B, and C.
A: The first number (total number of digits of the integer should not exceed 9)
B: The second number (single digit) that is to be searched from the first integer
C: The third number represents a position of a number.
e.g. SearchDigit(158664,6,1)
The recursive function should return the position of the digit from the right. If there are more than
2 digits found, then the rightmost digits’ position is to be returned. In this case, 2 would be returned.
In the case where the number to be searched is not found or the length of the number exceeds 9,
the function should return -1.
Any kind of loops, static and global variables are strictly not allowed.
