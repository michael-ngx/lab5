#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <assert.h>
#include <stdbool.h>
const int MAX_LENGTH = 1023;
const char NULL_CHAR = '\0';
const char NEWLINE = '\n';


typedef struct node{
    char* lname;
    char* fname;
    char* address;
    char* phone;
    struct node* next;
}Node;

typedef struct llist{
    Node* head;
}LinkedList;

LinkedList* initlist();
Node* newNode();
void insertNode(LinkedList* book);
void printNode();
void printList(LinkedList*book);

void safegets (char s[], int arraySize);


int main (void){
    const char bannerString[]
        = "Personal Phone Book Maintenance Program.\n\n";
    const char commandList[]
        = "Commands are I (insert), D (delete), S (search by name),\n"
          "  R (reverse search by phone #), P (print), Q (quit).\n";
    
    LinkedList* book = initlist();

    printf("%s",bannerString);
    printf("%s",commandList);

    char response;
    char input[MAX_LENGTH+1];
    do
    {
        printf("\nCommand?: ");
        safegets(input,MAX_LENGTH+1);

        response = toupper(input[0]);
        
        if (response == 'I')
        {          

            printList(book);
            printf("????");

            insertNode(book);

            
        }
    } while (response != 'Q');
}

void safegets (char s[], int arraySize){
    int i = 0, maxIndex = arraySize-1;
    char c;
    while (i < maxIndex && (c = getchar()) != NEWLINE)
    {
        s[i] = c;
        i = i + 1;
    }
    s[i] = NULL_CHAR;
}

LinkedList* initlist(){
    LinkedList* list = (LinkedList*)malloc(sizeof(LinkedList));
    list -> head = NULL;
    return list;
}

Node* newNode(char* fname, char* lname, char* address, char* phonenum){
    Node* node = (Node*)malloc(sizeof(Node));
    node->address = address;
    node->fname = fname;
    node->lname = lname;
    node->phone = phonenum;
    node->next = NULL;
    return node;
}

void insertNode(LinkedList* book){
            
            printf("  family name: ");
            char lname[MAX_LENGTH + 1];
            safegets(lname, MAX_LENGTH);
            printf("  first name: ");
            char fname[MAX_LENGTH + 1];
            safegets(fname, MAX_LENGTH);
            printf("  address: ");
            char address[MAX_LENGTH + 1];
            safegets(address, MAX_LENGTH);
            printf("  phone number: ");
            char phonenum[MAX_LENGTH + 1];
            safegets(phonenum, MAX_LENGTH);
    
    
    if (book->head == NULL){
        book->head = newNode(fname,lname,address,phonenum);
        //printf("%s hihi",book->head->lname);
    }
    
    /*
    else if (strcmp(node->lname,book->head->lname) < 0){
        printf("You/'re here");
        node->next = book->head;
        book->head = node;
        printList(book);
    }
    else{
        Node* on = book->head;
        while (on->next != NULL && strcmp(node->lname,on->next->lname) < 0){
            node->next = on->next;
            on->next = node;
            on = on->next;
            printf("hihi");
            printList(book);
        }
    }
    */
   else{
    Node*node = newNode(fname,lname,address,phonenum);
    node->next = book->head;
    book->head = node;
   }
   printList(book);
}

void printNode(Node* on){
    printf("\n%s\n%s\n%s\n%s\n",on->lname, on->fname, on->address, on->phone);
}

void printList(LinkedList* book){
    Node* on = book->head;
    while (on != NULL){
        printNode(on);
        on = on->next;
    }
}