//
// Created by Connor on 26/10/2017.
//

#ifndef W3_LINKED_LIST_H
#define W3_LINKED_LIST_H
typedef struct s_book book;
void print_list(book*);
void select_node(book*);
book* insert(book* head, char title[], char author_name[], long isbn);
#endif //W3_LINKED_LIST_H
