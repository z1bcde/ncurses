#include <ncurses.h>

int main()
{
	initscr();
	scrollok(stdscr, TRUE);
	for(int i=0; i<100; i++)
		printw("%d\n", i);

	refresh();

	getch();
	endwin();
	return 0;
}

