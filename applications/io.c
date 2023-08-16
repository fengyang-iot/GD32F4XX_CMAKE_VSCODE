#include "io.h"

//add test
rt_uint8_t g_pin_release_cnt;

void release_rleay_ctrl_pin(void)
{
		if(g_pin_release_cnt >0)
		{
			g_pin_release_cnt--;
			if(g_pin_release_cnt==0)
			{
				rt_pin_write(O0_RESET_PIN, PIN_HIGH);
				rt_pin_write(O1_RESET_PIN, PIN_HIGH);
				rt_pin_write(O2_RESET_PIN, PIN_HIGH);
				rt_pin_write(O3_RESET_PIN, PIN_HIGH);
				rt_pin_write(O4_RESET_PIN, PIN_HIGH);
				rt_pin_write(O5_RESET_PIN, PIN_HIGH);
				rt_pin_write(O6_RESET_PIN, PIN_HIGH);
				rt_pin_write(O7_RESET_PIN, PIN_HIGH);

				rt_pin_write(O0_SET_PIN, PIN_HIGH);
				rt_pin_write(O1_SET_PIN, PIN_HIGH);
				rt_pin_write(O2_SET_PIN, PIN_HIGH);
				rt_pin_write(O3_SET_PIN, PIN_HIGH);
				rt_pin_write(O4_SET_PIN, PIN_HIGH);
			    rt_pin_write(O5_SET_PIN, PIN_HIGH);
				rt_pin_write(O6_SET_PIN, PIN_HIGH);
			    rt_pin_write(O7_SET_PIN, PIN_HIGH);
			}
		}
}




rt_base_t set_pin_array[] = 
{  	O0_SET_PIN, 
	O1_SET_PIN,
	O2_SET_PIN,
	O3_SET_PIN,
	O4_SET_PIN,
	O5_SET_PIN,
	O6_SET_PIN,
	O7_SET_PIN
};


rt_base_t reset_pin_array[] = 
{  	O0_RESET_PIN, 
	O1_RESET_PIN,
	O2_RESET_PIN,
	O3_RESET_PIN,
	O4_RESET_PIN,
	O5_RESET_PIN,
	O6_RESET_PIN,
	O7_RESET_PIN
};

//static void pin_output(rt_uint8_t port_register)
//{
//	rt_uint8_t  port_data = port_register;
//	
//	
//	for (int i=0; i<8; i++)
//	{
//		if(port_data & (1<<i))
//		{
//			 rt_pin_write(set_pin_array[i], PIN_LOW);
//		     g_pin_release_cnt = RT_TICK_PER_SECOND/100;
//		}
//		else
//		{
//			 rt_pin_write(reset_pin_array[i], PIN_LOW);
//		     g_pin_release_cnt = RT_TICK_PER_SECOND/100;
//		}			
//	}		
//}

//void output_check(void* para)
//{
//	static rt_uint8_t output_rgister_last;
//	
//	while(1)
//	{
//		if(output_rgister_last != sys.mycan.para.OUTPUT_PO )
//		{			
//			pin_output(sys.mycan.para.OUTPUT_PO);			
//			output_rgister_last = sys.mycan.para.OUTPUT_PO;
//			rt_event_send(&sys.mycan.event_updata, EVENT_OUTPUT_CHANGED);		
//		}			
//		rt_thread_mdelay(50);		
//	}
//}

int RT_IO_Init()
{
	rt_pin_mode(O0_SET_PIN, PIN_MODE_OUTPUT);
	rt_pin_write(O0_SET_PIN, PIN_HIGH);
	rt_pin_mode(O0_RESET_PIN, PIN_MODE_OUTPUT);
	rt_pin_write(O0_RESET_PIN, PIN_HIGH);
	rt_pin_mode(O0_IN_PIN, PIN_MODE_INPUT);
	
    rt_pin_mode(O1_SET_PIN, PIN_MODE_OUTPUT);
	rt_pin_write(O1_SET_PIN, PIN_HIGH);		 
	rt_pin_mode(O1_RESET_PIN, PIN_MODE_OUTPUT);
	rt_pin_write(O1_RESET_PIN, PIN_HIGH);			 
	rt_pin_mode(O1_IN_PIN, PIN_MODE_INPUT);

    rt_pin_mode(O2_SET_PIN, PIN_MODE_OUTPUT);
	rt_pin_write(O2_SET_PIN, PIN_HIGH);		 
	rt_pin_mode(O2_RESET_PIN, PIN_MODE_OUTPUT);
	rt_pin_write(O2_RESET_PIN, PIN_HIGH);			 
	rt_pin_mode(O2_IN_PIN, PIN_MODE_INPUT);
	
	rt_pin_mode(O3_SET_PIN, PIN_MODE_OUTPUT);
	rt_pin_write(O3_SET_PIN, PIN_HIGH);		 
	rt_pin_mode(O3_RESET_PIN, PIN_MODE_OUTPUT);
	rt_pin_write(O3_RESET_PIN, PIN_HIGH);			 
	rt_pin_mode(O3_IN_PIN, PIN_MODE_INPUT);
	
	rt_pin_mode(O4_SET_PIN, PIN_MODE_OUTPUT);
	rt_pin_write(O4_SET_PIN, PIN_HIGH);		 
	rt_pin_mode(O4_RESET_PIN, PIN_MODE_OUTPUT);
	rt_pin_write(O4_RESET_PIN, PIN_HIGH);			 
	rt_pin_mode(O4_IN_PIN, PIN_MODE_INPUT);
	
	rt_pin_mode(O5_SET_PIN, PIN_MODE_OUTPUT);
	rt_pin_write(O5_SET_PIN, PIN_HIGH);		 
	rt_pin_mode(O5_RESET_PIN, PIN_MODE_OUTPUT);
	rt_pin_write(O5_RESET_PIN, PIN_HIGH);			 
	rt_pin_mode(O5_IN_PIN, PIN_MODE_INPUT);
	
	rt_pin_mode(O6_SET_PIN, PIN_MODE_OUTPUT);
	rt_pin_write(O6_SET_PIN, PIN_HIGH);		 
	rt_pin_mode(O6_RESET_PIN, PIN_MODE_OUTPUT);
	rt_pin_write(O6_RESET_PIN, PIN_HIGH);			 
	rt_pin_mode(O6_IN_PIN, PIN_MODE_INPUT);
	
	rt_pin_mode(O7_SET_PIN, PIN_MODE_OUTPUT);
	rt_pin_write(O7_SET_PIN, PIN_HIGH);		 
	rt_pin_mode(O7_RESET_PIN, PIN_MODE_OUTPUT);
	rt_pin_write(O7_RESET_PIN, PIN_HIGH);			 
	rt_pin_mode(O7_IN_PIN, PIN_MODE_INPUT);
	ALL_OFF();
	
//	rt_thread_t output_check_thread = rt_thread_create("outputCheck", output_check,RT_NULL, 512, 23, 10);
//	if(RT_NULL != output_check_thread)
//	{
//		rt_thread_startup(output_check_thread);
//	}
//	else
//	{
//		rt_kprintf("output_check_thread create failed!");
//	}
	
	
	return 0;
}

INIT_DEVICE_EXPORT(RT_IO_Init);



