#include "TaskManager.hpp"
#include <iostream>

// Task-Specific Functions

void addTask() {
    
}

void TaskManager::removeTask(int taskId) {}

Task TaskManager::getTask(int taskId) const {}

void TaskManager::UpdateTask() {}

void TaskManager::listTasks() {}

void TaskManager::listTasksByStatus() {}

void TaskManager::listTasksByPriority() {}

void TaskManager::listTasksByAsignee() {}

void TaskManager::changeTaskStatus() {}

void TaskManager::assignTask() {}

void TaskManager::setPriority() {}

Priority TaskManager::getPriority(int taskId) const {}

// Team-Member Functions
void TaskManager::createTeamMember() {}

void TaskManager::removeTeamMember() {}

TeamMember TaskManager::getTeamMember(int memberId) const {}

void TaskManager::setRole() {}

// Utility Functions
void TaskManager::searchTasks(std::string keyword) {}

int main() {
    return 0;
}