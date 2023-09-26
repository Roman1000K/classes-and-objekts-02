#include<iostream>
#include<Windows.h> 

class Counter {
private:
    int num;
    
public:
    int increase() 
    {
        return num++;
    }

    int decrease() 
    {
        return num--;
    }

    void currentValue()
    {
        std::cout << num << "\n";
    }

    int mod(int num1)
    {
        return num = num1;
    }
};

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Counter count;
   
    std::cout << "Вы хотите указать начальное значение счётчика ? Введите да или нет : ";

    std::string decision;
    std::cin >> decision;

    if (decision == "да")
    {
        std::cout << "Введите начальное значение счётчика: ";

        int num1;
        std::cin >> num1;

        count.mod(num1);
    }
    else 
    {
        count.mod(1);
    }

    while (true)
    {
            std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
            char kom;
            std::cin >> kom;
            switch (kom)
            {
            case '+':
                count.increase();
                break;
            case '-':
                count.decrease();
                break;
            case '=':
                count.currentValue();
                break;
            default:
                std::cout << "До свидания!";
                exit(0);
            }
    }       
 
    return 0;
}