#include <iostream>
#include <cstdlib>
#include <ctime>
#include <time.h>
#include <iomanip>
using namespace std;

//// Задание 1
//float calculateNumberOfPower(int foundation, int exponent)
//{
//    float result = 1;
//    //проверяем корректность введенных данных
//    if (foundation == 0 && exponent <= 0)
//    {
//        cout << "Введены неверные данные" << endl;
//        return NULL;
//    }
//    //возведение в степень
//    if (exponent >= 0)
//    {
//        for (int i = exponent; i > 0; i--)
//        {
//            result *= foundation;
//        }
//    }
//    else
//    {
//        for (int i = exponent; i < 0; i++)
//        {
//            result /= foundation;
//        }
//    }
//    return result;
//}
// 
//// Задание 2
//void su(int a, int b)
//{
//
//    int sum = 0;
//    if (a < b)
//    {
//        int i = a + 1;
//        while (i < b)
//        {
//            sum += i;
//            i++;
//        }
//        cout << "сумма " << sum << endl;
//    }
//    else if (a > b)
//    {
//        int i = b + 1;
//        while (i < a)
//        {
//            sum += i;
//            i++;
//        }
//        cout << "сумма " << sum << endl;
//    }
//    else
//    {
//        cout << "сумма " << sum << endl;
//    }
//}

//// Задание 3
//int calculatePerfectNumber(int number)
//{
//    int sum = 0;
//    int summand = 1;
//    if (number % 2 != 0)
//    {
//        summand = 2;
//    }
//    for (int i = 1; i <= number / 2; i += summand)
//    {
//        if (number % i == 0)
//        {
//            sum += i;
//        }
//        if (sum > number)
//        {
//            return 0;
//        }
//    }
//
//    if (sum == number)
//    {
//        return number;
//    }
//    return 0;
//}

////Задание 4
//void card(int suit, int num)
//{
//    char card[13] = { 'A','2','3','4','5','6','7','8','9','0','J','Q','K' };
//    cout << " ___________________\n";
//    cout << "|                   |\n";
//    cout << "|                   |\n";
//    if (num == 10)cout << '|' << setw(4) << "1" << card[num - 1] << "              |\n";
//    else cout << '|' << setw(4) << card[num - 1] << "               |\n";
//    cout << "|                   |\n";
//    cout << "|                   |\n";
//    cout << "|                   |\n";
//    cout << "|                   |\n";
//    cout << "|                   |\n";
//    switch (suit)
//    {
//    case 1: cout << '|' << setw(12) << "Черви" << "       |\n"; break;
//    case 2: cout << '|' << setw(12) << "Буби" << "       |\n"; break;
//    case 3: cout << '|' << setw(12) << "Крести" << "       |\n"; break;
//    case 4: cout << '|' << setw(12) << "Вини" << "       |\n"; break;
//    }
//    cout << "|                   |\n";
//    cout << "|                   |\n";
//    cout << "|                   |\n";
//    cout << "|                   |\n";
//    if (num == 10)cout << "|              " << "1" << card[num - 1] << "   |\n";
//    else cout << "|               " << card[num - 1] << "   |\n";
//    cout << "|                   |\n";
//    cout << "|___________________|\n";
//}
////Задание 5
//bool isHappy(int number) {
//    if (number < 100000 || number > 999999) return false;
//    int sum1, sum2;
//    sum1 = number % 10 + (number / 10) % 10 + (number / 100) % 10;
//    sum2 = (number / 1000) % 10 + (number / 10000) % 10 + (number / 100000) % 10;
//    if (sum1 == sum2) return true;
//    return false;
//}
// 
////Задание 6
//bool vys(int year)
//{
//    bool res = false;
//    if (year % 4 == 0)
//        res = true;
//    if (year % 100 == 0)
//        res = false;
//    if (year % 400 == 0)
//        res = true;
//    return res;
//}
//int date(int d, int m, int y)
//{
//    int k = d;
//    if (vys(y) && (m > 2))
//        k += y * 366;
//    else k += y * 365;
//    switch (m - 1)
//    {
//    case 12: k += 31;
//    case 11: k += 30;
//    case 10: k += 31;
//    case  9: k += 30;
//    case  8: k += 31;
//    case  7: k += 31;
//    case  6: k += 30;
//    case  5: k += 31;
//    case  4: k += 30;
//    case  3: k += 31;
//    case  2: k += 28;
//    case  1: k += 31;
//    }
//    return k;
//}
//int difference(int day1, int day2, int mon1, int mon2, int year1, int year2)
//{
//    int k = date(day2, mon2, year2) - date(day1, mon1, year1) + 1;
//    return k;
//}

////Задание 7
//void printArr(int arr[], int dimention);
//float averageArr(int arr[], int dimention);

////Задание 8
void printArr(int arr[], int dimention);
void calculatingMassiv(int arr[], int dimention);
    

int main()
{
    using namespace std;
    setlocale(0, "");
    srand(time(0));
	////Задание 1

	////Задание 2
	//const int X = 2;
	//const int Y = 4;
	//int num[X][Y] = {};

	//cout << "Введите число =>";
	//cin >> num[0][0];
	//for (int t = 0; t < X; t++)
	//{
	//	for (int i = 1; i < Y; i++)
	//	{
	//		num[t][i] = (t * Y) + (i + (num[0][0] - 1)) + 1;
	//	}
	//}
	//for (int t = 0; t < X; t++)
	//{
	//	for (int i = 0; i < Y; i++)
	//		cout << num[t][i] << "\t";
	//	cout << endl;
	//}

	////Задание 3
    //объявление текущего и результирующего массива
    //int mass[25][25];
    //int out_mass[25][25];

    ////ввод размерности массива с проверкой
    //cout << "Введите размерность массива M x N (не более 25 х 25) " << endl;
    ////по строкам
    //int m;
    //do
    //{
    //    cout << "Введите M: ";
    //    cin >> m;
    //} while (m <= 0 || m > 25);
    ////по столбцам
    //int n;
    //do
    //{
    //    cout << "Введите N: ";
    //    cin >> n;
    //} while (n <= 0 || n > 25);

    ////заполнение и вывод текущего массива 
    //cout << "Текущий массив: " << endl;
    //for (int i = 0; i < m; i++)
    //{
    //    for (int j = 0; j < n; j++)
    //    {
    //        mass[i][j] = rand() % 50 - 23;
    //        cout << mass[i][j] << "\t";
    //    }
    //    cout << endl;
    //}

    ////ввод количества сдвигов
    //cout << "Введите количество сдвигов: ";
    //int dt;
    //cin >> dt;
    //int sm;

    ////ввод смещения
    //cout << "Куда сдвигаем (1 - вправо, 2-влево, 3 - вверх, 4 - вниз): ";
    //int sd;
    //cin >> sd;

    ////временная переменная обмена строк и столбцов
    //int temp = m;

    ////проверка и уменьшение смещения, если смещение больше количества элементов - меньше двигать
    //if (sd == 1 || sd == 2)
    //{
    //    dt = dt % n;
    //}
    //else
    //{
    //    dt = dt % m;
    //    //менем размерность обработки
    //    m = n;
    //    n = temp;
    //}

    ////переменная смещения
    //sm = dt;

    ////сдвиг вниз - это как сдвиг вверх только n-sm смещений 
    //if (sd == 4)
    //{
    //    sm = n - sm;
    //    sd = 3;
    //}

    ////заполнение результирующего массива со смещением
    //for (int i = 0; i < m; i++)
    //{
    //    for (int j = 0; j < n; j++)
    //    {
    //        switch (sd)
    //        {
    //        case 1://right
    //            if (sm < 1) sm = n;
    //            out_mass[i][j] = mass[i][n - sm];
    //            sm--;
    //            break;
    //        case 2://left
    //            if (sm + 1 > n) sm = 0;
    //            out_mass[i][j] = mass[i][sm];
    //            sm++;
    //            break;
    //        case 3://up
    //            if (sm == n) sm = 0;
    //            out_mass[j][i] = mass[sm][i];
    //            sm++;
    //            break;
    //        default: cout << "Неверный выбор. Останов программы.";
    //            return 0;
    //            break;
    //        }
    //    }
    //}

    ////меняем размерность для вывода назад
    //if (sd == 3 || sd == 4)
    //{
    //    temp = n;
    //    n = m;
    //    m = temp;
    //}

    //cout << "Массив со сдвигом: " << endl;
    ////вывод результирующего массива
    //for (int i = 0; i < m; i++)
    //{
    //    for (int j = 0; j < n; j++)
    //    {
    //        cout << out_mass[i][j] << "\t";
    //    }
    //    cout << endl;
    //}
    //return 0;
    
    ////Задание 4 - делали на уроке

    ////Задание 5 
//const int size = 4;
//int array[size][size];
//int arr[4];
//for (int i = 0; i < size; i++) {
//    for (int j = 0; j < size; j++)
//    {
//        array[i][j] = 1 + rand() % 20;
//    }
//}
//for (int i = 0; i < size; i++) {
//    int count = 0;//сумма по строке
//    for (int j = 0; j < size; j++)
//    {
//        count += array[i][j];
//        cout << array[i][j] << "\t";
//    }
//    cout << " || " << count << endl;
//}
//cout << "-----------------------------------------------------------------------" << endl;
//for (int i = 0; i < 4; i++) {
//    int count1 = 0;//сумма по столбцу
//    for (int j = 0; j < 4; j++)
//    {
//        count1 += array[j][i];
//    }
//    arr[i] = count1;
//}
//for (int i = 0; i < 4; i++) {
//    cout << arr[i] << "\t";
//}
   ////Задание 6
    //const int size = 5;
    //int firstarray[size][size * 2];
    //int secondarray[size][size];


    //for (int i = 0; i < size; i++)
    //{
    //    for (int j = 0; j < size * 2; j++)
    //    {
    //        firstarray[i][j] = 0 + rand() % 50;
    //        cout << firstarray[i][j] << "\t";
    //        if (j & 1)
    //            secondarray[i][j / 2] = firstarray[i][j - 1] + firstarray[i][j];
    //    }
    //    cout << endl;
    //}

    //cout << endl;
    //for (int i = 0; i < size; i++)
    //{
    //    for (int j = 0; j < size; j++)
    //        cout << secondarray[i][j] << "\t";
    //    cout << endl;
    //}

    ////ФУНКЦИИ
    ////Задание 1

    //int userFoundation;
    //int userExponent;
    //float result;
    //
    //cout << "X'Y" << endl <<
    //"Введите X: ";
    //cin >> userFoundation;
    //cout << "Введите Y: ";
    //cin >> userExponent;
    //result = calculateNumberOfPower(userFoundation, userExponent);
    //if (result == NULL && userExponent <= 0)
    //{
    //    return 1;
    //}
    //
    //cout << "Result " << userFoundation << "^" << userExponent << " = " << result << endl;
    //return 0;
 
    ////Задание 2
     //int c;
     //int d;
     //cout << "Введите первое число: ";
     //cin >> c;
     //cout << "Введите второе число: ";
     //cin >> d;
     //su(c, d);
     //return 0;
     // 

     ////Задание 3
//int startNumber;
//int finishNumber;
//int countPerfectNumber = 0;
//int perfectNumber;
//
//cout << "Введите начальное число: ";
//cin >> startNumber;
//cout << "Ведите конечное число: ";
//cin >> finishNumber;
////проверка валидности введенного диапазона
//if (finishNumber <= startNumber || finishNumber < 0 || startNumber < 0)
//{
//    cout << "Ошибка." << endl;
//    return 1;
//}
//
//for (int i = startNumber; i <= finishNumber; i++)
//{
//    perfectNumber = calculatePerfectNumber(i);
//    //если вернул не 0, то выводим на экран число
//    if (perfectNumber != 0)
//    {
//        cout << "Совершенное число = " << perfectNumber << endl;
//        countPerfectNumber++;
//    }
//}
//
//cout << "Совершенное число = " << countPerfectNumber << endl;
//return 0;

////Задание 4
//int a, s;
//cout << "Введите карту\n1 - Единица \n2 - Двойка\n3 - Тройка\n4 - Четверка\n5 - Пятерка\n6 - Шестерка\n7 - Семерка\n8 - Восьмерка\n9 - Девятка\n10 - Десятка\n11 - Валет\n12 - Дама\n13 - Кароль" << endl;
//cin >> a;
//cout << "\nМасть\n1. Черви.\n2. Буби\n3. Крести\n4. Вини\n";
//cin >> s;
//card(s, a);

////Задание 5
//int n = 0;
//cout << "Введите 6ти значное число: ";
//cin >> n;
//if (isHappy(n)) cout << "Счастливое.";
//else cout << "Не счастливое.";
//return 0;

////Задание 6
//int d1, d2, m1, m2, y1, y2;
//cout << "Введите первый день: ";
//cin >> d1;
//cout << "Введите первый месяц: ";
//cin >> m1;
//cout << "Введите первый год: ";
//cin >> y1;
//cout << "Введите второй день: ";
//cin >> d2;
//cout << "Введите второй месяц: ";
//cin >> m2;
//cout << "Введите втьорой год: ";
//cin >> y2;
//cout << "Между датами " << difference(d1, d2, m1, m2, y1, y2) << " дней\n";

////Задание 7
//int massiv[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//int arDimention = sizeof(massiv) / sizeof(int);
//cout << "The program searches the arithmetic mean of the numbers array" << endl;
//printArr(massiv, arDimention);
//cout << "Average = " << averageArr(massiv, arDimention) << endl;
//return 0;
//}
//
//void printArr(int arr[], int dimention)
//{
//    cout << "Start massiv: ";
//    for (int i = 0; i < dimention; i++)
//    {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//}
//
//float averageArr(int arr[], int dimention)
//{
//    float average = 0;
//    for (int i = 0; i < dimention; i++)
//    {
//        average += arr[i];
//    }
//    average /= dimention;
//    return average;

////Задание 8
int massiv[] = { 1, 2, -3, 1, -2, 0, -7, 0, -9 };
int arDimention = sizeof(massiv) / sizeof(int);
cout << "Определяем количество положительных, отрицательных и нулевых элементов передаваемого массива" << endl;
//выводим на экран исходный массив
printArr(massiv, arDimention);
//вызываем функцию подсчета +/-/0 элементов
calculatingMassiv(massiv, arDimention);
return 0;
}

void printArr(int arr[], int dimention)
{
    cout << "Start massiv: ";
    for (int i = 0; i < dimention; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void calculatingMassiv(int arr[], int dimention)
{
    int plus = 0;
    int minus = 0;
    int zero = 0;

    for (int i = 0; i < dimention; i++)
    {
        if (arr[i] > 0)
        {
            plus++;
        }
        else if (arr[i] < 0)
        {
            minus++;
        }
        else
        {
            zero++;
        }
    }
    cout << "Колличество положительных = " << plus << endl <<
        "Колличество отрицательных= " << minus << endl <<
        "Колличество нулей = " << zero << endl;
}

