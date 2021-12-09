#pragma once
class calc_Dolzhenko
{
private:
	int a ;
	int b ;

public:
	calc_Dolzhenko();
	
	calc_Dolzhenko(int new_a, int new_b);
	
	int getA();
	
	int getB();

    int my_plus(int a, int b);

    int minus(int a, int b);
   
    int mnog(int a, int b);
   
    int dev(int a, int b);
  
    int less(int a, int b);
    
    int more(int a, int b);
   
	void div_zero(int a, int b);
   
	
};

