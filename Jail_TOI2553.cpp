#include<bits/stdc++.h>

using namespace std;

struct data{
	int id;
	struct data *next;
};

int main(){
	int num,count;
	cin>>num>>count;
	struct data *head=(data*)malloc(sizeof(data));
	for(int i=0;i<num;i++){
		struct data *node=(data*)malloc(sizeof(data));
		node->next=head;
		while(node->next!=NULL){
			node=node->next;
		}
		node->next=(data*)malloc(sizeof(data));
		node=node->next;
		node->id=i+1;
	}
	struct data *ptr=(data*)malloc(sizeof(data));
	ptr->next=head;
	ptr=ptr->next;
	for(int i=0;i<num;i++){
		ptr=ptr->next;
		cout<<ptr->id<<" ";
	}
	return 0;
}
