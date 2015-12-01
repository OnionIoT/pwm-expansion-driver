#include <oled-exp.h>

uint8_t testIMG[] = {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x1c,0x12,0x13,0x11,0x11,0x11,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x11,0x11,0x11,0x11,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x09,0x09,0x01,0x05,0x05,0x01,0x03,0x03,0x00,0x00,0x00,0x01,0x01,0x00,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x00,0x08,0x18,0x18,0x18,0x30,0x30,0x30,0x20,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x20,0x30,0x30,0x30,0x18,0x18,0x08,0x08,0x00,0x10,0x10,0x11,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x00,0x01,0x01,0x00,0x00,0x00,0x02,0x03,0x01,0x05,0x05,0x05,0x09,0x09,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x11,0x11,0x11,0x11,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x11,0x11,0x13,0x12,0x1e,0x0c,0x00,0x00,0x00,0x00,0x00,0x80,0xc0,0xe0,0x20,0x38,0x1c,0x14,0x16,0x13,0x93,0x93,0x92,0x92,0x92,0x82,0x22,0x26,0x24,0x24,0x24,0x24,0x24,0x24,0x29,0x29,0x09,0x49,0x48,0x52,0xd2,0x32,0x1c,0x04,0x07,0xc1,0x61,0x30,0x1c,0x0c,0x06,0x06,0x02,0x03,0x07,0x03,0x0f,0x0f,0x0f,0x1f,0x1f,0x3f,0x3f,0x7b,0x78,0x70,0xf0,0xe0,0xe1,0xe3,0xe7,0xe3,0xe3,0xe0,0xf0,0x70,0x78,0x7c,0x7f,0x3f,0x3f,0x1f,0x0f,0x0f,0x07,0x07,0x01,0x07,0x07,0x02,0x07,0x06,0x0c,0x1c,0x30,0x60,0xc1,0xc7,0x04,0x1c,0x36,0xf2,0x52,0x4a,0x49,0x09,0x29,0x29,0x20,0x24,0x24,0x24,0x24,0x24,0x26,0x22,0xa2,0x92,0x92,0x92,0x93,0x93,0x13,0x12,0x14,0x1c,0x38,0x30,0x60,0xc0,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0xc0,0x40,0x40,0x70,0x70,0x50,0x58,0x48,0x88,0x8c,0x9e,0x92,0x92,0x12,0x22,0x27,0x25,0x45,0x49,0x09,0x81,0x93,0x02,0x24,0xcc,0xc9,0x71,0x72,0x34,0x39,0x33,0x1e,0x3e,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x81,0xc7,0xe7,0xe7,0xc7,0x03,0x00,0x00,0x10,0x38,0xfc,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x3c,0x1c,0x32,0x39,0x34,0x66,0x73,0xd9,0xc9,0x24,0x26,0x13,0x91,0x89,0x49,0x41,0x25,0x27,0x22,0x12,0x12,0x92,0x9e,0x8c,0x8c,0xc8,0x58,0x50,0x70,0x70,0x60,0x40,0xc0,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x80,0x80,0xc0,0xf0,0xdc,0x8e,0xc3,0x41,0x40,0xc0,0xe0,0xf0,0xf8,0xf8,0xfc,0xfe,0xfe,0xdf,0x0f,0x0f,0x0f,0x07,0x87,0xc7,0xc7,0xe7,0xc7,0x87,0x07,0x0f,0x0f,0x1f,0x3f,0xfe,0xfc,0xfc,0xf8,0xf0,0xe0,0xc0,0xc0,0x41,0x43,0x47,0x8e,0xd8,0xe0,0xc0,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xc0,0x60,0x70,0x30,0x18,0x18,0x1c,0x02,0x02,0x06,0x21,0x81,0x03,0x81,0x81,0x81,0x81,0x81,0x81,0x81,0x01,0x83,0x01,0x0a,0x02,0x22,0x10,0x1c,0x18,0x38,0x30,0x60,0xe0,0xc0,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};

void usage(const char* progName) 
{
	// to do: actually populate this

	onionPrint(ONION_SEVERITY_FATAL, "\n");
	onionPrint(ONION_SEVERITY_FATAL, "Usage: oled-exp -i\n");
	onionPrint(ONION_SEVERITY_FATAL, "\n");
	onionPrint(ONION_SEVERITY_FATAL, "FUNCTIONALITY:\n");
	onionPrint(ONION_SEVERITY_FATAL, "  Initialize the OLED Display\n");
	onionPrint(ONION_SEVERITY_FATAL, "\n\n");

	onionPrint(ONION_SEVERITY_FATAL, "Usage: oled-exp -c\n");
	onionPrint(ONION_SEVERITY_FATAL, "\n");
	onionPrint(ONION_SEVERITY_FATAL, "FUNCTIONALITY:\n");
	onionPrint(ONION_SEVERITY_FATAL, "  Clear the OLED Display\n");
	onionPrint(ONION_SEVERITY_FATAL, "\n\n");

	onionPrint(ONION_SEVERITY_FATAL, "Usage: oled-exp [-icqv] COMMAND PARAMETER\n");
	onionPrint(ONION_SEVERITY_FATAL, "\n");
	onionPrint(ONION_SEVERITY_FATAL, "The following COMMANDs are available:\n");
	onionPrint(ONION_SEVERITY_FATAL, "  power <on|off>                  Turn the display on or off\n");
	onionPrint(ONION_SEVERITY_FATAL, "  write <message>                 Write the input string on the display\n");
	onionPrint(ONION_SEVERITY_FATAL, "  dim <on|off>                    Adjust the screen brightness\n");
	onionPrint(ONION_SEVERITY_FATAL, "  invert <on|off>                 Invert the colors on the display\n");
	onionPrint(ONION_SEVERITY_FATAL, "  cursor <row>,<column>           Set the cursor to the specified row and column\n");
	onionPrint(ONION_SEVERITY_FATAL, "\n");
	onionPrint(ONION_SEVERITY_FATAL, "OPTIONS:\n");
	onionPrint(ONION_SEVERITY_FATAL, "  -i 		initialize display\n");
	onionPrint(ONION_SEVERITY_FATAL, "  -c 		clear the display\n");
	onionPrint(ONION_SEVERITY_FATAL, "  -q 		quiet: no output\n");
	onionPrint(ONION_SEVERITY_FATAL, "  -v 		verbose: lots of output\n");
	onionPrint(ONION_SEVERITY_FATAL, "  -h 		help: show this prompt\n");
	

	onionPrint(ONION_SEVERITY_FATAL, "\n");
}

int oledCommand(char *command, char *param)
{
	int 	status;
	int 	val0, val1;

	// perform the specified command
	onionPrint(ONION_SEVERITY_DEBUG_EXTRA, "command = '%s', param = '%s'\n", command, param);
	if (strcmp(command, "write") == 0 ) {
		status	= oledWrite(param);
	}
	else if (strcmp(command, "contrast") == 0 ) {
		status	= oledSetContrast( atoi(param) );
	}
	else if (strcmp(command, "invert") == 0 ) {
		// interpret the parameter
		val0 	= 0;	// off by default
		if (strcmp(param, "on") == 0 ) {
			val0 = 1;
		}
		status	= oledSetDisplayMode( val0 );
	}
	else if (strcmp(command, "power") == 0 ) {
		// interpret the parameter
		val0 	= 0;	// off by default
		if (strcmp(param, "on") == 0 ) {
			val0 = 1;
		}
		status	= oledSetDisplayPower(val0);
	}
	else if (strcmp(command, "dim") == 0 ) {
		// interpret the parameter
		val0 	= 0;	// off by default
		if (strcmp(param, "on") == 0 ) {
			val0 = 1;
		}
		status	= oledSetDim(val0);
	}
	else if (strcmp(command, "cursor") == 0 ) {
		// interpret the parameter
		sscanf(param, "%d, %d", &val0, &val1);
		onionPrint(ONION_SEVERITY_INFO, "> Setting cursor to (%d, %d)\n", val0, val1);
		status	= oledSetCursor(val0, val1);
	}
	else if (strcmp(command, "draw") == 0 ) {
		// interpret the parameter
		// to do: implement this for real
		status	= oledDraw(testIMG, atoi(param));
	}
	else if (strcmp(command, "scroll") == 0 ) {
		// interpret the parameters
		val0 		= -1;
		val1 		= -1;
		if (strcmp(param, "left") == 0) {
			val0 	= 0;	// horizontal scrolling
			val1	= 0;	// scrolling left
		}
		else if (strcmp(param, "right") == 0) {
			val0 	= 0;	// horizontal scrolling
			val1	= 1;	// scrolling right
		}
		else if (strcmp(param, "diagonal-left") == 0) {
			val0 	= 1;	// vertical scrolling
			val1	= 0;	// scrolling up
		}
		else if (strcmp(param, "diagonal-right") == 0) {
			val0 	= 1;	// vertical scrolling
			val1	= 1;	// scrolling down
		}

		if (val0 == -1) {
			status 	= oledScrollStop();
		}
		else if (val0 == 0) {
			// horizontal scrolling
			status 	= oledScroll(val1, OLED_EXP_SCROLL_SPEED_5_FRAMES, 0, OLED_EXP_CHAR_ROWS-1);
		}
		else if (val0 == 1) {
			// diagonal scrolling
			status 	= oledScrollDiagonal (	val1, 								// direction
											OLED_EXP_SCROLL_SPEED_5_FRAMES, 	// scroll speed
											0, 									// # fixed rows
											OLED_EXP_HEIGHT-1, 					// # scrolling rows
											1, 									// rows to scroll by
											0, 									// horizontal start page
											OLED_EXP_CHAR_ROWS-1				// horizontal end page	
										);
		}
	}
	else {
		onionPrint(ONION_SEVERITY_FATAL, "> Unrecognized command '%s'\n", command );
	}

	return status;
}


int main(int argc, char** argv)
{
	const char *progname;
	char 	*command;
	char 	*param;
	
	int 	status;
	int 	verbose;
	int 	init;
	int 	clear;
	int 	ch;


	// set the defaults
	init 		= 0;
	clear 		= 0;
	verbose 	= ONION_VERBOSITY_NORMAL;

	command 	= malloc(255 * sizeof *command);
	param 		= malloc(255 * sizeof *param);

	// save the program name
	progname 	= argv[0];	


	//// parse the option arguments
	while ((ch = getopt(argc, argv, "vqxhic")) != -1) {
		switch (ch) {
		case 'v':
			// verbose output
			verbose = ONION_VERBOSITY_VERBOSE;
			break;
		case 'q':
			// quiet output
			verbose = ONION_VERBOSITY_NONE;
			break;
		case 'x':
			// extra verbose output
			verbose = ONION_SEVERITY_DEBUG_EXTRA;
			break;
		case 'i':
			// perform init sequence
			init 	= 1;
			break;
		case 'c':
			// perform clear sequence
			clear 	= 1;
			break;
		default:
			usage(progname);
			return 0;
		}
	}

	// set the verbosity
	onionSetVerbosity(verbose);


	// advance past the option arguments
	argc 	-= optind;
	argv	+= optind;


	//// OLED PROGRAMMING
	// initialize display
	if ( init == 1 ) {
		status 	= oledDriverInit();
		if (status == EXIT_FAILURE) {
			onionPrint(ONION_SEVERITY_FATAL, "main-oled-exp:: display init failed!\n");
		}
	}

	// clear screen
	if ( clear == 1 ) {
		onionPrint(ONION_SEVERITY_INFO, "> Clearing display\n");
		status 	= oledClear();
		if (status == EXIT_FAILURE) {
			onionPrint(ONION_SEVERITY_FATAL, "main-oled-exp:: display clear failed!\n");
		}
	}


	// check if just option command
	if ( argc == 0 ) {
		// check if usage needs to be printed
		if ( init == 0 && clear == 0) {
			usage(progname);
		}
		return 0;
	}


	//// parse the command arguments
	while ( argc > 0 ) {
		// first arg - command
		strcpy(command, argv[0]);

		// second arg - parameter (optional)
		if ( argc > 1 ) {
			strcpy(param, argv[1]);
		}

		// perform the specified command
		status 	= oledCommand(command, param);
		if (status != EXIT_SUCCESS) {
			onionPrint(ONION_SEVERITY_FATAL, "ERROR: command '%s' failed!\n", command);
		}

		// decrement the number of arguments left
		argc	-= 2;
		argv	+= 2;

		onionPrint(ONION_SEVERITY_DEBUG, "> arguments remaining: %d\n", argc);
	}


	return 0;
}