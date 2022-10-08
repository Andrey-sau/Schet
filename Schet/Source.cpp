#include <iostream>
using namespace std;

//#define TASK_1
//#define TASK_2
//#define TASK_3
//#define TASK_4
//#define TASK_5
#define TASK_6
void main()
{
	setlocale(LC_ALL, "");
#ifdef TASK_1
	int a, b;

	cout << "Введите число-"; cin >> a;
	cout << "Введите число-"; cin >> b;
	if (a == 2 && b == 3)
	{
		cout << "2+3=5" << endl;
	}
	else if (a < 2 || a > 2)
	{
		cout << endl;
	}
	else if (b < 3 || b > 3)
	{
		cout << endl;
	}
	cout << "\n______________________________________________________________\n" << endl;
#endif // TASK_1



#ifdef TASK_2
	int i = 3;
	i = i++ + ++i;//1) Prefix increment ++i=4, 2)Сложение 4+4=8, 3)Присваевание i = 8, 4) Postfix increment i=8+1=9
	cout << i << endl;// результат i=9
	cout << endl;
	cout << "\n_______________________________________________________________\n";

#endif // TASK_2


#ifdef TASK_3
	int i = 3;
	i = i++ + 1 + ++i * 2;// 1)Prefix increment++i=4, 2)Умнажение i++ *2 результат 4*2=8, 3)Сложение 4+1+8=13, 4)Присваевание i=13, 5)Postfix increment i=13+1=14
	cout << i << endl;// Результат i=14
	cout << endl;
	cout << "\n_________________________________________________________________\n";
#endif // TASK_3



#ifdef TASK_4
	int i = 3;
	i = i++ + 1 + (++i *= 2);//1)Prefix increment в скобках ++i=4, 2) Умножить 4 на присвоеваемое 2=8, 3)Сложение 8+1+(8)=17, 5)Присваевание i=1? 6) Postfix increment i=17+1=18
	cout << i << endl;//Результат i=18
	cout << endl;
	cout << "\n___________________________________________________________________\n";
#endif // TASK_4


#ifdef TASK_5
	int i = 3;
	i += i++ + 1 + (++i *= 2);//1)Prefix increment в скобках ++i=4, 2)Умнажаем 4 на присвоеваемое 2=8, 3)Складываем 8+1+8=17, 4)Присвоеное i =17 + присвоенное после умнажения 8 =25, 5)Postfix increment i=25+1=26
	cout << i << endl;// Результат i=26
	cout << endl;
	cout << "\n_____________________________________________________________________\n";
#endif // TASK_5



#ifdef TASK_6
	int i = 3;
	i *= i++ + 1 + (++i += 2);//1)Prefix increment в скобках ++i 3+1=4, 2)сложение в скобках с присваеванием 4+2=6, 3)Присваеваем i = 6 и увеличиваем в 6 раз получаем i=36, 
	//4) Полученный результат i=36 складываем 36+1+36=73, 6)Postfix increment i++ 73+1=74 
	cout << i << endl;
	cout << endl;
	cout << "\n______________________________________________________________________\n";
#endif // TASK_6


}
