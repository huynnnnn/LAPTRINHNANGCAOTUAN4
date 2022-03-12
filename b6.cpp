double calculate (double num1, char operat, double num2)
{
    double ans = 0;
    if(operat == '+')
    {
        ans = num1 + num2;
        return ans;
    }
    if(operat == '-')
    {
        ans = num1 - num2;
        return ans;
    }
    if(operat == '*')
    {
        ans = num1 * num2;
        return ans;
    }
    if(operat == '/')
    {
        ans = num1 / num2;
        return ans;
    }
}
