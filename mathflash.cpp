#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>



int main(){
    double num1;
    double num2;
    double result;
    double answer;
    char equation;
    char cont; 

    std::cout << "****** Math Flash Card Game ******\n";
    
    do{
    srand(time(0));
    num1 = rand() % 100 + 1;
    num2 = rand() % 100 + 1;

        std::cout << "Select an equation(+ - / *): ";
        std::cin >> equation;

        if(equation == '*'){
        std::cout << num1 << " " << '*' << " " << num2 << '\n';
        do{std::cin >> result;
        answer = num1 * num2;
        
            if(result == answer){
                std::cout << "You are correct!\n";
                std::cout << "Do you want to continue(Y/N)?: \n";
                std::cin >> cont;
            }
            else{
                std::cout << "You are incorrect. Try again.\n";
            }
            }while(result != answer);
        }
        else if(equation == '-'){
        std::cout << num1 << " " << '-' << " " << num2 << '\n';
        do{std::cin >> result;
        answer = num1 - num2;
        
            if(result == answer){
                std::cout << "You are correct!\n";
                std::cout << "Do you want to continue(Y/N)?: \n";
                std::cin >> cont;
            }
            else{
                std::cout << "You are incorrect. Try again.\n";
            }
            }while(result != answer);
        }
        else if(equation == '/'){
        std::cout << num1 << " " << '/' << " " << num2 << '\n';
        do{std::cin >> result;
        answer = num1 / num2;
        
            if(result == answer){
                std::cout << "You are correct!\n";
                std::cout << "Do you want to continue(Y/N)?: \n";
                std::cin >> cont;
            }
            else{
                std::cout << "You are incorrect. Try again.\n";
            }
            }while(result != answer);
        }
        else{
        std::cout << num1 << " " << '+' << " " << num2 << '\n';
        do{std::cin >> result;
        answer = num1 + num2;
        
            if(result == answer){
                std::cout << "You are correct!\n";
                std::cout << "Do you want to continue(Y/N)?: \n";
                std::cin >> cont;
            }
            else{
                std::cout << "You are incorrect. Try again.\n";
            }
            }while(result != answer);
        }
    }while(cont == 'Y' || cont == 'y');
    std::cout << "**********************************\n";

    return 0;
}