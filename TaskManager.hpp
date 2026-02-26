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
    Priority priority = Medium;
    std::optional<TeamMember> assignee;

    // Constructor
    Task (
        int id_, 
        std::string title_, 
        std::string description_, 
        Priority priority_,
        std::optional<TeamMember> assignee_ = std::nullopt) :
        id(id_),
        title(std::move(title_)),
        description(std::move(description_)),
        status(Todo),
        priority(priority_),
        assignee(std::move(assignee_))
        {}
};

// CLASSES

class TaskManager {
    public:

    private:
        // Variables & Data Structures
        int nextId = 0;
        std::vector<Task> tasks;

        // Task-Specific Functions
        void addTask(const std::string title, const std::string description, Priority priority, std::optional<TeamMember> assignee);
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