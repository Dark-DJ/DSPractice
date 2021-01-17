#include <stdio.h>
#include <stdlib.h>

#include "HashTable.h"

struct Student
{
    int age;
    float score;
    char name[25];
    char data[1024*10];
};

static void free_student(void* stu)
{
    free(stu);
}

// ��ܾǥͫH�������
static void show_student(struct Student* p)
{
    printf("�m�W:%s, ����:%.2f\n", p->name, p->score);
}

int main()
{
    //�s�ؤ@��HashTable���
    HashTable* ht = hash_table_new();
    if (NULL == ht) {	
        return 1;
    }


    for (int i = 0; i < 100; i++) {
        struct Student * stu = (struct Student*)malloc(sizeof(struct Student));
        stu->score = 50.0f + rand() % 100;
        sprintf(stu->name, "�ǥ�%d", i);
        hash_table_put2(ht, stu->name, stu, free_student);
    }

    // ���u�ǥͩm�W�d��ǥͬ[�c�� 
    for (int i = 0; i < 100; i++) {
        char name[25];
        sprintf(name, "�ǥ�%d", i);
        struct Student * stu = (struct Student*)hash_table_get(ht, name);
        show_student(stu);
    }

    hash_table_delete(ht);
    return 0;
}
