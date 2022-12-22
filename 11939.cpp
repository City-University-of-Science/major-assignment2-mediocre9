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
    return 0;
}