#include "ActivityLog.h"
#include <iostream>
#include <string>
using namespace std;

int main(){

ActivityLog log;

//Creating Activities

Activity A1{1, "Start the game"};
Activity A2{2, "Player moves"};
Activity A3{3, "Enenmy is attacking"};
Activity A4{4, "Player is healed"};
Activity A5{5, "Saved"};

cout << "=== Adding Activities ===\n";

// adding logs
log.add(A1);
log.add(A2);
log.add(A3);
log.add(A4);
log.add(A5);

cout << "Size after adding: " << log.size() << endl << endl;

// Peek
    if (!log.isEmpty()) {
        Activity top = log.peek();
        cout << "Peek activity (not for removal): " << top.description << endl;
        cout << "Size after peek: " << log.size() << endl << endl;
    }

    // Remove some activities
    cout << "=== Removing Two Activities ===\n";
    if (!log.isEmpty()) {
        Activity removed = log.remove();
        cout << "Removed: " << removed.description<< endl;
    }
    if (!log.isEmpty()) {
        Activity removed = log.remove();
        cout << "Removed: " << removed.description << endl;
    }

    cout << "Size after removing two logs: " << log.size() << endl << endl;

    // Interleaved operations
    cout << "=== Interleaved Operations ===\n";
    Activity a6{6, "Found treasure"};
    log.add(a6);
    cout << "Added: " << a6.description << endl;
    if (!log.isEmpty()) {
        Activity removed = log.remove();
        cout << "Removed: " << removed.description << endl;
    }

    cout << "Size after interleaved operations: " << log.size() << endl << endl;

    // Remove remaining activities
    cout << "=== Removing Remaining Activities ===\n";
    while (!log.isEmpty()) {
        Activity removed = log.remove();
        cout << "Removed: " << removed.description << endl;
    }
    cout << "Size after removing all: " << log.size() << endl << endl;

    // Test removing from empty
    cout << "=== Removing from Empty Log ===\n";
    log.remove(); // should handle gracefully

    return 0;

}