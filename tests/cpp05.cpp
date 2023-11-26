#include <string>
#include <iostream>


class Printer{
	private:
		std::string _name;
		int _avilablePpaer;

	public:
		Printer(std::string name,int avilablePpaer){
			this->_name = name;
			this->_avilablePpaer = avilablePpaer;
		}
		void	printMsg(std::string msg){
			int requiredPaper = msg.length() / 10;
			if (requiredPaper > this->_avilablePpaer)
				throw Printer::OutOfPaperException();
			this->_avilablePpaer -= requiredPaper;
			std::cout << msg << std::endl;
		}
		class OutOfPaperException : public std::exception{
			public:
				virtual const char* what() const throw(){
					return ("Out of paper");
				}
		};
};

int main(){
	Printer p("printer", 15);
	try{
		p.printMsg("hello world hello world hello world hello world hello world ");
		p.printMsg("hello world hello world hello world hello world hello world ");
		p.printMsg("hello world hello world hello world hello world hello world ");
		p.printMsg("hello world hello world hello world hello world hello world ");

	}
	catch(Printer::OutOfPaperException &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << "continues " << std::endl;

	return (0);
}
