#include <iostream>
#include <string>
using namespace std;



bool isAnagram(std::string lhs, std::string rhs);



int main() {

   
    cout << "Podaj pierwszy i drugi wyraz:" << '\n';
    std::string lhs, rhs;
    std::cin >> lhs >> rhs;
    
    
    std::cout << (isAnagram(lhs, rhs) ? "Tak" : "Nie");
    return 0;

}

bool isAnagram(std::string lhs, std::string rhs) {
    if (lhs.size() != rhs.size()) {
        return false;
    }
    
    for (int i = 0; i < lhs.size() - 1; ++i) {
        for (int j = 0; j < lhs.size() - 1; ++j) {
            if (lhs[j + 1] < lhs[j]) {
                std::swap(lhs[j + 1], lhs[j]);
            }
            if (rhs[j + 1] < rhs[j]) {
                std::swap(rhs[j + 1], rhs[j]);
            }
        }
    }
   

    if (lhs == rhs) {
        return true;
    }
    else {
        return false;
    } 
}