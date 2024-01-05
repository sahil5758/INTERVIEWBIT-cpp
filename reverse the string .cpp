/*You are given a string A of size N.
Return the string A after reversing the string word by word.
NOTE:
A sequence of non-space characters constitutes a word.
Your reversed string should not contain leading or trailing spaces, even if it is present in the input string.
If there are multiple spaces between words, reduce them to a single space in the reversed string.

Example Input
Input 1:
    A = "the sky is blue"
Input 2:
    A = "this is ib"


Example Output
Output 1:
    "blue is sky the"
Output 2:
    "ib is this"

*/

string Solution::solve(string A) {
        int n = A.size();
string res ;
int i = 0, j = 0;
while(i<n){
string str = "";
//j = i;
while(i<n && A[i]==' '){
// tmp+=A[j];
i++;
}
j = i+1;
while(j<n && A[j]!=' '){
j++;
}
str = A.substr(i,j-i);
if(res.size()==0&&str.size()) res = str;
else if(str.size()) res = str+ " " + res;
i = j+1;
}
return res;
     
    
}
