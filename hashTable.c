#include <stdio.h>
#include <stdlib.h>
<<<<<<< HEAD
#define HASH_TABLE_SIZE 500
=======
#define HASH_TABLE_SIZE 9000
>>>>>>> 33436a45d7a98d9aa89491aae62591ba872e26cb

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
//i can send top secret messages that no one can see mwahahahah

