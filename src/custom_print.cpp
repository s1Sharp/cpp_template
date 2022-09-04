#include "custom_print.h"

void print_hello_world(int8_t &ref_int) {
    ref_int++;
    std::cout << "Hello World\n";
}