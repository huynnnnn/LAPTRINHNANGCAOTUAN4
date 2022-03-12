void printArrowR(int n)
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j < i; j++)
            cout << "  ";
        for(int j = i; j <= n; j++)
            cout << '*';
        cout <<endl;
    }
    for(int i = 1; i < n; i++)
    {
        for(int j = n - i - 1; j > 0; j--)
            cout << "  ";
        for(int j = 1; j <= i + 1; j++)
            cout << '*';
        cout << endl;
    }
}
void printArrowL(int n)
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = n - i; j > 0; j--)
            cout << ' ';
        for(int j = n - i + 1; j > 0; j--)
            cout <<"*";
        cout << endl;
    }
    for(int i = 1; i < n; i++)
    {
        for(int j = 1; j <= i; j++)
            cout << ' ';
        for(int j = 0; j <= i; j++)
            cout << '*';
        cout << endl;
    }
}
void printArrow(int n, bool left)
{
    if(left == true)
        printArrowL(n);
    else
        printArrowR(n);
}
