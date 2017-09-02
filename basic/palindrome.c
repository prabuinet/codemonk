#include <stdio.h>
 
int main()
{
    char arr[100];
    scanf("%s", arr);
    int l = 0;
    while(arr[l] != '\0')
        l++;
    l--;
    int i = 0;
    for( ; i <= l && arr[i] == arr[l]; i++, l--) {
    }
    
    if(i >= l)
        printf("YES");
    else
        printf("NO");
    return 0;
}
