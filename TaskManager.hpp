#ifndef TASK_MANAGER_HPP
#define TASK_MANAGER_HPP

#include <string>
#include <vector>

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

struct TeamMember {
    int id;
    std::string name;
    Role role = JuniorEmployee;
};

struct Task {
    int id;
    std::string title;
    std::string description;
    Status status = Todo;
    Priority priorityLevel;
    TeamMember assignee;
};

// CLASSES

class TaskManager {
    public:

    private:
        // Variables & Data Structures
        int nextId = 0;
        std::vector<Task> tasks;

        // Task-Specific Functions
        void addTask();
        void removeTask(int taskId);
        Task getTask(int taskId) const;
        void UpdateTask();
        void listTasks();
        void listTasksByStatus();
        void listTasksByPriority();
        void listTasksByAsignee();
        void changeTaskStatus();
        void assignTask();
        void setPriority();
        Priority getPriority(int taskId) const;

        // Team-Member Functions
        void createTeamMember();
        void removeTeamMember();
        TeamMember getTeamMember(int memberId) const;
        void setRole();

        // Utility Functions
        void searchTasks(std::string keyword);
};

#endif