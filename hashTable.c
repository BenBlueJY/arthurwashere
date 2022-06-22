#include <stdio.h>
#include <stdlib.h>
#define HASH_TABLE_SIZE 1000

char hashTable[HASH_TABLE_SIZE];

int hashFunction(char* s) {
    return atoi(s) % HASH_TABLE_SIZE;
}

void insert(char* s) {
    int index = hashFunction(s);
    while (hashTable[index] != '') {
        index = (index + 1) % HASH_TABLE_SIZE;
    }
    hashTable[index] = s;
}
//wagwan g i can push stuff