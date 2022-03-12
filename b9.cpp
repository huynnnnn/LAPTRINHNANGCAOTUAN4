#define For(i, x, y) for(int i = x; i < y; i++)
void sort(float array[], int size, bool isAscending)
{
    sort(array, array + size );
    if(isAscending == false)
        For(i, 0, size/2)
            swap(array[i], array[size - 1 - i]);
}
