#pragma once
#include <string>

enum class TaskStatus {
    New,
    InProgress,
    Done,
    Canceled
};

enum class TaskPriority {
    Low,
    Normal,
    High
};

struct Task {
    std::string title;
    TaskStatus status;
    int progress; // 0–100
    TaskPriority priority;

    Task()
        : title(""), status(TaskStatus::New), progress(0), priority(TaskPriority::Normal) {}
};
