#include<string>
using namespace std;
class human{
// access level private
private:
	string mName;
	int mAge;
// access level public
public:
	bool isPrison;
	human(std::string name, int age);
	// method
	virtual void display();
};