# Activity Log Project – CS302 Project 2

## 1. Project Overview
This project is about making an **Activity Log** that can store and manage activities.  
I made two versions: one using **array** and one using **linked list**.  

The log can do these things:  
- `add()` – add new activity  
- `remove()` – remove top activity  
- `peek()` – see top activity without removing  
- `size()` – see how many activities  
- `isEmpty()` – check if log is empty  

`main.cpp` is used to test everything.



## 2. Files
- `ActivityLog.h` – contains the interface for the log  
- `ActivityLogArray.cpp` – array version  
- `ActivityLogLinked.cpp` – linked list version  
- `main.cpp` – driver program for testing  
- `Makefile` – to compile and run project  
- `ADT_Design.md` – design ideas  
- `Design_Decisions.md` – explains my design choices

---

## 3. How to Compile and Run

### Using Makefile
- To compile and run **array version**:
```bash
make run-array

- To compile and run **Linked List Version**:
make run-link

- To clean executive files
make clean
