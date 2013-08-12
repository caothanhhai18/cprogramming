#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct sv {
    char tensv[5];
    char mssv[5];
    float dtb;
    struct sv *link;
};

struct sv *head;

void insert_end(){
    struct sv *temp,*ptr;
    temp = (struct sv *)malloc(sizeof(struct sv));
    ptr=head;

        printf("nhap tensv thu 1 :\n");
        scanf("%s",&(temp->tensv));
        printf("nhap mssv thu %d :\n",1);
        scanf("%s",&(temp->mssv));
        printf("nhap dtb thu %d :\n",1);
        scanf("%f",&(temp->dtb));
        temp->link=NULL;
        ptr->link=temp;

}

void create_lk(){
    struct sv *temp;
    int i;

    temp = (struct sv *)malloc(sizeof(struct sv));
        if(head==NULL){
        printf("nhap tensv thu %d :\n",0);
        scanf("%s",&(temp->tensv));
        printf("nhap mssv thu %d :\n",0);
        scanf("%s",&(temp->mssv));
        printf("nhap dtb thu %d :\n",0);
        scanf("%f",&(temp->dtb));
        temp->link=NULL;
        head = temp;

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
    create_lk();
    insert_end();
   // printf("%s",head->tensv);
   print_lk();

}
