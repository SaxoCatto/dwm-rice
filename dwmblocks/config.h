/* Modify this file to change what commands output to your statusbar, and recompile using the make command. */

/* NOTE: if dwmblocks does not show anything, please consider doing the following:
 * 1. Copy "bin" to "~/.local/bin", then add the latter to your $PATH
 * 2. Add the absolute path name to the commands
 * (for example, "/home/saxocat/.local/bin/capslock")
 * 3. Check that the scripts are executable, and that you have the permission to
 * execute the script
 */

static const Block blocks[] = {
	/*Icon*/	/*Command*/				/*Update Interval*/	/*Update Signal*/
	{"",		"/home/lynn/.local/bin/capslock",	1,			2},
	{"",		"/home/lynn/.local/bin/brightness",	0,			11},
	{"",		"/home/lynn/.local/bin/memory",		600,			14},
	{"",		"/home/lynn/.local/bin/cpu",		10,			18},
	{"",		"/home/lynn/.local/bin/volume",		0,			10},
	{"",		"/home/lynn/.local/bin/fanspeed",	5,			12},
	{"",		"/home/lynn/.local/bin/internet",	2,			4},
	{"",		"/home/lynn/.local/bin/battery",	5,			3},
	{"",		"/home/lynn/.local/bin/clock",		30,			1},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
