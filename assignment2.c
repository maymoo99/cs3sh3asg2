#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 10

#define OFFSET_MASK 255
#define PAGES 128 // since physical address space is 1bit smaller (is this right?)
#define TLB_SIZE 16 // pages held in TLB
#define OFFSET_BITS 8
#define PAGE_SIZE 256

typedef struct TLBentry {
	int page;
	int frame;
}TLBentry;

void search_TLB(){} //ADD CODE

void TLB_Add(){} //ADD CODE

void TLB_Update(){} //ADD CODE

int main(int argc, char* argv[]){
	//int page_table[PAGES] = {6,4,3,7,0,1,2,5};

	TLBentry TLB[TLB_SIZE];

	FILE *fptr = fopen("addresses.txt", "r");
	char buff[BUFFER_SIZE];

	while(fgets(buff, BUFFER_SIZE, fptr) != NULL){
		
		//printf("%s\n", buff);
		int virt_addr = atoi(buff);

		int page_num = virt_addr >> OFFSET_BITS;
		int page_off = virt_addr & OFFSET_MASK;

		//printf("Virtual addr is %d: Page# = %d & Offset = %d.\n", 
		//									virt_addr, page_num, page_off);

		// int frame_num = page_table[page_num];

		// int phys_addr = (frame_num << OFFSET_BITS) | page_off;
	
		// printf("Virtual addr is %d: Page# = %d & Offset = %d. Physical addr = %d.\n", 
		// 									virt_addr, page_num, page_off, phys_addr);

	}
	fclose(fptr);
}