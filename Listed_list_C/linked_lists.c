//
// Created by Connor on 26/10/2017.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linked_list.h"

typedef struct s_book{
    char title[101];
    char author_name[61];
    long isbn;
    struct s_book* next_book;
}book;

book* create(char title[101], char author_name[61], long isbn, book* next_book){
    book* new_book = (book*)malloc(sizeof(book));
    if(new_book == NULL){
        printf("Error creating new book\n");
        exit(1);
    }
    strcpy(new_book->title, title);
    strcpy(new_book->author_name, author_name);
    new_book -> isbn = isbn;
    new_book -> next_book = next_book;

    return new_book;
}



/*book* prepend(book* head, char title[101], char author_name[61], long isbn){
    book* new_book = create(title,author_name,isbn,head);
    head = new_book;
    return head;
}



book* append(book* head, char title[101], char author_name[61], long isbn){
    book* cursor = head;
    while(cursor->next_book != NULL){
        cursor = cursor->next_book;
    }
    book* new_book = create(title,author_name,isbn,NULL);
    cursor->next_book = new_book;

    return head;
}*/



/*book* insert_before(book* head, char title[101], char author_name[61], long isbn, book* nxt){
    if(nxt == NULL || head == NULL){
        return NULL;
    }
    if (head == nxt){
        head= prepend(head,title,author_name,isbn);
        return head;
    }

    book* cursor = head;
    while (cursor != NULL){
        if (cursor->next_book == nxt){
            break;
        }
        cursor = cursor->next_book;
    }
    if (cursor != NULL){
        book* new_book = create(title,author_name,isbn,cursor->next_book);
        cursor->next_book = new_book;
        return head;
    } else {
        return NULL;
    }
}*/



/*void insert_after(book *cursor, char title[101], char author_name[61], long isbn) {
    /* find the prev node, starting from the first node

}*/



book* insert(book* head, char title[101], char author_name[61], long isbn){
    if(head == NULL){
        head = create(title, author_name, isbn, NULL);
        return head;
    }
    if(head->isbn > isbn){
        head = create(title, author_name, isbn, head);
        return head;
    }
    book* cursor = head;
    while ((cursor->next_book) != NULL){
        if((cursor->next_book)->isbn > isbn){
            cursor->next_book = create(title, author_name, isbn, cursor->next_book);
            return head;
        }
        cursor = cursor->next_book;
    }
    cursor->next_book = create(title, author_name, isbn, NULL);
    return head;
}




void print_list(book* head){
    while (head != NULL){
        printf("Title: %s\nAuthor: %s\nISBN: %li\n\n", head->title,head->author_name,head->isbn);
        head = head ->next_book;
    }
}


void select_node(book* head){
    long i;
    printf("Input books ISBN number please: ");
    scanf("%li", &i);
    while (head != NULL){
        if(head->isbn == i){
            printf("Title: %s\nAuthor: %s\nISBN: %li\n\n", head->title,head->author_name,head->isbn);
        }
        head = head ->next_book;
    }
}