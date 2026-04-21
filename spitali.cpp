#include <iostream>
#include <queue>
#include <thread>
#include <chrono>

queue<string> patients;

patients.push("Patient A");
patients.push("Patient B");
patients.push("Patient C");

void processManual(queue<string> q) {
    while (!q.empty()) {
        cout << "Processing: " << q.front() << endl;
        q.pop();
        this_thread::sleep_for(chrono::milliseconds(800));
    }
}