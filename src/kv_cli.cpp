#include <iostream>
#include <filesystem>
using namespace std;

void printUsageError() {
    cerr << "ERROR: No Database Path Provided \n"
              << "Usage:\n"
              << "  ./KVStore <database-path>\n\n"
              << "Example:\n"
              << "  ./KVStore database.log\n\n";
    exit(1);
}

void printPathError() {
    cerr << "ERROR: Invalid Path to Database Directory";
    exit(1);
}

int main(int argc, char* argv[]) {
    if (argc < 2) printUsageError();
    else if (filesystem::is_directory(argv[1])) {
        cout << "Yes" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}