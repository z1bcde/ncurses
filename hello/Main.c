#include <ncurses.h>

int main(void)
{
	initscr();
	addstr("Hello!");
	refresh();
	getch();
	endwin();

	return 0;
}

