#include <stdio.h>
#include <stdlib.h>

void test1(int arr[])
{
    printf("%d\n",sizeof(arr));
}

void test2(char ch[])
{
    printf("%d\n",sizeof(ch));
}

struct stu
{
    char name[20];
    int age;
    char id[20];
};

int main()
{
    int a=0;
    //��������λȡ��
    //ԭ��-->����-->(��λȡ�����)����-->ԭ��
    //00000000 00000000 00000000 00000000 ע��洢����0�Ĳ��룬ֻ����������ԭ������������ͬ
    //11111111 11111111 11111111 11111111 ��λȡ����洢���ǲ���
    //11111111 11111111 11111111 11111110 ��λȡ����ķ���
    //10000000 00000000 00000000 00000001 �����ԭ�룬��ӡ������Ҳ��ԭ��
    printf("%d\n",~a);//-1

    int b=11;
    //00000000 00000000 00000000 00001011
    //�˴��뽫11�ĵ�������λ0���1����1011���1111
    //ֻ�轫��Ӧ��0����һ��1���ɣ���Ϊ0|1=1
    b=b|(1<<2);//��1������λ����ʱ��1��Ӧ��11��0���ٻ��ϼ��ɸı�
    printf("%d\n",b);

    int arr[10]={0};
    char ch[10]={0};
    printf("%d\n",sizeof(arr));
    printf("%d\n",sizeof(ch));
    test1(arr);
    test2(ch);

    //360��һ��������:
    int i=0,c=0,d=2,e=3,f=4;
    i=c++&&++d&&f++;
    //ֻҪ&&�����0���Ǻ���ľͶ���������
    //i=c++||++d||f++;
    //ֻҪ||�����1���Ǻ����ͬ��Ҳ������
    printf("c=%d\nd=%d\ne=%d\nf=%d\n",c,d,e,f);

    //����������(��Ŀ������)��
    //exp1?exp2:exp3  ���exp1����ʽΪ�棬�����exp2����ʽ�Ľ��
    //���exp1����ʽΪ�٣������exp3����ʽ�Ľ��
    int g=5,h=6;
    int max=0;
/*  if(g>h)
        max=g;
    else
        max=h;  ��дΪ����������ʽ: */
    max=(g>h?g:h);
    printf("%d\n",max);

    //���ű���ʽ�������ö��Ÿ����Ķ������ʽ
    //������������ִ�У���������ʽ�Ľ�������һ������ʽ�Ľ��
    int j=3,k=5;
    int l=(j>k,j=k+1,j,k=j-2);
    printf("%d\n",l);

    //ʹ��struct stu�ṹ�����ʹ���һ��ѧ������s1,����ʼ��
    struct stu s1={"˧��",20,"20204073127"};
    struct stu*ps=&s1;//ȡ��ַ
    printf("%s\n",(*ps).name);//�ý����õ�ַ����ӡ
    printf("%s\n",ps->name);//->�ṹ��ָ��->��Ա
    printf("%s\n",s1.name);
    printf("%d\n",s1.age);
    printf("%s\n",s1.id);
    //�ṹ��.��Ա��

    //��ʽ����ת����
    //C������������������������ȱʡ�������͵ľ��������еġ�
    //Ϊ�˻��������ȣ�����ʽ�е��ַ��Ͷ����Ͳ�������ʹ��֮ǰ��ת��Ϊ��ͨ���ͣ�����ת����Ϊ��������
    //���������ǰ��ձ������������͵ķ���λ��������
    //long double
    //double
    //float
    //unsigned long int
    //long int
    //unsigned int
    //int
    //���ĳ�������������������ϵͣ�����Ҫת��Ϊ��һ�������������ͺ�ִ������
    char m=3;
    //char����ֻռ1���ֽڣ�Ҳ����8������λ��������ȴռ4���ֽڣ����Ի��Ȱ�char��������Ϊ32������λ�ٽ�������
    //00000000 00000000 00000000 00000011
    char n=127;
    //00000000 00000000 00000000 01111111
    char o=m+n;
    //00000000 00000000 00000000 10000010
    //����λ����λ
    //11111111 11111111 11111111 10000010 --����
    //11111111 11111111 11111111 10000001 --����
    //10000000 00000000 00000000 01111110 --ԭ��
    printf("%d\n",o);//-126

    char p=1;
    //%u���޷�������
    printf("%u\n",sizeof(p));
    printf("%u\n",sizeof(+p));//+���������㣬���Ե���������Ϊ4���ֽ�
    printf("%u\n",sizeof(!p));//!���߼�����,������������
    return 0;
}