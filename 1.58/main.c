#include <stdio.h>
#include <stdlib.h>

//ö�٣�
//����˼�����һһ�о�
//���壺
enum color
{
    //ö�ٵĿ���ȡֵ-����
    RED,//0
    GREEN,//1
    BLUE//2
    //�����ö�ٳ���Ĭ��ֵ����Ϊ0,1,2
};

enum sex
{
    MALE,
    FEMALE=9,//�����ǰ�ö�ٳ�����һ����ʼֵ������Ͳ��ܸ���
    SECRET
};

//ö�ٵ��ŵ㣺
//1.���Ӵ���Ŀɶ��ԺͿ�ά����
//2.��#define����ı�ʶ���Ƚ�ö�������ͼ�飬�����Ͻ���
//3.��ֹ��������Ⱦ(��װ)
//4.���ڵ���
//5.ʹ�÷��㣬һ�ο��Զ���������

//����(������)
//�������͵Ķ��壺
//����Ҳ��һ��������Զ��������������Ͷ���ı���Ҳ����һϵ�еĳ�Ա����������Щ��Ա����ͬһ��ռ�(��������Ҳ�й�����)������:
union un
{
    char c;
    int i;
};

//���ϵ��ص�:
//���ϵĳ�Ա�ǹ���ͬһ���ڴ�ռ�ģ�����һ�����ϱ����Ĵ�С������������Ա�Ĵ�С(��Ϊ�������ٵ����������������Ǹ���Ա)

//���ϴ�С�ļ���:
//1.���ϵĴ�С����������Ա�Ĵ�С��
//2.������Ա��С����������������������ʱ�򣬾�Ҫ���뵽����������������.

int main()
{
    enum sex s=MALE;//ֻ����ö�ٳ�����ö�ٱ�����ֵ������������͵Ĳ���
    printf("%d %d %d\n",RED,GREEN,BLUE);//0,1,2
    printf("%d %d %d\n",MALE,FEMALE,SECRET);//0,9,10

    union un a;
    printf("%d\n",sizeof(a));
    return 0;
}