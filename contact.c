#define  _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

//通讯录初始化
void InitContact(struct Contact* ps)
{
	memset(ps->data, 0, sizeof(ps->data));    
	ps->size = 0;
}

void AddContact(struct Contact* ps)
{
	if (ps->size == MAX)
	{
		printf("通讯录已满\n");
	}
	else
	{
		printf("请输入姓名：->");
		scanf("%s", ps->data[ps->size].name);
		printf("请输入年龄：->");
		scanf("%d", &(ps->data[ps->size].age));    //&
		printf("请输入性别：->");
		scanf("%s", ps->data[ps->size].sex);
		printf("请输入电话：->");
		scanf("%s", ps->data[ps->size].tele);
		printf("请输入地址：->");
		scanf("%s", ps->data[ps->size].addr);
		ps->size++;
		ShowContact(ps);
	}
}

void DelContact(struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空，无法删除\n");
	}
	else
	{
		char name[MAX_NAME];
		printf("请输入你要删除的用户姓名->");
		scanf("%s", name); 
		//找用户输入的姓名
		int i = 0;
		for (i = 0; i < ps->size; i++)
		{
			if (strcmp(ps->data[i].name, name) == 0)
			{
				//找到了
				break;
			}
		}
		//删除信息,跳出循环有两种情况，一种找到了，一种i==ps->size
		if (i == ps->size)
		{
			printf("删除失败，未找到此用户姓名\n");
		}
		else
		{
			int j = 0;
			for (j = 0; j < ps->size-1; j++)
			{
				ps->data[j] = ps->data[j + 1];
			}
			ps->size--;
			printf("删除成功\n");
			ShowContact(ps);
		}
	}

}

void ModifyContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入你要修改的用户姓名->");
	scanf("%s", name);
	int pos = 0;
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (strcmp(ps->data[i].name, name) == 0)
		{
			//找到了
			pos = i;
			break;
		}
	}
	if (i == ps->size)
	{
		printf("修改失败，未找到此用户姓名\n");
	}
	else
	{
		printf("请输入姓名：->");
		scanf("%s", ps->data[pos].name);
		printf("请输入年龄：->");
		scanf("%d", &(ps->data[pos].age));
		printf("请输入性别：->");
		scanf("%s", ps->data[pos].sex);
		printf("请输入电话：->");
		scanf("%s", ps->data[pos].tele);
		printf("请输入地址：->");
		scanf("%s", ps->data[pos].addr);
		ShowContact(ps);
	}
}
void SearchContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入你要查询的用户姓名->");
	scanf("%s", name);
	int pos = 0;
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (strcmp(ps->data[i].name,name) == 0)
		{
			pos = i;
			break;
		}
	}
	if (i == ps->size)
	{
		printf("查询失败，未找到此用户姓名\n");
	}
	else
	{
		printf("%-10s %-4s %-4s %-12s %-20s\n", "姓名", "年龄", "性别", "电话", "地址");
		printf("%-10s %-4d %-4s %-12s %-20s\n", ps->data[pos].name,
			ps->data[pos].age, ps->data[pos].sex,
			ps->data[pos].tele, ps->data[pos].addr);	
	}
}
void ShowContact(struct Contact* ps)
{
	int i = 0;
	printf("%-10s %-4s %-4s %-12s %-20s\n", "姓名", "年龄", "性别", "电话", "地址");
	for (i = 0; i < ps->size; i++)
	{
		printf("%-10s %-4d %-4s %-12s %-20s\n", ps->data[i].name,
			ps->data[i].age, ps->data[i].sex,
			ps->data[i].tele, ps->data[i].addr);
	}
}

void swap(void* ps1, void* ps2,size_t num)
{
	char* p1 = (char*)ps1;
	char* p2 = (char*)ps2;
	int i = 0;
	for (i = 0; i < num; i++)
	{
		char tmp = *p1;
		*p1 = *p2;
		*p2 = tmp;
		p1++;
		p2++;
	}

}

void SortContact(struct Contact* ps)
{
	int i = 0;
	for (i = 0; i < ps->size-1; i++)   //要比较的趟数
	{
		int j = 0;
		for (j = 0; j<ps->size -1-i; j++)  //每一趟要比较的对数
		{
			if (strcmp(ps->data[j].name, ps->data[j + 1].name) > 0)
			{
				swap(ps->data[j].name, ps->data[j + 1].name,20);
				swap(&(ps->data[j].age), &(ps->data[j + 1].age),4);
				swap(ps->data[j].sex, ps->data[j + 1].sex,10);
				swap(ps->data[j].tele, ps->data[j + 1].tele,12);
				swap(ps->data[j].addr, ps->data[j + 1].addr,20);
			}
		}
	}
	ShowContact(ps);
}
