#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <iomanip>

using namespace std;


class GroceryTracker {
private:
    map<string, int> itemFrequencies;

public:
    // Load and process input file
    GroceryTracker(const string& filename) {
        ifstream inFile(filename);
        string item;

        while (inFile >> item) {
            ++itemFrequencies[item];
        }
        inFile.close();
        SaveFrequencyData("frequency.dat");
    }

    // Saves  frequencies to file
    void SaveFrequencyData(const string& outFile) {
        ofstream out(outFile);
        for (const auto& pair : itemFrequencies) {
            out << pair.first << " " << pair.second << endl;
        }
        out.close();
    }

    // Return the frequency of  items
    int GetItemFrequency(const string& item) const {
        auto it = itemFrequencies.find(item);
        return (it != itemFrequencies.end()) ? it->second : 0;
    }

    // Print  items and frequencies
    void PrintFrequencies() const {
        for (const auto& pair : itemFrequencies) {
            cout << pair.first << " " << pair.second << endl;
        }
    }

    // Print histogram
    void PrintHistogram() const {
        for (const auto& pair : itemFrequencies) {
            cout << setw(15) << left << pair.first << " ";
            for (int i = 0; i < pair.second; ++i) {
                cout << "*";
            }
            cout << endl;
        }
    }
};

void ShowMenu() {
    cout << "\n--- Corner Grocer Menu ---\n";
    cout << "1. Search for item frequency\n";
    cout << "2. Print item frequencies\n";
    cout << "3. Print histogram\n";
    cout << "4. Exit\n";
    cout << "Choose an option: ";
}

int main() {
    GroceryTracker tracker("CS210_Project_Three_Input_File.txt");

    int choice = 0;
    string searchItem;

    do { // use a do while to evaluate the user input and catch any errors
        ShowMenu();

        // Validate integer input
        while (!(cin >> choice)) {
            cout << "Invalid input. Please enter a number between 1 and 4: ";
            cin.clear(); // Clear error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
        }

        switch (choice) {
        case 1:
            cout << "Enter item name: ";
            cin >> searchItem;
            if (tracker.GetItemFrequency(searchItem) > 0) {
                cout << searchItem << " was purchased "
                    << tracker.GetItemFrequency(searchItem) << " time(s).\n";
            }
            else {
                cout << searchItem << " was not found in the purchase records.\n";
            }
            break;

        case 2:
            cout << "\nItem Frequencies:\n";
            tracker.PrintFrequencies();
            break;

        case 3:
            cout << "\nItem Histogram:\n";
            tracker.PrintHistogram();
            break;

        case 4:
            cout << "Exiting program.\n";
            break;

        default: //handle and invaild choice
            cout << "Invalid option. Please choose between 1 and 4.\n";
        }

    } while (choice != 4);

    return 0;
}