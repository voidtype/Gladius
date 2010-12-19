#include <string>

class Broker{
	public:
		Broker(std::string);
		std::string get_name();
	private:
		std::string name;
};
