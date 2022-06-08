#include <stdio.h>
#include "my_ufs.h"

int main() {

    mymkfs(10240);
    int fd1 = myopen("noah", 0);
    int fd2 = myopen("rashi", 0);
    int fd3 = myopen("noah", 0);
    char buff[] = "hello world!";
    mywrite(fd1, buff, 12);
    mylseek(fd1, -12, SEEK_CUR);
    mymount("myFile.txt");
    myprint();
    char text[100];
    myread(fd1, text, 12);
    printf("read from fd1: :%s:\n", text);
    printf("fd1 is: %d\n", fd1);
    printf("fd2 is: %d\n", fd2);
    printf("fd3 is: %d\n", fd3);
    // printf("sizeof sb: %ld\n", sizeof(superblock));
    // printf("sizeof inode: %ld\n", sizeof(inode));
    // printf("sizeof block: %ld\n", sizeof(block));
    printf("done\n");

    return 0;
}