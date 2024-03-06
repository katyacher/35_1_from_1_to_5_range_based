#include <iostream>
#include <vector>

int main(int, char**){
    std::cout << "Hello, from 35_1_from_1_to_5_range_based!\n";

    std::vector<int> v = {1,2,3,4,5};
    for(auto &item: v)
        std::cout << item << " ";

    std::cout << std::endl;

    for(auto &item: {1,2,3,4,5})
        std::cout << item << " ";

    std::cout << std::endl;

    for(auto &item: std::initializer_list<int>({1,2,3,4,5}))
       std::cout << item << " ";

    std::cout << std::endl;

    return 0;
}
