#include <psp2/kernel/processmgr.h>

#include "debugScreen.h"

#define printf psvDebugScreenPrintf

int main() {
	// Scale font to make it easier to read
	auto* font = psvDebugScreenScaleFont2x(psvDebugScreenGetFont());
	psvDebugScreenSetFont(font);

	// Initialize debug screen
	psvDebugScreenInit();

	// Print a message
	printf("Vita hello world test\n");
	sceKernelDelayThread(3 * 1'000'000);

	// Count down to exit
	printf("Exiting in...\n");
	for (auto i = 3; i > 0; --i) {
		printf("%i\n", i);	
		sceKernelDelayThread(1'000'000);
	}

	psvDebugScreenFinish();

	return 0;
}
