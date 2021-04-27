#include <iostream>
#include <windows.h>
#include <thread>

using namespace std;

int main()
{
	BYTE ShellCode[5] = { 0x68 };
	__asm
	{
		lea eax,ShellCode
		push eax
		ret
	}
}