#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    float first_num;
    float second_num;
    int factorial = 1;

    float res = 0;
    char operation;
    int check = 0;

    float i = 1.F;

    cout << "Возможные операторы:\n1. '+' - сумма;\n2. '-' - разность;\n3. '*' - умножение;\n4. ':' - деление;\n5. '^' - возведение в степепь;\n6. 'v' - квадратный корень;\n7. '%' - нахождение 1 процента;\n8. '!' - факториал;\n9. 'q' - выход\n";

    while (true) 
    {
        cout << "Введите оператор : ";
        cin >> operation;

        if (operation == 'q') 
        {
            cout << "Выход из программы.";
            break;
        }

        if (operation != 'v' && operation != '%' && operation != '!' && check == 0) 
        {
            cout << "Введите первое число: ";
            cin >> first_num;
            cout << "Введите второе число: ";
            cin >> second_num;
        }

        else
        {
            cout << "Введите число: ";
            cin >> first_num;
        }
        
        switch (operation) 
        {
            case '+':
                if (check == 0) 
                {
                    res = first_num + second_num;
                    cout << "Результат: " << res << endl;
                }
                else 
                {
                    res = res + first_num;
                    cout << "Результат: " << res << endl;
                }
                break;
            case '-':
                if (check == 0)
                {
                    res = first_num - second_num;
                    cout << "Результат: " << res << endl;
                }
                else
                {
                    res = res - first_num;
                    cout << "Результат: " << res << endl;
                }
                break;
            case '*':
                if (check == 0)
                {
                    res = first_num * second_num;
                    cout << "Результат: " << res << endl;
                }
                else
                {
                    res = res * first_num;
                    cout << "Результат: " << res << endl;
                }
                break;
            case ':':
                if (check == 0)
                {
                    res = first_num / second_num;
                    cout << "Результат: " << res << endl;
                }
                else
                {
                    res = res / first_num;
                    cout << "Результат: " << res << endl;
                }
                break;
            case '^':
                if (check == 0)
                {
                    res = pow(first_num, second_num);
                    cout << "Результат: " << res << endl;
                }
                else
                {
                    res = pow(res, first_num);
                    cout << "Результат: " << res << endl;
                }
                break;
            case 'v':
                if (check == 0)
                {
                    res = sqrt(first_num);
                    cout << "Результат: " << res << endl;
                }
                else
                {
                    res = sqrt(res);
                    cout << "Результат: " << res << endl;
                }
                break;
            case '%':
                if (check == 0)
                {
                    res = first_num / 100;
                    cout << "Результат: " << res << endl;
                }
                else
                {
                    res = res / 100;
                    cout << "Результат: " << res << endl;
                }
                break;
            case '!':
                if (check == 0)
                {
                    for (i; i <= first_num; i++) factorial *= i;
                    res += factorial;
                    cout << "Результат: " << res << endl;
                }
                else
                {
                    for (i; i <= res; i++) factorial *= i;
                    res += factorial;
                    cout << "Результат: " << res << endl;
                }
                break;
            default:
                cout << "пошел нахуй" << endl;
                break;
        }
        check++;
        cout << "\n";
    }
}