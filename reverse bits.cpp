unsigned int Solution::reverse(unsigned int A) {
int res, C, ans = 0;
for(int i = 0; i< 32; i++)
{
C = A >> i;
res = C & 1;
ans = ans << 1 | res;
}
return ans;
}
