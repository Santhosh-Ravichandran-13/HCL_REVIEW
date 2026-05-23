#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct p{
	int id;
	char name[50];
	char status[100];
	struct p* next;
	};
	
struct p* head=NULL;
void add_p(){
	int i;
	char n[50],s[50];
	struct p* np=(struct p*)malloc(sizeof(struct p));
	printf("Enter the patient id:");
	scanf("%d",&i);
	printf("Enter the patient name:");
	scanf("%s",n);
	printf("enter the patient status:");
	scanf("%s",s);
	np->id=i;
	strcpy(np->name,n);
	strcpy(np->status,s);
	np->next=NULL;
	if(head==NULL){
		head=np;
		return;
		}
	struct p* temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
		}
		temp->next=np;
	}
	
	
void display(){
	struct p* temp=head;
	while(temp!=NULL){
	 printf("%d %s %s",temp->id,temp->name,temp->status);
	 temp=temp->next;
	 }
	 }
void update(int id,char status[]){
     
     struct p* temp=head;
     
     while(temp!=NULL && temp->id!=id)
     {
     	temp=temp->next;
     	}
     	if(temp==NULL){
     		printf("No id found!.");
     		}
     	strcpy(temp->status,status);
     	}
  int main(){
     
    add_p();
    add_p();
	add_p();
	add_p();
    update(2,"DISCHARGE");
    display();
    return 0;
    }  	
		
	
	
