#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string sourceFile = "D:\\HITS\\OOPS\\Program\\Source.docx";
    string destinationFile = "D:\\HITS\\OOPS\\Program\\destination.docx";
    char choice;

    cout << "Choose operation:\n";
    cout << "1. Copy (Overwrite destination file)\n";
    cout << "2. Append (Add to destination file)\n";
    cout << "Enter your choice (1/2): ";
    cin >> choice;
    cin.ignore();  
    
    ifstream source(sourceFile);
    if (!source) {
        cout << "Error opening source file!" << endl;
        return 1;
    }

    ofstream destination;
    if (choice == '1') {
        destination.open(destinationFile, ios::trunc);  // Overwrite mode
    } else if (choice == '2') {
        destination.open(destinationFile, ios::app);    // Append mode
    } else {
        cout << "Invalid choice! Exiting..." << endl;
        return 1;
    }

    if (!destination) {
        cout << "Error opening destination file!" << endl;
        return 1;
    }

 
    string line;
    while (getline(source, line)) {
        destination << line << endl;
    }

    source.close();
    destination.close();

    cout << "File operation successful!" << endl;
    return 0;
}
