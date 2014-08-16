#include<lib.h>
#include<unistd.h>
#include<string.h>
int printMyMesg(char* msg)
{
	message m;
	m.m1_p1=msg;
	m.m1_i1=strlen(msg);
	return (_syscall(PM_PROC_NR, PRINT_MY_MESG, &m));
}
