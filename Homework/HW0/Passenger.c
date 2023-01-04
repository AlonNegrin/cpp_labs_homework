////
//// Created by baloo on 29/10/2022.
////
//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>
//#include "Passenger.h"
//#define MAX_LENGTH 16
//
//struct intl_passenger {
//    char given_name[MAX_LENGTH];
//    char surname[MAX_LENGTH];
//    char passport_id[MAX_LENGTH];
//    char country[MAX_LENGTH];
//};
//Passenger create(char* name, char* surname, char* passport_id, char* country){
//    Passenger passenger = malloc(sizeof(struct intl_passenger));
//    if (!passenger) {
//        fprintf(stderr, "%s/%u: failed to allocate %lu bytes\n\n",
//                __FILE__, __LINE__, sizeof(struct intl_passenger));
//        exit(-1);
//    }
//    strcpy((char *) passenger->given_name, name);
//    strcpy((char *) passenger->surname, surname);
//    strcpy((char *) passenger->passport_id, passport_id);
//    strcpy((char *) passenger->country, country);
//
//    return passenger;
//}
//
//Passenger copy_passenger(Passenger passenger){
//    Passenger passenger1 = malloc(sizeof(struct  intl_passenger));
//    strcpy((char *) passenger1->given_name, (const char *) passenger->given_name);
//    strcpy((char *) passenger1->surname, (const char *) passenger->surname);
//    strcpy((char *) passenger1->passport_id, (const char *) passenger->passport_id);
//    strcpy((char *) passenger1->country, (const char *) passenger->country);
//    return passenger1;
//}
//
//void free_passenger(Passenger passenger){
//    free(passenger);
//}
//
//char* label_passenger(Passenger passenger){
//    char* label = "";
//    strcat(label, (const char *) passenger->given_name);
//    strcat(label, (const char *) passenger->surname);
//    strcat(label, (const char *) passenger->passport_id);
//
//    return label;
//}
//
//
//
