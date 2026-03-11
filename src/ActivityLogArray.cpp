#include "ActivityLog.h"
#include <iostream>
using namespace std;

//size of the log
const int MAX_SIZE = 120; 

Activity activities[MAX_SIZE];
int topPosition =-1;

// Default constructor
ActivityLog::ActivityLog() {
   topPosition = -1;
}

// Adds a new log
void ActivityLog::add(const Activity& activity){
    if(topPosition >= MAX_SIZE-1){
        cout << "Log is full.\n";
        return;
    }
    topPosition++;
    activities[topPosition] = activity;
}

//removed the the most recently added log
Activity ActivityLog::remove(){
    if(isEmpty()){
        cout<<"Log is empty.\n";
        return Activity{};

    }
    Activity removed = activities[topPosition];
    topPosition--;
    return removed;
}

// View the most recently added activity log without deleting it
Activity ActivityLog::peek() const{
    if(isEmpty()){
        cout<<"Log is empty.\n";
        return Activity{};
    }
    return activities[topPosition];
}

// Tells you if the log is empty
bool ActivityLog::isEmpty() const{
    return topPosition == -1;
}

// Returns the number of activities
int ActivityLog::size() const{
    return topPosition+1;
}
