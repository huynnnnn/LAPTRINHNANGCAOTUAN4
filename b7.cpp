#define For(i, x, y) for(int i = x; i <= y; i++)
void readArray(int a[], int n)
{
    For(i, 1, n)
        cin >> a[i];
    return;
}
void printArray(int a[], int n)
{
    For(i, 1, n)
        cout << a[i] << ' ';
    return;
}
