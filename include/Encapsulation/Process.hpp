#ifndef PROCESS_HPP
#define PROCESS_HPP

#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdexcept>

class Process {
public:
    Process() : pid(-1) {}

    void forkProcess() {
        pid = fork();
        if (pid < 0) {
            throw std::runtime_error("Fork failed");
        }
    }

    pid_t getPid() const {
        return pid;
    }

    bool isChild() const {
        return pid == 0;
    }

    bool isParent() const {
        return pid > 0;
    }

    void waitForChild() const {
        if (isParent()) {
            waitpid(pid, nullptr, 0);
        }
    }

private:
    pid_t pid;
};

#endif // PROCESS_HPP