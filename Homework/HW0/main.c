//#include <stdio.h>
//#include <stdlib.h>
//#include "ADTStack.h"
//#include <string.h>
//
//#define MAX_LENGTH 16
//
//struct intl_passenger {
//    char given_name[MAX_LENGTH];
//    char surname[MAX_LENGTH];
//    char passport_id[MAX_LENGTH];
//    char country[MAX_LENGTH];
//};
//
//struct intl_passenger *create() {
//    struct intl_passenger *passenger = malloc(sizeof(struct intl_passenger));
//    if (!passenger) {
//        fprintf(stderr, "%s/%u: failed to allocate %lu bytes\n\n",
//                __FILE__, __LINE__, sizeof(struct intl_passenger));
//        exit(-1);
//    }
//    return passenger;
//}
//
//char* label_passenger(struct intl_passenger* passenger){
//    char* label = malloc(16*3+3);
//    if(!label){
//        fprintf(stderr, "%s/%u: failed to allocate %lu bytes\n\n",
//                __FILE__, __LINE__, sizeof(16*3+3));
//        exit(-1);
//    }
//    strcat(label,passenger->given_name);
//    strcat(label, " ");
//    strcat(label,passenger->surname);
//    strcat(label, " ");
//    strcat(label,passenger->passport_id);
//
//    return label;
//}
//
//int main() {
//    FILE *file = fopen("international_passengers.dat", "r");
//    if (!file) {
//        printf("File open Error!");
//        exit(-1);
//    }
//
//    Stack stack = init(100,
//                       (void *(*)(void *)) strcpy,
//                       (void (*)(void *)) free,
//                       (char *(*)(void *)) label_passenger);
//
//    char *buff = NULL;
//    size_t buff_size = 0;
//
//    while (getline(&buff, &buff_size, file) != EOF) {
//        struct intl_passenger *passenger = create();
//        char *name = strtok(buff, " ");
//        char *surname = strtok(NULL, " ");
//        char *passport = strtok(NULL, " ");
//        char *country = strtok(NULL, " ");
//        strcpy(passenger->given_name, name);
//        strcpy(passenger->surname, surname);
//        strcpy(passenger->passport_id, passport);
//        strcpy(passenger->country, country);
//        push(stack, passenger);
//    }
//    print(stack);
//    clear(stack);
//    destroy(stack);
//    fclose(file);
//    free(buff);
//
//    return 0;
//}
//
