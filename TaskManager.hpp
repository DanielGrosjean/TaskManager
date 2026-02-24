#ifndef TASK_MANAGER_HPP
#define TASK_MANAGER_HPP

#include <string>

using namespace std;

// ENUMS

enum Status {
    Todo,
    InProgress,
    Finished
};

enum Priority {
    Low,
    Medium,
    High
};

enum Role {
    Manager,
    SeniorEmployee,
    JuniorEmployee
};

// STRUCTS

struct Task {
    int id;
    string title;
    string description;
    Status status = Todo;
    Priority priorityLevel;
    TeamMember assignee;
};

struct TeamMember {
    int id;
    string name;
    Role role = JuniorEmployee;
};

// CLASSES

class TaskManager {

};

#endif