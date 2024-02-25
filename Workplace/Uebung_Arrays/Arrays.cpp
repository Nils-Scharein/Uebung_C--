#include <iostream>

int* applyall(int arr1, size_t size1, int arr2, size_t size2)
{
    int *arr_all[size1 * size2];
    for (int i = 0; i < sizeof(*arr_all) / sizeof(*arr_all[0]); i++)
    {
        std::coout 

    }


    return *arr_all;
}

int print_all(int arr_all, size_t size)
{
return 0;

}


int main()
{
int array1[] = {1, 2, 3, 4, 5};
size_t size_array1 = sizeof(array1) / sizeof(array1[0]);
int array2[] = {10, 20, 30};
size_t size_array2 = sizeof(array2) / sizeof(array1[0]);

std::cout << (array1, size_array1, array2, size_array2);


return 0;
}