CC=gcc

all: nvs_binr_reader.o
	$(CC)	-o nvs_binr_reader nvs_binr_reader.o