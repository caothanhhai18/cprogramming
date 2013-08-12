#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct sv {
    char tensv[10];
    char mssv[10];
    float dtb;
    struct sv *link;
};

struct sv *head;

void insert_end(int i){
    struct sv *temp,*ptr;
    temp = (struct sv *)malloc(sizeof(struct sv));
    ptr=head;
    while(1){
        if(ptr->link!=NULL){
            ptr=ptr->link;
        }
        else{
            break;
        }
    }
    printf("nhap tensv thu %d :\n",i);
    scanf("%s",&(temp->tensv));
    printf("nhap mssv thu %d :\n",i);
    scanf("%s",&(temp->mssv));
    printf("nhap dtb thu %d :\n",i);
    scanf("%f",&(temp->dtb));
    temp->link=NULL;
    ptr->link=temp;

}
void insert_begin(){
    struct sv *temp;
    temp = (struct sv *)malloc(sizeof(struct sv));
    printf("nhap tensv :\n");
    scanf("%s",&(temp->tensv));
    printf("nhap mssv :\n");
    scanf("%s",&(temp->mssv));
    printf("nhap dtb :\n");
    scanf("%f",&(temp->dtb));

    temp->link=head;
    head=temp;

}

void insert_pos(int pos){
    struct sv *temp,*ptr;
    int i;
    temp = (struct sv *)malloc(sizeof(struct sv));
    ptr=head;
    for(i=0;i<pos;i++){
        ptr=ptr->link;
    }
    printf("nhap tensv :\n");
    scanf("%s",&(temp->tensv));
    printf("nhap mssv :\n");
    scanf("%s",&(temp->mssv));
    printf("nhap dtb :\n");
    scanf("%f",&(temp->dtb));
    temp->link=ptr->link;
    ptr->link=temp;
}

void create_lk(int no){
    struct sv *temp;
    int i;
    temp = (struct sv *)malloc(sizeof(struct sv));
    for(i=0;i<no;i++){
        if(head==NULL){
        printf("nhap tensv thu %d :\n",i);
        scanf("%s",&(temp->tensv));
        printf("nhap mssv thu %d :\n",i);
        scanf("%s",&(temp->mssv));
        printf("nhap dtb thu %d :\n",i);
        scanf("%f",&(temp->dtb));
        temp->link=NULL;
        head = temp;
        }
        else{
             insert_end(i);
        }
    }
}

print_lk(){
    struct sv *ptr;
    ptr=head;
    while(ptr!=NULL){
        printf("%s",ptr->tensv);
        ptr=ptr->link;
    }
}

int main()
{
    create_lk(2);
    //insert_begin();
    insert_pos(1);
    print_lk();

}
