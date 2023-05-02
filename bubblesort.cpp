void bubble_sort(int array[], int size)
{
    int max_element, index;

    for (max_element = size - 1; max_element > 0; max_element--)
    {
        for (index = 0; index < max_element; index++)
        {
            if (array[index] > array[index + 1])
            {
                //swap() function
                swap(array[index], array[index + 1]);
            }
        }
    }
}

void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}
