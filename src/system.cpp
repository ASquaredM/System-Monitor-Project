#include "system.h"

#include <unistd.h>

#include <cstddef>
#include <set>
#include <string>
#include <vector>

#include "linux_parser.h"
#include "process.h"
#include "processor.h"

using std::set;
using std::size_t;
using std::string;
using std::vector;

// Return the system's CPU
Processor& System::Cpu() { return cpu_; }

// Return a container composed of the system's processes
vector<Process>& System::Processes() { return processes_; }

// Return the system's kernel identifier (string)
// exists in /proc/version
std::string System::Kernel() { return LinuxParser::Kernel(); }

// Return the system's memory utilization
// exists in /proc/meminfo
float System::MemoryUtilization() { return LinuxParser::MemoryUtilization(); }

// Return the operating system name
// exists in /etc/os-release
std::string System::OperatingSystem() { return LinuxParser::OperatingSystem(); }

// Return the number of processes actively running on the system
// exists in /proc/stat
int System::RunningProcesses() { return LinuxParser::RunningProcesses(); }

// Return the total number of processes on the system
// exists in /proc/stat
int System::TotalProcesses() { return LinuxParser::TotalProcesses(); }

// Return the number of seconds since the system started running
// exists in /proc/uptime
long int System::UpTime() { return LinuxParser::UpTime(); }