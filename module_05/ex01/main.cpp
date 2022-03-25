#include "./Bureaucrat.hpp"

int main(void){
	Bureaucrat bure(100, "marcos");
	Form form("form to by stufs", 50, 50);
	bure.signForm(form);
}