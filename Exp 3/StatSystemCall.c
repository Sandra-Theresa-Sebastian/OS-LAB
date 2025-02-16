#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>

int main(){
	char path1[10];
	struct stat *nfile;
	nfile = (struct stat*)malloc(sizeof(struct stat));
	
	printf("Enter File Name: ");
	scanf("%s",path1);
	stat(path1,nfile);
	
	printf("User ID: %d\n", nfile->st_uid);
	printf("Block size: %ld\n", nfile->st_blksize);
	printf("Product mode: %d\n", nfile->st_mode);
	printf("Access time: %ld\n", nfile->st_atime);
	printf("Last modified: %ld\n", nfile->st_mtime);
	printf("Size of file: %ld\n", nfile->st_size);
	printf("Number of links: %ld\n", nfile->st_nlink);
}
