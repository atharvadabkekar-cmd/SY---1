void merge(int arr1[], int n1, int arr2[], int n2, int arr3[])
{
    int i, j, temp;

    for(i = 0; i < n1; i++)
        arr3[i] = arr1[i];

    for(i = 0; i < n2; i++)
        arr3[n1 + i] = arr2[i];

    for(i = 0; i < n1 + n2 - 1; i++)
    {
        for(j = i + 1; j < n1 + n2; j++)
        {
            if(arr3[i] > arr3[j])
            {
                temp = arr3[i];
                arr3[i] = arr3[j];
                arr3[j] = temp;
            }
        }
    }
}