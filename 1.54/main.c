#include <stdio.h>
#include <stdlib.h>

//1���ṹ�壺
//���壺�ṹ��һЩֵ�ļ��ϣ���Щֵ��Ϊ��Ա�������ṹ��ÿ����Ա�����ǲ�ͬ���͵ı���
//�ṹ��������
/* struct tag
   {
     member-list;
   }variable-list;
*/

//����һ��ѧ�����ͣ���ͨ��ѧ������������ѧ������(����)
//����ѧ�������ԣ�����-�绰-�Ա�-����
struct Stu
{
    char name[20];//����
    char tele[12];//�绰
    char sex[10];//�Ա�
    int age;//����
};

//�����ṹ�����ͣ�
struct//��ǩ����ʡ��
{
    int a;
    char b;
}x;//���Ǳ����б�����ʡ��

//�����ṹ��ָ�룺
struct
{
    int a;
    char b;
}*pa;


//2���ṹ�������ã�
//���潲���ݽṹ��������������
struct node
{
    int data;
    struct node*next;
};


//3���ṹ���ڴ����:
//��Ҳ��һ���ر����ŵĿ���
//������μ��㣿�ṹ��������
//1����һ����Ա����ṹ�����ƫ����Ϊ0�ĵ�ַ����
//2������������ԱҪ���뵽ĳ������(������)���������ĵ�ַ��
//������=������Ĭ�ϵ�һ����������ó�Ա��С�Ľ�Сֵ
//VS������Ĭ�϶�����Ϊ8��gcc������û��Ĭ�϶�����(�ٷ�˵�ģ�������������˵��4)
//3���ṹ���ܴ�СΪ��������(ÿ����Ա��������һ��������)��������
//4�����Ƕ���˽ṹ��������Ƕ�׵Ľṹ����뵽�Լ�����������������������
//�ṹ��������С����������������(��Ƕ�׽ṹ��Ķ�����)����������

//Ϊʲô�����ڴ���룿
//�󲿷ֲο����϶�������˵�ģ�
//1.ƽ̨ԭ��(��ֲԭ��)�������е�Ӳ��ƽ̨���ܷ��������ַ�ϵ��������ݵģ�
//  ĳЩӲ��ƽֻ̨����ĳЩ��ַ��ȡĳЩ�ض����͵����ݣ������׳�Ӳ���쳣��
//2����ԭ��:���ݽṹ(������ջ)Ӧ�þ����ܵ�����Ȼ�߽��϶��롣
//  ԭ�����ڣ�Ϊ�˷���δ������ڴ棬��������Ҫ�������ڴ����;��������ڴ���ʽ���Ҫһ�η��ʡ�
//������˵:
//�ṹ����ڴ�������ÿռ�����ȡʱ�������

//������ƽṹ���ʱ�����Ǽ�Ҫ������룬��Ҫ��ʡ�ռ䣬���������
//��ռ�ÿռ�С�ĳ�Ա����������һ��

//�޸�Ĭ�϶�������
//#pragma���Ԥ����ָ����Ըı����ǵ�Ĭ�϶�����
//���磺
/*
#include <stdio.h>
#pragma pack(8)//����Ĭ�϶�����Ϊ8
struct s1
{
    char c1;
    int i;
    char c2;
};
#pragma pack()//ȡ�����õ�Ĭ�϶���������ԭΪĬ��
*/

//offsetof����������ṹ��ƫ����
//size_t offsetof(struct Name, member Name);
//����ͷ�ļ�#include <stddef.h>
//���磺
/*
#include <stddef.h>

struct s
{
   char c;
   int a;
   double b;
};

int main()
{
   printf("%d\n",offsetof(struct s,c));
   printf("%d\n",offsetof(struct s,a));
   printf("%d\n",offsetof(struct s,b));
}
*/

//�ٶȱ����⣺
//дһ���꣬����ṹ����ĳ����������׵�ַ��ƫ�ƣ�������˵��
//���죺offsetof���ʵ��
//ע�����ﻹûѧ�꣬�Ⱥ���ѧ�˺���ʵ��

//4���ṹ�崫��
//�������ε�ʱ�򣬲�������Ҫѹջ������ʱ��Ϳռ��ϵ�ϵͳ����
//�������һ���ṹ������ʱ�򣬽ṹ����󣬲���ѹջ��ϵͳ�����Ƚϴ����Իᵼ�����ܵ��½�
//���ۣ��ṹ�崫�ε�ʱ��Ҫ���ṹ��ĵ�ַ
/*
void print(struct Stu*ps)
{
   printf("%s %s %s %d\n",ps->name,ps->tele,ps->sex,ps->age);
}

int main()
{
   struct Stu s={0};
   print(&s);
}
*/

//5���ṹ��ʵ��λ��
//ʲô��λ�Σ�
//λ�ε������ͽṹ�����Ƶģ���������ͬ
//1.λ�εĳ�Ա������int unsigned int��signed int��
//2.λ�εĳ�Ա�������һ��ð�ź�һ������
//���磺
/*struct A
{
   int a:2;//ָaֻ��Ҫռ2������λ
   int b:5;//bֻ��Ҫռ5������λ
   int c:10;//cֻ��Ҫռ10������λ
   int d:30;//dֻ��Ҫռ30������λ
}
*/
//A����һ��λ������
//��λ��A�Ĵ�С�Ƕ����أ�
//printf("%d\n",sizeof(struct A));

//λ���е�λ��ָ������λ

//λ�ε��ڴ����
//1.λ�εĳ�Ա������int unsigned int signed int������char(�������μ���)����
//2.λ�εĿռ����ǰ�����Ҫ��4���ֽ�(int)����1���ֽ�(char)�ķ�ʽ�����ٵ�
//3.λ���漰�ܶ಻ȷ�����أ�λ���ǲ���ƽ̨�ģ�ע�ؿ���ֲ�ĳ���Ӧ�ñ���ʹ��λ��

//λ�εĿ�ƽ̨����
//1.intλ�α������з����������޷������ǲ�ȷ���ġ�
//2.λ�������λ����Ŀ����ȷ����(16λ�������16��32λ�������32д��27,��16λ����������⡣
//3.λ���еĳ�Ա���ڴ��д������ҷ��䣬���Ǵ�����������׼��δ����
//4.��һ���ṹ��������λ�Σ��ڶ���λ�γ�Ա�Ƚϴ��޷������ڵ�һ��λ��ʣ���λʱ������ʣ���λ�������ã����ǲ�ȷ���ġ�

//�ܽ�:
//���ṹ��ȣ�λ�ο��Դﵽͬ����Ч�������ǿ��ԺܺõĽ�ʡ�ռ䣬�����п�ƽ̨���������

//λ�ε�Ӧ�ã�
//΢��ͼƬ

int main()
{
    //�ṹ���ʼ��
    struct Stu a={"����","1008611","����",20};
    printf("%s %s %s %d\n",a.name,a.tele,a.sex,a.age);

    return 0;
}