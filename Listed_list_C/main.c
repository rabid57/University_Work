#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"



int main() {
    // pointer to the head element of the list.
    book* head = NULL;
    head = insert(head,"dog","asd",12121212);
    head = insert(head,"cat","asd",12121210);
    head = insert(head,"rat","qwe",12121215);
    head = insert(head,"fish","tyu",12121213);
    head = insert(head,"monkey","kjh",12121211);
    print_list(head);
    select_node(head);
    return 0;
}
