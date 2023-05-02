void SortArray(int array[], int size)
{
    int min_index, min_value;

    for (int start = 0; start < size - 1; start++)
    {
        min_index = start;
        min_value = array[start];
        for (int index = start + 1; index < size; index++)
        {
            if (array[index] < min_value) //for ascending order, replace < with > for descending oder
            {
                min_value = array[index];
                min_index = index;
            }
        }
        //swap
        array[min_index] = array[start];
        array[start] = min_value;
}
