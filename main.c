#include <stdio.h>

#ifdef _WIN32 // Check if using Win32
#include <windows.h>
void printHelloWorld() {
    printf("Hello, world!"\n);
    Sleep(5000);
}
#else
#include <unistd.h> // Assume Unixlike system (Unix, Linux, Darwin)
void printHelloWorld() {
    printf("Hello, world\n");
    sleep(5);
}
#endif

int main() {
    printHelloWorld();
    return 0;
}