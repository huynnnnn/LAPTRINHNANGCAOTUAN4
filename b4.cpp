#define For(i, x, y) for(int i = x; i <= y; i++)
long long int factorial(int n)
{
    long long ans = 1;
    For(i, 2, n)
        ans = ans*(long long)i;
    return ans;
}
