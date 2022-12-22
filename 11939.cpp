#include <iostream>
#include <cmath>

class Operand {
public:
    
    Operand() {}
    
    Operand(Operand& operand) {
        this->operandOne_ = operand.getOperandOne();
        this->operandTwo_ = operand.getOperandTwo();
    }
    
    Operand& setOperandOne(std::istream& inputStream) {
        std::cout << "Enter the Value : ";
        inputStream >> this->operandOne_;
        return *this;
    }
    
    Operand& setOperandTwo(std::istream& inputStream) {
        std::cout << "Enter the Second Value : ";
        inputStream >> this->operandTwo_;
        return *this;
    }
    
    double getOperandOne() const { 
        return this->operandOne_; 
    }
    
    double getOperandTwo() const { 
        return this->operandTwo_; 
    }
private:
    double operandOne_;
    double operandTwo_;
};

int main() {
    while(true) {
        /*
        * Use only this command, if we are on windows platform.
        */
        #ifdef _WIN32
            system("cls");
        #endif
        
        Operand operand;
        int input = 0;
        double result = 0;

        std::string menuItems_[] = {
            "1.  Addition",
            "2.  Subtract",
            "3.  Multiplication",
            "4.  Division",
            "5.  Percentage",
            "6.  Power",
            "7.  Square Root",
            "8.  Cube",
            "9.  Sin",
            "10. Cos",
            "11. Tan",
            "12. Acos",
            "13. Asin",
            "14. Atan",
            "15. Logarithm",
            "\nSelect Choice : ",
        };

        for (std::string & item: menuItems_) {
            std::cout << item << std::endl;
        }
        
        std::cin >> input;

        switch (input) {

        case 1:
            result = operand.setOperandOne(std::cin).getOperandOne() + operand.setOperandTwo(std::cin).getOperandTwo();
            break;

        case 2:
            result = operand.setOperandOne(std::cin).getOperandOne() - operand.setOperandTwo(std::cin).getOperandTwo();
            break;

        case 3:
            result = operand.setOperandOne(std::cin).getOperandOne() * operand.setOperandTwo(std::cin).getOperandTwo();
            break;

        case 4:
            result = operand.setOperandOne(std::cin).getOperandOne() / operand.setOperandTwo(std::cin).getOperandTwo();
            break;

        case 5:
            result = (operand.setOperandOne(std::cin).getOperandOne() / operand.setOperandTwo(std::cin).getOperandTwo()) * 100;
            break;

        case 6: {
            double value = operand.setOperandOne(std::cin).getOperandOne();
            result = value * value;
            break;
        }

        case 7:
            result = std::sqrt(operand.setOperandOne(std::cin).getOperandOne());
            break;

        case 8:{
            double value = operand.setOperandOne(std::cin).getOperandOne();
            result = value * value * value;
            break;
        }

        case 9:
            result = std::sin(operand.setOperandOne(std::cin).getOperandOne());
            break;

        case 10:
            result = std::cos(operand.setOperandOne(std::cin).getOperandOne());
            break;

        case 11:
            result = std::tan(operand.setOperandOne(std::cin).getOperandOne());
            break;

        case 12:
            result = std::acos(operand.setOperandOne(std::cin).getOperandOne());
            break;

        case 13:
            result = std::asin(operand.setOperandOne(std::cin).getOperandOne());
            break;

        case 14:
            result = std::atan(operand.setOperandOne(std::cin).getOperandOne());
            break;

        case 15:
            result = std::log(operand.setOperandOne(std::cin).getOperandOne());
            break;

        default:
            std::cout << "Invalid Input. Input Range is from (1-14)!";
            std::cin.ignore();
            std::cin.get();
            main();
        }
        std::cout << "Answer : " << result;
        std::cin.ignore();
        std::cin.get();
    }
    return 0;
}