// Question - https://www.hackerrank.com/contests/day-23constructors-and-destructors/challenges/student-performance-analyzer-1/problem

#include <bits/stdc++.h>
using namespace std;

class Task
{
public:
    string taskId;
    int priority;

    Task(string id, int pri)
    {
        taskId = id;
        priority = pri;
    }
};

int main()
{
    int n;
    cin >> n;

    vector<Task> tasks;

    for (int i = 0; i < n; ++i)
    {
        string id;
        int pri;
        cin >> id >> pri;
        tasks.push_back(Task(id, pri));
    }

    stable_sort(tasks.begin(), tasks.end(), [](const Task &a, const Task &b)
                { return a.priority > b.priority; });

    for (auto &task : tasks)
    {
        cout << task.taskId << " " << task.priority << endl;
    }

    return 0;
}
