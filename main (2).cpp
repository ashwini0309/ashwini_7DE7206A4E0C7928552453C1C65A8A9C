#include <iostream>
#include <vector>
#include <string>

std::vector<int> linear_search_product(const std::vector<std::string>& products, const std::string& target) {
    std::vector<int> indices;
    for (int i = 0; i < products.size(); i++) {
        if (products[i] == target) {
            indices.push_back(i);
        }
    }
    return indices;
}

int main() {
    std::vector<std::string> products = {"Apple", "Banana", "Apple", "Orange", "Apple"};
    std::string target = "Apple";
    
    std::vector<int> result = linear_search_product(products, target);
    
    if (result.size() > 0) {
        std::cout << "Product found at indices: ";
        for (int i : result) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "Product not found." << std::endl;
    }

    return 0;
}
