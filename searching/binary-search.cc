
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int arr[100005];
int tarr[100005];

static void swap(int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int start, int end)
{
    int p = start;
    int li;
    li = p + 1;
    for (int i = p + 1; i <= end; i++)
    {
        if (arr[i] < arr[p])
        {
            swap(li, i);
            li++;
        }
    }

    swap(li - 1, p);
    // 5 1 2 10 3
    return li - 1;
}

void qsort(int start, int end)
{
    if (start < end)
    {
        int p = partition(start, end);
        qsort(start, p - 1);
        qsort(p + 1, end);
    }
}

int rankk(int n, int x) {
    int p = 0, q = n - 1;
    int mid;
    /*
    while(p < q) {
        mid = p + (q-p) / 2;
        if(arr[mid] == x)
            return mid + 1;
        else if(x < arr[mid])
            q = mid - 1;
        else
            p = mid;
    }
    */
    
    while(p <= q) {
        mid = p + (q-p) / 2;
        if(x < arr[mid])
            q = mid - 1;
        else if(x > arr[mid])
            p = mid + 1;
        else
            return mid + 1;
    }
    
    return -1;
}

static void merge(int start, int mid, int end)
{
    int n = end - start  + 1;
    int p = start;
    int q = mid + 1;
    int k = 0;

    for(int i = 0; i < n; i++)
    {
        if (p > mid)
            tarr[k++] = arr[q++];
        else if (q > end)
            tarr[k++] = arr[p++];
        else if (arr[p] < arr[q])
            tarr[k++] = arr[p++];
        else
            tarr[k++] = arr[q++];
    }

    for (int i = 0; i < n; i++)
        arr[start + i] = tarr[i];
}

static void msort(int start, int end)
{
    if (start < end)
    {
        int mid = start + (end - start) / 2;
        msort(start, mid);
        msort(mid + 1, end);
        merge(start, mid, end);
    }
}

int main() {
    int n, q, x;
    cin >> n;
    
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> q;
    
    msort(0, n - 1);
    
    for(int i = 0; i < q; i++) {
        cin >> x;
        cout << rankk(n, x) << endl;
    }
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail


// Write your code here
