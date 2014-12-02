#ifndef stack_h
#define stack_h



class stack : public list {

	public:
		stack(int n = 100) : list(n){}

		bool empty();
		bool full();
		void store(int val);
		int  retrieve();
	
};

#endif
