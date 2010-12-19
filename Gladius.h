#include <string>
#include "Broker.h"

class Gladius{
	public:
		static Gladius* instance();
		std::string get_version();
		static void set_test();
	private:
		static Gladius * g_instance;
		static bool test;
		Gladius();
		std::string vers;
		static Broker* broker;
};
