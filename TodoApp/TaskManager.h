#pragma once
#include "Task.h"
#include <vector>

class TaskManager {
private:
    std::vector<Task> tasks;

public:
    void addTask(const Task& task);
    void removeTask(size_t index);
    Task* getTask(size_t index);
    const std::vector<Task>& getAllTasks() const;
};
