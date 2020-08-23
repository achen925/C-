#include <stdio.h>
#include <string.h>
#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 20

struct PepInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};

//通讯录结构体
struct Contact
{
	struct PepInfo data[MAX];  //存放通讯录中的联系人信息
	int size;             //显示通讯录当前的大小
};

void InitContact(struct Contact* ps);
void AddContact(struct Contact* ps);
void DelContact(struct Contact* ps);
void ModifyContact(struct Contact* ps);
void SearchContact(struct Contact* ps);
void ShowContact(struct Contact* ps);
void SortContact(struct Contact* ps);

enum Opration
{
	exit,   //0
	Add,    //1
	Del,    //2
	Modify,   //3
	Search,   //4
	Show,     //5
	Sort      //6
};
