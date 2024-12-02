#include <iostream>
#include<string>
#include"Product.h"
int main() {
    std::cout << "Hello, World!" << std::endl;
    Product product(100, "APPLE");
    std::cout << "Address this product: " << product.set_id(666);
    product.to_string();
    return 0;
}
