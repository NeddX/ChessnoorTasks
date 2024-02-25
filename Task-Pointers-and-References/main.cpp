#include <iostream>

int main()
{
    int my_int = 420;
    int* int_ptr = &my_int;
    int& int_ref = my_int;
    std::cout << "Base number: " << my_int << std::endl;

    *int_ptr = 1337;
    std::cout << "After manipulating via a pointer: " << *int_ptr << std::endl;

    int_ref = 69;
    std::cout << "After manipulating via a reference: " << int_ref << std::endl;

    return 0;
}
