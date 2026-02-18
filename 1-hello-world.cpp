#include <print>
#include <vector>
#include <ranges>

int main() {
    std::vector v = {1, 2, 3, 4, 5};
    
    // C++23 语法：直接打印到终端，且使用 ranges
    std::print("Hello C++23!\n");
    
    for (int i : v | std::views::reverse) {
        std::print("{} ", i);
    }
    
    return 0;
}