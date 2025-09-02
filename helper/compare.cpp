#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // Open the two text files.
    ifstream file1("ans.txt");
    ifstream file2("output.txt"); // expected output

    // Check if the files were opened successfully.
    if (!file1 || !file2) {
        cerr << "Error opening one or both input files." << endl;
        return 1;
    }

    // Declare a file object for result.txt and check if it opened successfully.
    ofstream file3("compare_result.txt");
    if (!file3) {
        cerr << "Error creating the output file." << endl;
        return 1;
    }

    // Initialize variables to track the line number and mismatch status.
    int line = 1;
    bool identical = true; // Flag to check if files are identical
    string line1, line2;

    // Compare the files line by line.
    while (getline(file1, line1) && getline(file2, line2)) {
        if (line1 != line2) {
            // If the lines are not equal, print the line number and mismatch to result.txt.
            file3 << "Line: " << line << "\n";
            file3 << "Expected: " << line1 << endl;
            file3 << "Found: " << line2 << endl;
            identical = false; // Mark files as not identical
        }
        line++;
    }

    // Check if one file has more lines than the other.
    while (getline(file1, line1)) {
        file3 << "Line: " << line << "\n";
        file3 << "Expected: " << line1 << endl;
        file3 << "Found: " << "EOF" << endl;
        identical = false; // Mark files as not identical
        line++;
    }

    while (getline(file2, line2)) {
        file3 << "Line: " << line << "\n";
        file3 << "Expected: " << "EOF" << endl;
        file3 << "Found: " << line2 << endl;
        identical = false; // Mark files as not identical
        line++;
    }

    // If the files are identical, print the message to result.txt
    if (identical) {
        file3 << "SUCCESS: The files are identical." << endl;
    }else{
        file3 << "FAILURE: The files are not identical." << endl;
    }

    // Close the files.
    file1.close();
    file2.close();
    file3.close();

    return 0;
}
