#ifndef MEMBERSHIP_H
#define MEMBERSHIP_H

#include "pc_trie.h"

void hash_destroy();
int hash_init();

struct pc_Trie *hash_query(int level, char *hashkey);

//make a connection to prefix and hashElement
int hash_add(int level, char *hashkey,  pc_Trie *pctrie);

void hash_status();


