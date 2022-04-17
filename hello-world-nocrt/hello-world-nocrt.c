#include <Windows.h>

DWORD WINAPI ThrMain(LPVOID lpParameter)
{
    MessageBox(0, L"Hello, World.", L"hello-world-nocrt", MB_ICONINFORMATION);

    return 0;
}

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
    switch (fdwReason)
    {
    case DLL_PROCESS_ATTACH:
        CreateThread(0, 0, ThrMain, 0, 0, 0);
        break;

    case DLL_THREAD_ATTACH:
        break;

    case DLL_THREAD_DETACH:
        break;

    case DLL_PROCESS_DETACH:
        break;
    }

    return TRUE;
}
