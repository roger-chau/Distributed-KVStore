#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
    for (int i = 0; i < argc; ++i) { // Print CLI arguments
        std::cout << argv[i] << std::endl;
    }

    return 0;
}