/*
Regular Bracket Sequence 

- (,) and the bracket sequence is meaningful 
- for every '(' we always have a corresponding ')' that is it's unqiue pair 
- we can use one and plus to transform into meaningful arthemetic statements 


Example:
RBS :
((())()()())

not RBS :
(()())(


method to check if it is RBS :
( - +1 and ) as -1

1 1 -1 -1 (-1) 1
1 2  1  0  (-1) 0

*/