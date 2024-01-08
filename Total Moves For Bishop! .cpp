/*
Given the position of a Bishop (A, B) on an 8 * 8 chessboard.
Your task is to count the total number of squares that can be visited by the Bishop in one move.
The position of the Bishop is denoted using row and column number of the chessboard.=

Example Input
Input 1:
 A = 4
 B = 4
Example Output
Output 1:
 13
*/
// APPROACH USED:-
/*
There are four possible directions for the bishop to move -
x+ve (say x1)
y+ve (say x2)
x-ve (say x3)
y-ve (say x4)
When the bishop moves diagonally, either of the four directions restricts its movement. For example, if it is going diagonally towards x-ve and y+ve with A=4 and B=4, its movement is restricted because of x-ve direction. So, we find the minimum of the possible movement in each consecutive direction pair.
Then, we add these possible movements to get our answer. */


int Solution::solve(int A, int B) {

 int x1=8-B, x2=8-A, x3=B-1, x4=A-1;

    return (min(x1,x2)+min(x2,x3)+min(x3,x4)+min(x4,x1));
}
