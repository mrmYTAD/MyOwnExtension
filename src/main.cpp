#include "include.h"

void readFile() {

	//

}

void writeFile() {

	//

}

LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam) {

	//

	return DefWindowProc(hwnd, msg, wParam, lParam);
}

int main(int argc, char* argv[], char* env[]) {

	HINSTANCE hInstance = GetModuleHandle(NULL);
	LPSTR lpCmdLine = NULL;

	return WinMain(hInstance, NULL, lpCmdLine, SW_SHOW);
}

int WINAPI WinMain(

	_In_ HINSTANCE hInstance,
	_In_opt_ HINSTANCE hPrevInstance,
	_In_ LPSTR lpCmdLine,
	_In_ int nCmdShow

) {

	int argc;
	char* passedarg;
	LPWSTR* argv = CommandLineToArgvW(GetCommandLineW(), &argc);
	if (argc >= 2) {
		char buffer[1024];
		wcstombs(buffer, argv[1], sizeof(buffer));
		passedarg = buffer;
	}

	return 0;

}