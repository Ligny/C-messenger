/*
** EPITECH PROJECT, 2020
** my_chat
** File description:
** struct
*/

#ifndef STRUCT_H_
#define STRUCT_H_

#define LENGTH_NAME 31
#define LENGTH_MSG 101
#define LENGTH_SEND 201

typedef struct ClientNode {
    int data;
    struct ClientNode* prev;
    struct ClientNode* link;
    char ip[16];
    char name[31];
} ClientList;

ClientList *newNode(int sockfd, char* ip) {
    ClientList *np = (ClientList *)malloc( sizeof(ClientList) );
    np->data = sockfd;
    np->prev = NULL;
    np->link = NULL;
    strncpy(np->ip, ip, 16);
    strncpy(np->name, "NULL", 5);
    return np;
}

#endif /* !STRUCT_H_ */
