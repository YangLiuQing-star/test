//#include <stdio.h>
//
//
//
//void f1() {
//	int num = 10;
//	printf("num=%d", num);
//}
//
////������������Ĭ����ֵ���ݵģ�������ֵ�������ں������޸ģ�����Ӱ�쵽ԭ����ֵ
//void f2(int n) {
//	n++;
//	printf("\nf2�����е�n=%d", n); // n=10
//}
//
////c���Բ�֧�ֺ������أ�������ͨ�������ĸ�����ͬ���������Ͳ�ͬ��������
////void f2(int n, int n2) {
////	
////}
//
////���ϣ�������ڵı������޸ĺ�����ı��������Դ�������ĵ�ַ&��
////��������ָ��ķ�ʽ������������Ч���Ͽ���������(������ָ��) 
//void f3(int *p) {
//	(*p)++;// �޸Ļ�Ժ�����ı�����Ӱ�죬�˴���ʹ�������ֵ��1
//}
//
//void main() {
//	//�����еı����Ǿֲ��ģ������ⲻ��Ч
//	//printf("num=%d", num);
//
//	int n = 9;
//	f2(n);
//	f3(&n);//n = 10
//	printf("\nmain������ n=%d", n); //10
//	getchar();
//}