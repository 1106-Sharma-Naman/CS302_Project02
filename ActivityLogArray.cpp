#include "ActivityLogArray.h"
#include <iostream>
using namespace std;

// Default constructor
ActivityLogArray::ActivityLogArray() {
   topPosition = -1;
}

// Adds a new log
void ActivityLogArray::add(const Activity& activity){
    if(topPosition >= MAX_SIZE-1){
        cout << "Log is full.\n";
        return;
    }
    topPosition++;
    activities[topPosition] = activity;
}

//removed the the most recently added log
Activity ActivityLogArray::remove(){
    if(isEmpty()){
        cout<<"Log is empty.\n";
        return Activity{};

    }
    Activity removed = activities[topPosition];
    topPosition--;
    return removed;
}

// View the most recently added activity log without deleting it
Activity ActivityLogArray::peek() const{
    if(isEmpty()){
        cout<<"Log is empty.\n";
        return Activity{};
    }
    return activities[topPosition];
}

// Tells you if the log is empty
bool ActivityLogArray::isEmpty() const{
    return topPosition == -1;
}

// Returns the number of activities
int ActivityLogArray::size() const{
    return topPosition+1;
}
