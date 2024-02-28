#include <iostream>

int *applyall(const int *const arr1, size_t size1, const int *const arr2, size_t size2)
{
    int *arr_all {nullptr};
    arr_all = new int[size1 * size2];

    int position = 0;

    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
            {
                arr_all[position] = arr1[i] * arr2[j];
                position++;
            }
    }
    return arr_all;
}

int print_all(const int *const arr, size_t size)
{
    std::cout << "[ ";
    for(int m = 0; m < size; m++)
    {
       std::cout << arr[m] << " ";
    }
    std::cout << "]";
    std::cout << std::endl;
    return 0;
}

int main()
{
    int array1[] = {1, 7, 37, 0, 5};
    size_t size_array1 = sizeof(array1) / sizeof(array1[0]);
    int array2[] = {10, 20, 30};
    size_t size_array2 = sizeof(array2) / sizeof(array1[0]);

    std::cout << "Array 1\n";
    print_all(array1, size_array1);

    std::cout << "Array 2\n";
    print_all(array2, size_array2);

    int *ptr_all = applyall(array1, size_array1, array2, size_array2);
    size_t size_all = size_array1 * size_array2;

    std::cout << "Array All\n";
    print_all(ptr_all, size_all);
    delete ptr_all;

    return 0;
}