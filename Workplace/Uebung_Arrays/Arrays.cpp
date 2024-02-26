#include <iostream>

int *applyall(const int *const arr1, size_t size1, const int *const arr2, size_t size2)
{
    int arr_all[size1 * size2];
    int size_arr_all = sizeof(arr_all) / sizeof(arr_all[0]);

    int position = 0;

    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
            {
                arr_all[k] = arr1[i] * arr2[j];
                position++;
            }
    }

    return arr_all;
}

int print_all(int *const arr, size_t size)
{
    for(int l = 0; l < size; l++)
    {
       std::cout << arr[l] << std::endl;
    }
    return 0;
}

int main()
{
    int array1[] = {1, 2, 3, 4, 5};
    size_t size_array1 = sizeof(array1) / sizeof(array1[0]);
    int array2[] = {10, 20, 30};
    size_t size_array2 = sizeof(array2) / sizeof(array1[0]);

    int *ptr_all = applyall(array1, size_array1, array2, size_array2);

    return 0;
}