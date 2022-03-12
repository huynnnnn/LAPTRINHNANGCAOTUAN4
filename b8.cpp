#define For(i, x, y) for(int i = x; i <= y; i++)
void readArray(int a[], int n)
{
    For(i, 1, n)
        cin >> a[i];
    return;
}
bool compareArray(int array1[], int array2[], int n)
{
    For(i, 1, n)
        if(array1[i] != array2[i])
            return false;
    return true;
}
