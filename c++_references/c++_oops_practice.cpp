#include <iostream>
using namespace std;


class Log {
	public : 
		int log_level_1 = 1;
		int log_level_2 = 2;
		int log_level_3 = 3;

	private : 
		int P_LOGLEVEL = 0;

	public : 
		void error(string message) {
			if(P_LOGLEVEL == 1)
				cout << "[ERROR] :\t" << message << endl;
		};

		void info( string message) {
			if(P_LOGLEVEL == 2)
				cout << "[INFO]:\t" << message << endl;
		};

		void warning( string message) {
			if(P_LOGLEVEL == 3)
				cout << "[WARNING]:\t" << message << endl;
		}

		void setLevel( int value ) { 
			P_LOGLEVEL = value;
		}
};

int main(){

	Log l;
	l.setLevel(l.log_level_2);
	l.error("ERROR MESSAGE");
	l.info("INFO MESSAGE");
	l.warning("WARNING MESSAGE");
}