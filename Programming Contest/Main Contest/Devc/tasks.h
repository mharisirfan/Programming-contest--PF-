#define ASCENDING 1
#define DESCENDING 0
#define MAX_ELEMENT 0x7FFFFFFF

/** Prototypes for the functions for Task 1 **/
float far2cel(float far);
float cel2far(float cel);

/** Prototypes for the functions for Task 2 **/
float get_mean(int * ptr, int size);

/** Prototypes for the functions for Task 3 **/
int odd_todd(int * num_array, int size);

/** Prototypes for the functions for Task 4 **/
float get_variance(int * ptr, int size);

/** Prototypes for the functions for Task 5 **/
int get_lcm(int * ptr, int size);
int is_multiple(int num, int * ptr, int size);
 
/** Prototypes for the functions for Task 6 **/
int isPrimeFactor(int num, int divisor);

/** Prototypes for the functions for Task 7 **/
void sort_list(int * ptr, int size);
int find_min(int * ptr, int size);
void swap(int * num1, int * num2);

/** Prototypes for the functions for Task 8 **/
int get_median(int *ptr, int size);

/** Prototypes for the functions for Task 9 **/
void get_unique_list(int * ptr_src, int * ptr_dst, int size, int * size_unq);

/** Prototypes for the function for Task 10 **/
float get_file_size(char * filename);
