#include <iostream>

void reverse_array(int* arr, int size)
{
    int *end = (arr+size-1);
    while (arr < end)
    {
        int temp = *arr; 
        *arr = *end; 
        *end = temp; 
        arr++; 
        end--; 
    }
}


main()
{

int *int_ptr {nullptr};
int_ptr = new int;

std::cout << int_ptr << std::endl;
std::cout << *int_ptr << std::endl;

delete int_ptr;
size_t size{0};
double *temp_ptr {nullptr};
std::cout << "How many Temps?";
std::cin >> size;

temp_ptr = new double[size];

std::cout << temp_ptr << std::endl;

return 0;

int testarr[5] = {1, 6, 2, 5, 6};
int sizearr = sizeof(testarr) / sizeof(testarr[0]);

reverse_array(testarr, sizearr)

}