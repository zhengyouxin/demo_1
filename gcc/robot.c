#include <stdio.h>

typedef unsigned char  u8;
typedef unsigned short u16;
typedef unsigned int u32;

typedef struct robot_type{
	u16 robot_id;
	u16 robot_sn;
	char robot_name[32];
	u32 time;
	u32 learningLevel;
	u8	type_len;
}Robot_type;


int RobotLearningLevelJunior(u32 param)
{
	Robot_type PRobot_type;
	
	
	return 0;
}	


