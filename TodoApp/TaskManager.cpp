#include "TaskManager.h"

void TaskManager::addTask(const Task& task) {
    tasks.push_back(task);
}

void TaskManager::removeTask(size_t index) {
    if (index < tasks.size()) {
        tasks.erase(tasks.begin() + index);
    }
}

Task* TaskManager::getTask(size_t index) {
    if (index < tasks.size()) {
        return &tasks[index];
    }
    return nullptr;
}

const std::vector<Task>& TaskManager::getAllTasks() const {
    return tasks;
}
