#include <stdio.h>
#include <stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
typedef struct Node* node;
// tao node
node CreateNode(int value){
	node temp = (node)malloc(sizeof(Node));
	temp->data = value;
	temp->next = NULL;
	return temp;
}
int Size(node a){
	int count = 0;
	while(a != NULL){
		count ++;
		a=a->next;
	}
}
void insertFirst(node &a,int value){
	node temp = CreateNode(value);
	if(a== NULL){
		a=temp;
	}
	else{
		temp->next=a;
		a=temp;
	}
}
void insertLast(node &a, int value){
	node temp=CreateNode(value);
	if(a==NULL){
		a = temp;
	}else{
		node p = a ;
		while(p->next !=NULL){
			p=p->next;
		}
		p->next=temp;
	}
}
void insertMid(node &a, int value, int pos){
	int n = Size(a);
	if(pos <= 0 || pos > n +1 ){
		printf("Vi tri chen khong hop le \n");
	}else if( n == 1 ){
		insertFirst(a,value);
		return;
	}else if (n == pos + 1 ){
		insertLast(a,value);
		return;
	}
	node p  =  a ; // tao bien luu cai head dau tien
	for(int i = 0; i < pos - 1;i++){
		p=p->next ; // dich chuyen toi vi tri thu pos - 1 
	}
	node temp = CreateNode(value); // tao node moi
	temp->next = p->next; // gan dia chi pos +1
	p->next=temp; // gan vi tri hien cho pos -1
}
void deleteFirst(node &a){
	if(a==NULL){
		return;
	}
	a=a->next;
}
void in(node a){
	while(a!=NULL){
		printf("%d\n",a->data);
		a=a->next;
	}
}

int main(){
	node head = NULL;
	insertFirst(head,5);
	insertFirst(head,15);
	in(head);
	
	return 0;
}


