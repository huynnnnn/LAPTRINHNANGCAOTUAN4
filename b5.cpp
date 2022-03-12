#define For(i, x, y) for(int i = x; i <= y; i++)
bool isPrime (int number)
{
    if (number < 2)
        return 0;
    int n = sqrt(number);
    For(i, 2, n)
        if(number % i == 0)
            return false;
    return true;
}
