#include<stdio.h>
//�Զ������ͣ��ṹ��  ö��  ����
//�ṹ�壺
//1.�ṹ�����͵�����
//2.�ṹ��������
//3.�ṹ������Ķ���ͳ�ʼ��
//4.�ṹ���ڴ����
//5.�ṹ�崫��
//6.�ṹ��ʵ��λ�Σ�λ�ε����&����ֲ�ԣ�
//struct Tag
//{
//	member-list;
//}variable-list;

//1.�ṹ�����͵�����
//struct Stu
//{
//	char name[20];
//	char tele[12];
//	char sex[10];
//	int age;
//}s4,s5,s6; // �����Ǳ����б�
//struct Stu s3;  // ���ﴴ����s3,s4,s5,s6 ����ȫ�ֱ���
//int main()
//{
//	struct Stu s1;//����s1,s2Ϊ�ֲ�����
//	struct Stu s2;
//	return 0;
//}

//2.�ṹ��������
//struct Node
//{
//	int date;
//	struct Node next;
//};
////�����Ľṹ���Ǵ�ģ����ÿ��struct Node���涼������һ��int ��struct Node�����ͣ���ô���������ô������Ŀռ���ܹ���ʹ���أ�
//struct Node
//{
//	int date;
//	struct Node* next; // ���Կ��������ָ��ָ��һ���ռ䣬�������ڴ�Ŀ���
//};

//3.�ṹ������Ķ���ͳ�ʼ��
//struct T
//{
//	double weight;
//	short age;
//};
//struct S
//{
//	char c;
//	struct T st;
//	int a;
//	double d;
//	char arr[20];
//};
//int main()
//{
//	struct S s = { 'c', {78.8,30}, 20, 3.14, "zhangsan" };
//	printf("%c  %lf %d %d %lf %s", s.c,s.st.weight,s.st.age, s.a, s.d, s.arr);
//return 0;
//}

//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};    12
//
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};     8
//
//int main()
//{
//	struct S1 s1 = { 0 };
//	printf("%d\n", sizeof(s1));
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));
//	return 0;
//}


//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//int main()
//{
//	struct S3 s3 = { 0 };
//	printf("%d\n", sizeof(s3));
//	struct S4 s4 = { 0 };
//	printf("%d\n", sizeof(s4));
//	return 0;
//}

//#include<stddef.h>
//size_t offsetof(structName,memberName);
//struct S
//{
//	char c;
//	int i;
//	double d;
//};
//int main()
//{
//	printf("%d\n", offsetof(struct S, c));
//	printf("%d\n", offsetof(struct S, i));
//	printf("%d\n", offsetof(struct S, d));
//}
//5.�ṹ�崫��

//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//void Init(struct S* ps)
//{
//	ps->a = 100;
//	ps->c = 'd';
//	ps->d = 3.14;
//}
//void Print1(struct S tmp)
//{
//	printf("%d\n", tmp.a);
//	printf("%c\n", tmp.c);
//	printf("%lf\n", tmp.d);
//}  
//void Print2(const struct S* ps)
//{
//	printf("%d\n", ps->a);
//	printf("%c\n", ps->c);
//	printf("%lf\n", ps->d);
//}
//int main()
//{
//	struct S s = { 0 };
//	Init(&s);
//	Print1(s); // ��Ϊ�����Ҳ��������޸�������������ݣ���ֻ���������ӡ����
//	Print2(&s);
//}

//6.�ṹ��ʵ��λ�Σ�λ�ε����&����ֲ�ԣ�
//ʲô��λ��?(���λָ���Ƕ�����λ)
//λ�ε������ͽṹ�����Ƶģ���������ͬ��
//1.λ�εĳ�Ա������int��unsigned int �� signed int 
//2.λ�εĳ�Ա��������һ��ð�ź�һ������

//λ�ε��ڴ����
//1.λ�εĳ�Ա������int  unsigned int  signed int ������char ���������μ��壩����
//2.λ�εĿռ����ǰ�����Ҫ��4���ֽڣ�int������һ���ֽڣ�char���ķ�ʽ�����ٵ�
//3.λ����ƺܶ಻ȷ�������أ�λ���ǲ���ƽ̨�ģ�ע�ؿ���ֲ�ĳ���Ӧ�ñ���ʹ��λ�Ρ�
//struct S
//{
//	int a : 2;
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};   //aռ����bitλ��bռ5����cռ10��bitΪ������һ��ռ����17��bitλ����ʣ��15��bitλ���Ų���30��bitλ��
////����ʣ�µ�30��bitλ����Ҫ���¿���һ���ռ������ã�ÿ�ο�������int���Ϳ��ٵģ�32���ֽڣ�����һ����Ҫ����8���ֽڵĿռ�
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}



//ö�٣�����˼�����һһ�о٣�
//1.ö�ٵĶ���
//2.ö�ٵ��ŵ�
//3.ö�ٵ�ʹ��

////ö�ٵ�����
//enum Day
//{
//	//ö�ٵĿ���ȡֵ
//	Mon,
//	Tues,
//	Wed,
//	Thur,
//	Fri,
//	Sat,
//	Sun
//};
//int main()
//{
//	enum Day s = Thur; // �����Thur������ö������������������ͱ���
//	return 0;
//}

//ö�ٵ��ŵ�
//���ǿ���ʹ��#define���峣����Ϊʲô��Ҫʹ��ö�٣�
//1.���Ӵ���Ŀɶ��ԺͿ�ά����
//2.��#define����ı��Է��Ƚ�ö�������ͼ�飬�����Ͻ�
//3.������������Ⱦ
//4.���ڵ���
//5.ʹ�÷��㣬һ�ο��Զ���������

//����
//1.�������͵Ķ���
//����Ҳ��һ��������Զ������ͣ��������Ͷ���ı���Ҳ����һϵ�еĳ�Ա����������Щ��Ա����һ��ռ䣨��������Ҳ�й����壩
//union Un
//{
//	char c;
//	int i;
//};// ��������Ϊ��ռ�ռ�Ĵ�С����5������ģ���4����Ϊ���ǹ���ͬһ��ռ䣬������ռ�ռ�Ĵ�С�������������Ŀռ�
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//	
//	
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//	return 0;
//}

//2.���ϵ��ص�


//3.���ϴ�С�ļ���

union Un
{
	int a;
	char arr[5];  //������������������
};

int main()
{
	union Un u;
	printf("%d\n", sizeof(u)); //���Ϊ8   int��С��4���ֽڣ�����Ĵ�СӦ������������Ա��������
	return 0;
}
