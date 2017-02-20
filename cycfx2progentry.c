#include <stdlib.h>
#include <stdarg.h>
#include "cycfx2prog.h"

#ifdef __ANDROID__
#include "logger.h"
#endif

void cycfx2prog(int argc, ...)
{
	va_list ap;
	va_start(ap, argc);
	const int MAXARGS = 16;
	char *a[MAXARGS];
	int j;
	for (j = 0; j<MAXARGS; j++)  
		a[j] = NULL;
	int i;
	for (i = 0; i < argc; i++)
	{
		a[i] = va_arg(ap, char *);
		LOGI("%s: cycfx2prog parameter %d: %s!", __PRETTY_FUNCTION__, i, a[i]);
	}
	//LOGI("%s: cycfx2prog: %s!", __PRETTY_FUNCTION__, cycfx2progmain(argc, a) ? "error!" : "successfully!");
	va_end(ap);
}
