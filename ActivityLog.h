#ifndef ACTIVITYLOG_H
#define ACTIVITYLOG_H

#include<iostream>
#include<string>
using namespace std;

class Activity{
    public:
        int id;
        string description;
};

class ActivityLog{
    public:
//Constructors
       //  ActivityLog(int id, string description);

// To add the activity
       virtual void add(const Activity& activity)=0;

// To remove the activity
       virtual Activity remove()=0;

// To look at the last element/activity without removing it       
       virtual Activity peek() const=0;

// To check if the log is empty
       virtual bool isEmpty() const=0;

// To get the size of the log
       virtual int size() const=0;

        virtual ~ActivityLog() {};

};

#endif

