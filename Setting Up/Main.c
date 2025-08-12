//
// Created by DELL on 8/11/2025.
//
#include <stdio.h>
//01.hello world
// int main() {
//     printf("Hello, CLion!\n");
//     return 0;
// }

//02.variables and loops
#include <stdlib.h>

// int main() {
//     int i;
//     for (i=0; i<10; i++) {
//         printf("%d\n", i);
//     }
//     return 0;
// }

//03.Functions

#include <stdio.h>

// void say_hello(char name[]) {
//     printf("Hello, %s!\n", name);
// }
//
// int main() {
//     say_hello("Lakshani");
//     return 0;
// }

//04. Multithreading Intro with pthreads
#include <stdio.h>
#include <stdlib.h>
// #include <pthread.h>    // For pthread functions and types
//
// // ----------------------------
// // Function that each thread will run
// // ----------------------------
// void* myThreadFunc(void* arg) {
//     // 'arg' is a void pointer, so we cast it to an int pointer
//     // then dereference it to get the thread number
//     int thread_num = *(int*)arg;
//
//     // Print a message identifying the thread
//     printf("Hello from thread %d\n", thread_num);
//
//     // Thread functions must return a void pointer (NULL if no result)
//     return NULL;
// }
//
// int main() {
//     pthread_t threads[4];   // Array to hold 4 thread IDs
//     int thread_nums[4];     // Array to hold each thread's number (0, 1, 2, 3)
//
//     // ----------------------------
//     // Create threads
//     // ----------------------------
//     for (int i = 0; i < 4; i++) {
//         thread_nums[i] = i; // Assign thread number
//
//         // pthread_create creates a new thread
//         //  1. &threads[i]   → pointer to where the thread ID will be stored
//         //  2. NULL          → use default thread attributes
//         //  3. myThreadFunc  → function for the thread to run
//         //  4. &thread_nums[i] → data passed to the function (thread number)
//         pthread_create(&threads[i], NULL, myThreadFunc, &thread_nums[i]);
//     }
//
//     // ----------------------------
//     // Wait for all threads to finish
//     // ----------------------------
//     for (int i = 0; i < 4; i++) {
//         // pthread_join waits for a specific thread to complete
//         // We pass NULL as we don’t need the thread’s return value
//         pthread_join(threads[i], NULL);
//     }
//
//     // After all threads are done
//     printf("All threads finished.\n");
//
//     return 0; // Exit successfully
// }

//05.OpenMP
#include <stdio.h>
#include <omp.h> // OpenMP header

int main() {
    // Parallel block
#pragma omp parallel
    {
        int id = omp_get_thread_num();      // get thread ID
        int total = omp_get_num_threads();  // total threads
        printf("Hello from thread %d of %d\n", id, total);
    }
    return 0;
}




