#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct Stu {
	char name[10];
	int age;
	char sex[10];
	char tele[20];
};
void print(struct Stu* p) {
	printf("%s %d %s %s\n", (*p).name, (*p).age, (*p).sex, (*p).tele);
	printf("%s %d %s %s\n", p->name, p->age, p->sex, p->tele);
}
int main(void)
{
	struct Stu a = { "wenhan",19,"male","19912993679" };
	printf("%s %d %s %s\n", a.name, a.age, a.sex, a.tele);
	print(&a);
	return 0;
}