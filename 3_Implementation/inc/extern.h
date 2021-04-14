/**
 * @brief Structure patient with variables including name,pid,age,sex,doc,diag,height,weight,bgrp,stat,bill,amtdeep,file pointer
 * 
 */
struct patient
 {
    char name[100];
    long pid;
    int age;
    char sex;
    char doc[1000];
    char diag[1000];
    float height;
    float weight;
    char bgrp[10];
    int stat; 
    double bill;
    double amtdep;
    FILE* fpat;
};
