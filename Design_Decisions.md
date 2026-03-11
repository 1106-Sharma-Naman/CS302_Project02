# Design Decisions – Activity Log Project

## 1. Overview
This project is about making an **Activity Log** that stores activities/logs.  
i was supposed to make 2 versions and i tried my best:  
1. Using **array** (`ActivityLogArray.cpp`)  
2. Using **linked list** (`ActivityLogLinked.cpp`)  

It can do add(), remove(), peek(), size(), and isEmpty().  
main.cpp is used to test if everything works.



## 2. Data Structures

### Array Version
- I used array because it is simple and easy to use.  
- I keep track of top activity using `topIndex`.  
- **Good things:** 
  - Peek is fast  
  - Not much memory used if log is small  
- **Bad things:** 
  - Array can get full  
  - Need to resize if too many activities

### Linked List Version
- I used linked list because it can grow any time.  
- I use `head` pointer to store top activity.  
- **Good things:**  
  - No need to resize  
  - Adding/removing at top is fast  
- **Bad things:**  
  - Each node uses extra memory for pointer  
  - Harder to access things in middle

---

## 3. How ADT Works

### `add(Activity a)`
- **Array:** add at `topIndex+1`  
- **Linked list:** add at `head`  
- I put it at top so both versions work same way.

### `remove()`
- Remove last activity added (top).  
- **Array:** decrease `topIndex`  
- **Linked list:** delete `head` node  
- If empty, print message and return empty `Activity`.

### `peek()`
- Show top activity without removing.  
- Works same for both array and linked list.

### `size()`
- Show number of activities.  
- **Array:** `topIndex+1`  
- **Linked list:** use `count` variable.

### `isEmpty()`
- Return true if no activity is in log.  
- Used to check before remove or peek.

---

## 4. Other Decisions
- **Order:** both follow LIFO (last-in first-out)  
- **Error handling:** empty remove or peek prints message and returns empty activity  
- **Memory:**  
  - Array uses normal memory  
  - Linked list deletes all nodes in destructor to avoid memory leak or saving junk data

---

## 5. Testing
- I tested with `main.cpp`:  
  - Add 5 activities  
  - Peek top activity  
  - Remove all activities  
  - Interleave add/remove  
  - Try remove from empty  
- Checked size after each operation.

---

*Made by: Naman Sharma  
*CS302 Project 2*