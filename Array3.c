#include <stdio.h>
int main()
{
    int i;
    char str[10] = {'m', 'y',  'S', 't', 'r'};
    str[2] = '\0';
    char strNosize[] = "myStr";
    strNosize[3] = '\0';

    printf("C1\n");
    printf("Size of str : %d\n",sizeof(str));
    printf("Size of strNosize : %d\n",sizeof(strNosize));

    printf("C2\n");
    for(i=0; i<5; i++)
    {
        printf("str[%d] : %c\n",i,str[i]);
    }
    printf("C3\n");//กำหนดค่าเริ่มเป็นค่าคงตัว(กำหนดArray=10)
    printf("str = %s\n",str);//กำหนดค่าเริ่มเป็นstr(ไม่กำหนดArrayและมี 0 ท้ายข้อมความ)
    printf("strNosize = %s\n",strNosize);

    return 0;
}