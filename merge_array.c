#include <stdio.h>

void sortArray(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void merge(int a[], int n, int b[], int m)
{

    const int size = n + m; // max size of array c
    int c[size];            // declaring array c with max size
    int k = 0;              // size of array c which will increase as increase in elements

    for (int i = 0; i < n; i++)
    {
        int found = 0; // flag for if an element is already in array
        // here first loop is for taking each element of array 1
        for (int j = 0; j < k; j++)
        {
            // second loop is for taking element of array c i.e. our output array
            if (a[i] == c[j])
            {

                // if an element is already in given array c
                // then found == 1 and we wil break loop and pass on nect if condition
                found = 1;
                break;
            }
#include <stdio.h>

void sortArray(int arr[], int size)
            {
                for (int i = 0; i < size - 1; i++)
                {
                    for (int j = 0; j < size - i - 1; j++)
                    {
                        if (arr[j] < arr[j + 1])
                        {
                            int temp = arr[j];
                            arr[j] = arr[j + 1];
                            arr[j + 1] = temp;
                        }
                    }
                }
            }

            void merge(int a[], int n, int b[], int m)
            {

                const int size = n + m; // max size of array c
                int c[size];            // declaring array c with max size
                int k = 0;              // size of array c which will increase as increase in elements

                for (int i = 0; i < n; i++)
                {
                    int found = 0; // flag for if an element is already in array
                    // here first loop is for taking each element of array 1
                    for (int j = 0; j < k; j++)
                    {
                        // second loop is for taking element of array c i.e. our output array
                        if (a[i] == c[j])
                        {

                            // if an element is already in given array c
                            // then found == 1 and we wil break loop and pass on next if condition
                            found = 1;
                            break;
                        }
                    }

                    if (!found)
                    {
                        // here if a[i] is not in array c i.e found == 0,  then we'll add it to array c at index k++
                        c[k++] = a[i];
                    }
                }

                // Now we are doing same with array B
                for (int i = 0; i < m; i++)
                {
                    int found = 0;

                    for (int j = 0; j < k; j++)
                    {
                        if (b[i] == c[j])
                        {
                            found = 1;
                            break;
                        }
                    }

                    if (!found)
                    {
                        c[k++] = b[i];
                    }
                }

                // Here we are sorting array c with the sorting function that we created above.
                sortArray(c, k);
                for (int i = 0; i < k; i++)
                {
                    printf("%d ", c[i]);
                }
            }

            int main()
            {

                // Initializing arrays with max size
                int array1[100];
                int array2[100];
                // Initializing variable for user defined size
                int size1, size2;
                printf("Enter size of array1: ");
                scanf("%d", &size1);
                printf("Enter %d elements in array1: ", size1);
                // Using for loop for taking elements in array
                for (int i = 0; i < size1; i++)
                {
                    scanf("%d", &array1[i]);
                }

                // Same for array2
                printf("Enter size of array2: ");
                scanf("%d", &size2);
                printf("Enter %d elements in array2: ", size2);
                for (int i = 0; i < size2; i++)
                {
                    scanf("%d", &array2[i]);
                }

                // calling merge function
                merge(array1, size1, array2, size2);
                return 0;
            }
        }

        if (!found)
        {
            // here if a[i]
            c[k++] = a[i];
        }
    }

    for (int i = 0; i < m; i++)
    {
        int found = 0;

        for (int j = 0; j < k; j++)
        {
            if (b[i] == c[j])
            {
                found = 1;
                break;
            }
        }

        if (!found)
        {
            c[k++] = b[i];
        }
    }
    sortArray(c, k);
    for (int i = 0; i < k; i++)
    {
        printf("%d ", c[i]);
    }
}

int main()
{

    int array1[100];
    int array2[100];
    int size1, size2;
    printf("Enter size of array1: ");
    scanf("%d", &size1);
    printf("Enter %d elements in array1: ", size1);
    for (int i = 0; i < size1; i++)
    {
        scanf("%d", &array1[i]);
    }

    printf("Enter size of array2: ");
    scanf("%d", &size2);
    printf("Enter %d elements in array2: ", size2);
    for (int i = 0; i < size2; i++)
    {
        scanf("%d", &array2[i]);
    }

    // calling merge function
    merge(array1, size1, array2, size2);
    return 0;
}
