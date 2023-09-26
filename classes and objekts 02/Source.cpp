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
   
    std::cout << "�� ������ ������� ��������� �������� �������� ? ������� �� ��� ��� : ";

    std::string decision;
    std::cin >> decision;

    if (decision == "��")
    {
        std::cout << "������� ��������� �������� ��������: ";

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
            std::cout << "������� ������� ('+', '-', '=' ��� 'x'): ";
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
                std::cout << "�� ��������!";
                exit(0);
            }
    }       
 
    return 0;
}