#include <iostream>

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


}