#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <iomanip>



int main(){
    int num1;
    int num2;
    int result;
    int answer;
    char equation;
    char cont; 

    std::cout << "****** Math Flash Card Game ******\n";
    
    do{
    srand(time(0));
    num1 = rand() % 100 + 1;
    num2 = rand() % 50 + 1;

        std::cout << "Select a function(+ - / *): ";
        std::cin >> equation;

        if(equation == '*'){
        std::cout << num1 << " " << '*' << " " << num2 << "(Enter nearest whole number)" << '\n';
        do{std::cin >> result;
        answer = num1 * num2;
        
            if(result == answer){
                std::cout << "You are correct!\n";
                std::cout << "Do you want to continue(Y/N)?: \n";
                std::cin >> cont;
                cont = toupper(cont);
            }
            else{
                std::cout << "You are incorrect. Try again.\n";
            }
            }while(result != answer);
        }
        else if(equation == '-'){
        std::cout << num1 << " " << '-' << " " << num2 <<  "(Enter nearest whole number)" << '\n';
        do{std::cin >> result;
        answer = num1 - num2;
        
            if(result == answer){
                std::cout << "You are correct!\n";
                std::cout << "Do you want to continue(Y/N)?: \n";
                std::cin >> cont;
                cont = toupper(cont);
            }
            else{
                std::cout << "You are incorrect. Try again.\n";
            }
            }while(result != answer);
        }
        else if(equation == '/'){
        std::cout << num1 << " " << '/' << " " << num2 <<  "(Enter nearest whole number)" << '\n';
        do{std::cin >> result;
        answer = num1 / num2;
        
            if(result == answer){
                std::cout << "You are correct!\n";
                std::cout << "Do you want to continue(Y/N)?: \n";
                std::cin >> cont;
                cont = toupper(cont);
            }
            else{
                std::cout << "You are incorrect. Try again.\n";
            }
            }while(result != answer);
        }
        else if(equation == '+'){
        std::cout << num1 << " " << '+' << " " << num2 <<  "(Enter nearest whole number)" << '\n';
        do{std::cin >> result;
        answer = num1 + num2;
        answer = round(answer);
        
            if(result == answer){
                std::cout << "You are correct!\n";
                std::cout << "Do you want to continue(Y/N)?: \n";
                std::cin >> cont;
                cont = toupper(cont);
            }
            else{
                std::cout << "You are incorrect. Try again.\n";
            }
            }while(result != answer);
        }
        else{
            std::cout << "Select an appropriate function(+ - * /)\n";
            std::cout << "Do you want to continue(Y/N)?: \n";
            std::cin >> cont;
            cont = toupper(cont);
        }
    }while(cont == 'Y');
    std::cout << "**********************************\n";

    return 0;
}