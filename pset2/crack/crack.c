#define _XOPEN SOURCE
#include<unistd.h>
#include<cs50.h>
#include<stdio.h>
#include<string.h>
int main(int argc, string argv[])
{
    char hash[14];
    strcpy(hash, argv[1]);
    char salt[3];
    salt[2] = '\0';
    for(int k = 0; k < 3; k++)
    {
       salt[k] = hash [k];
    }
    // 1 буква
    char passwd[7];
    char help[] = "abcdefghijklmnopqrstuvwxyz";
    int helpN = strlen(help);
    passwd[1] = '\0';
    printf("hash2 = %s\n",crypt(passwd, salt));
    printf("salt = %s\n", salt);
}
    printf("argc = %i\n", argc);
    printf("agrv[0] = %s\n", argv[0]);
    printf("argv[1] = %s\n", argv[1]);
}