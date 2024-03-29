#ifndef test_f_h
#define test_f_h

#include <stdio.h>

int testMemcmp(void *p1_st, void *p1_end,void *p2_st,void *p2_end);
char *answer(int val);
int testKey(int *in, int in_n, int *answer, int ans_n);
void testKeySort();
int testSort(int *in, int *in2, int in_n);
void testMysort();

#endif /* test_f_h */
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "process.h"
#include "test.h"

int main()
{
    test(3, '1'); // Correct data
    test(4, '2'); // Correct data + filtering
    test(3, '3'); // File in doesn't exist
    test(3, '4'); // File in is empty
    test(4, '5'); // Out array is empty after filtering
    return 0;
}


// returns 0 if two files are identical
int compare_files(FILE *f1, FILE *f2)
{
    int flag = 0;
    
    char  ch1;
    char ch2;
    
    if ((f1 == NULL && f2 != NULL) || (f1 != NULL && f2 == NULL))
        flag = 1;
    else if (f1 == NULL && f2 == NULL)
        flag = 0;
    else
        while (1)
        {
            ch1 = getc(f1);
            ch2 = getc(f2);
            
            if (feof(f1) && feof(f2))
                break;
            else if (feof(f1) || feof(f2) || ch1 != ch2)
            {
                flag = 1;
                break;
            }
        }
    return flag;
}


// Simulates run of main with args and compares results
void test(int argc, char TC)
{
    FILE *ftc, *fin;
    FILE  *fout; // correct fout
    int filter_flag = 1; // will not filter
    
    char in_name[8] = "in0.txt";
    char out_name[9] = "out0.txt";
    in_name[2] = TC;
    out_name[3] = TC;
    
    if (argc == 4)
        filter_flag = 0;
    fin = fopen(in_name, "r");
    ftc = fopen(out_name, "r");
    fout = fopen("test_out.txt", "w+");
    
    go(fin, fout, filter_flag);
    rewind(fout);
    
    
    if (!compare_files(ftc, fout))
        printf("Test %c passed.\n", TC);
    else
        printf("Test %c failed.\n", TC);
    
    fclose(ftc);
    fclose(fout);
}*/
