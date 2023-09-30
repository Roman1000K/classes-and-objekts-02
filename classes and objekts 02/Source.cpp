#include<iostream>
#include<Windows.h> 

class Counter {
private:
    int num;
    
public:
    Counter(int initial = 0) : num(initial) 
    {
    }

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
};

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

  
   
    std::cout << "�� ������ ������� ��������� �������� �������� ? ������� �� ��� ��� : ";
    std::string decision;
    std::cin >> decision;

    int initial = 0;
    if (decision == "��")
    {
        std::cout << "������� ��������� �������� ��������: ";        
        std::cin >> initial;        
    }
    Counter count(initial);

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