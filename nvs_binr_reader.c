/************************************************************************* 
 * 
 * THE COFFEEWARE LICENSE
 *
 *	Pedro Sousa (sousapedro596@gmail.com) wrote this code. As long as
 *  you retain this notice you can do whatever you want with this stuff. 
 *  If we meet some day, and you think this stuff is worth it, you can buy
 *  me a coffee in return!
 *
 *************************************************************************/

/**
 *
 * @file nvs_binr_reader.c
 * Main file to run the tool
 *
 */
#define BUFFER_SIZE 128


#include <stdint.h>
#include <stdio.h>

int main(int argc, char **argv){

	FILE * fp;
	char read_buffer[BUFFER_SIZE];


	if(argc < 2 || argc > 2){
		printf("Just enter the raw BINR log as parameter!\n");
		return -1;
	}

	fp = fopen(argv[1], "r");



}

