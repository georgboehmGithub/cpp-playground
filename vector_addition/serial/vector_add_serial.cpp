#include <vector>
#include <iostream>

template <typename Container>
void printContainer(const Container& container, std::string sep = " ") {
    for (auto elem : container) {
        std::cout << elem << sep;
}
    std::cout << std::endl;
}

template <typename Container>
void mapContainer(const Container& a, const Container& b, Container& result) {
    for (auto ait = a.cbegin(), bit = b.cbegin(); ait != a.cend() && bit != b.cend(); ++ait, ++bit) {
        result.push_back(*ait + *bit);
    }
}

int main() {
    std::vector<int> a = {1, 2, 3, 4, 5};
    std::vector<int> b = {1, 2, 3, 4, 5};
    std::vector<int> c;

    mapContainer<std::vector<int>>(a, b, c);
    printContainer<std::vector<int>>(c);
}