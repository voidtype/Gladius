#include <string>

class Gladius{
	public:
		static Gladius* instance();
		std::string get_version();
	private:
		static Gladius * g_instance;
		Gladius();
		std::string vers;
};
