#include <string>
#include <iostream>

class Site
{
	public:
		Site(std::string Name, std::string Pass);

		const std::string getName() const;
		const std::string getPassword() const;
		const std::string getInfo() const;

		void setName();
		void setPassword(std::string masterPass);
		void setInfo(); 
	private:
		std::string Name;
		std::string Password;
		std::string OtherInfo;
}