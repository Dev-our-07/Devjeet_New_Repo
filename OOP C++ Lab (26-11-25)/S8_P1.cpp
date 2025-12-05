/*Write a C++ program that asks the user to enter the name of a text file. The program 
should open the file using ifstream, read its contents line by line using getline(), and 
display the entire content on the screen. If the file does not exist or cannot be opened, 
display an appropriate error message. */

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main() 
{   // Ask user for file name
    string filename;
    cout << "Enter the name (or path) of the text file: ";
    getline(cin >> ws, filename); // read whole line (supports spaces)

    // Try opening the file as provided, then try common fallback locations
    ifstream file;
    vector<string> tried;

    auto try_open = [&](const string &path) -> bool {
        tried.push_back(path);
        file.open(path);
        return file.is_open();
    };

    bool opened = try_open(filename);
    if (!opened) {
        // Common fallback: file might be in the local "output" folder of the lab
        string fallback1 = "OOP C++ Lab (26-11-25)\\output\\" + filename;
        string fallback2 = "OOP C++ Lab (26-11-25)/output/" + filename;
        string fallback3 = "output\\" + filename;
        string fallback4 = "output/" + filename;
        opened = try_open(fallback1) || try_open(fallback2) || try_open(fallback3) || try_open(fallback4);
    }

    if (!opened) {
        cerr << "Error: Unable to open file '" << filename << "'. Tried the following paths:\n";
        for (const auto &p : tried) cerr << "  " << p << "\n";
        return 1;
    }

    // Read and display file contents
    std::string line;
    while (std::getline(file, line)) {
        std::cout << line << std::endl;
    }

    // Close the file
    file.close();

    return 0;
}