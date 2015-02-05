
#include <stdlib.h>
#include "console.h"

static int do_at (int argc, const char* argv[])
{
	console_printf("OK %s\n", system_get_sdk_version());
	return 0;
}

CONSOLE_CMD(AT, 1, 10, 
	    do_at, NULL, NULL, 
	    "says OK"
);
