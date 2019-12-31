#include <ncurses.h>
#define elemof(a) (sizeof(a) / sizeof((a)[0]))
int main()
{
	slk_init(0);
	initscr();

	char *label[] ={
		"hoge",
		"kyoto"};

		for(int i=0;i < elemof(label);i++)
			slk_set(i+1, label[i], 1);

	slk_refresh();
	getch();

	endwin();

	return 0;
}
