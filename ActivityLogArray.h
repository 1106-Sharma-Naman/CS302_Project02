#ifndef ACTIVITYLOGARRAY_H
#define ACTIVITYLOGAARAY_H
#include "ActivityLog.h"

class ActivityLogArray : public ActivityLog {
    private:
        static const int MAX_SIZE=120;
        Activity activities[MAX_SIZE];
        int topPosition;

    public:
        ActivityLogArray();
        ActivityLogArray(int id, string description);
        void add(const Activity& activity) override;
        Activity remove() override;
        Activity peek() const override;
        bool isEmpty() const override;
        int size() const override;
        ~ActivityLogArray() override;

};
#endif