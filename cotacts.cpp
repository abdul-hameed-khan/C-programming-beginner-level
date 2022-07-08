#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <graphics.h>
#include <string.h>
 struct contactbook
{
    char name[20];
    char num1[11];
    char email[25];
	char address[100];
};
int display();
void addrecord();
void searchcontact();
void editcontact();
void viewcontact();

contactbook contact[100];
int ind=0;

main()
{
	system("color 4f");
	int r;
	do{
		system("cls");
		r=display();
	}while(r!=-1);
}




void viewcontact()
{
	for(int i=0;i<ind;i++)
	{
	printf("contact name = %s\n number = %s\n email = %s\n\n\n\n",contact[i].name,contact[i].num1,contact[i].email);
}
	getch();
}
void searchcontact()
{
	char n[20];
	printf("enter a name to search for:\n");
	gets(n);
	gets(n);
	for(int j=0;j<ind;j++)
	{
		if(strcmpi(n,contact[j].name)==0)
		printf("contact name = %s\n number = %d\n email = %s\n",contact[j].name,contact[j].num1,contact[j].email);
		else
		printf("%s contact is not available",n);
	getch();
		}
	
}

void editcontact()

{
	char n[20];
	printf("enter a contact name to edit for:\n");
	gets(n);
	gets(n);
	for(int j=0;j<ind;j++)
	{
		int ch;
		if(strcmpi(n,contact[j].name)==0)
		printf("enter 1 to edit contact's name:\n");
		printf("enter 2 to edit contact's number:\n");
		printf("enter 3 to edit contact's email:\n");
		scanf("%d",ch);
		if(ch==1)
		printf(" name is %s",contact[j].name);
		printf("enter new name:\n");
		gets(contact[j].name);
		printf("new name = %s",contact[j].name);
		if(ch==2)
		printf(" number is %s",contact[j].num1);
		printf("enter new number:\n");
		gets(contact[j].num1);
		printf("new number = %s",contact[j].num1);
		if(ch==3)
		printf(" email is %s",contact[j].email);
		printf("enter new email:\n");
		gets(contact[j].email);
		printf("new email = %s",contact[j].email);
		}
	getch();
}
void delcontact()
{
	char m[20];
	printf("enter a contact name to delete for:\n");
	gets(m);
	gets(m);
	for(int j=0;j<ind;j++)
	{
		if(strcmpi(m,contact[j].name)==0)
	{
		contact[j].name[0]='\0';
		contact[j].num1[0]='\0';
		contact[j].email[0]='\0';
	}
		printf("\n\ndeleted");

	getch();
		}
}
void addrecord()
{

	printf("please enter a name\n");
	gets(contact[ind].name);
	gets(contact[ind].name);

	printf("please enter a number\n");
	gets(contact[ind].num1);
	printf("please enter an email\n");
	gets(contact[ind].email);
	ind++;
}
int display()
{
	int choice;
	printf("welcome to my contact book\n\n");
	printf("enter 1 to add contact\n\n");
	printf("enter 2 to view contact\n\n");
	printf("enter 3 to edit contact\n\n");
	printf("enter 4 to search contact\n\n");
	printf("enter 5 to delete contact\n\n");
	printf("enter any other number to exit \n\n");
	scanf("%d",&choice);
	if(choice==1)
	{
 addrecord();
	return 0;
}
	else if(choice==2){
	viewcontact();
	return 0;
}
	else if(choice==3){
	editcontact();
	return 0;
}
	else if(choice==4)
	{
	searchcontact();
	return 0;
}
	else if(choice==5)
	{
	delcontact();
	return 0;
}
	else{
	return -1;
}
}



