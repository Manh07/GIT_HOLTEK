#include "HT66F0021.h"
#define	SYSCLOCK_FH			1			
#define	SYSCLOCK_FH_DIV2	2		
#define	SYSCLOCK_FH_DIV4	3		
#define	SYSCLOCK_FH_DIV8	4		
#define	SYSCLOCK_FH_DIV16	5		
#define	SYSCLOCK_FH_DIV32	6		
#define	SYSCLOCK_FH_DIV64	7		
#define	SYSCLOCK_FSUB		8		
void Delayus(void);
void _delay_ms(unsigned long time);
void _delay_us(unsigned long time);
void SysClockDivision_Init(unsigned char b_clk);
/**
  * @brief system clock prescaler select main entry point.
  * @par Parameters:
  * None
  * @retval 
  * Noneàdsa
  */
void main()
{
	_pac1 = 0;	//set port C as output port
	_pa1 = 0;
	//GCC_DELAY(2000);	//wait system stable

	//system loop
	while(1)
	{
		_pa1 = 1;
		_delay_ms(500);
		_pa1 = 0;
		_delay_ms(500);

	}
	
}

void _delay_us(unsigned long time)
{
	unsigned long i;
	for(i=time;i>0;i--)
	{	
		;
	}
}
void _delay_ms(unsigned long time)
{
    unsigned long i;   
    while(time--)     
    for(i=250;i>0;i--)
    {
    	 GCC_NOP(); 
    }
}
void Delayus(void)   
{    
    GCC_NOP();  
    //asm("nop");   
    //asm("nop");   
    //asm("nop");    
}

