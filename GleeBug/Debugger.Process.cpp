#include "Debugger.Process.h"

namespace GleeBug
{
    ProcessInfo::ProcessInfo(HANDLE hProcess, uint32 dwProcessId, uint32 dwMainThreadId) :
        hProcess(hProcess),
        dwProcessId(dwProcessId),
        dwMainThreadId(dwMainThreadId),
        thread(nullptr),
        systemBreakpoint(false)
    {
        for (int i = 0; i < 4; i++)
            hardwareBreakpoints[i].enabled = false;
    }
};