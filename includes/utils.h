#define ALGO_COUNT 2

unsigned long long MAX_RAND; // variable for defining max random generated integer
enum algorithms { SHELL_SORT = 0, INSERTION_SORT = 1 }; // enum with constants defining sorting algorithms
int* dataset; // array for benchmark dataset
int dataset_size; // size of dataset array

void (*alg_fs[ALGO_COUNT])(int*, int, int); // array of pointers to sorting functions

int return_num(char* str, int length); // function returning an integer if str is an integer
void (*(return_algo(char* str))) (int*, int, int); // function returning algorithm if str is a valid algorithm

int* get_random_array(int size); // function returning array of random generated integers

int* read_file(FILE* file, int* file_size); // function reading array of integers from file
void write_file(FILE* file, int* source, int count); // function writing array of integers to file
void get_random_file(FILE* file, int count); // function writing array of random integers to file

int check_dataset(); // function checking dataset for null numbers

clock_t benchmark(int* arr, int size, void (*algorithm)(int*, int, int), int reverse_bit); // function for benchmarking algorithms