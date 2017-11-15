/*
************************************************************************
* 作者:  IntoRobot Team 
* 版本:  V1.0.0
* 日期:  03-30-15
************************************************************************
功能描述：
光照强度计：检测光照强度

所需器件:
1.GY30 光照传感器模

接线说明:
GY30                         Atom
1.VIN                        +3.3V
2.GND                        GND
3.SDA                        I2C(Wire组)的SDA
4.SCL                        I2C(Wire组)的SCL

请注意各核心板的I2C引脚区别，避免接线错误。
*/

#include <gy30.h>
#include <WidgetIllumination.h>

GY30 gy30;                //光照强度传感器
WidgetIllumination illumination = WidgetIllumination();

void setup()
{
    //初始化
	gy30.begin();
}

void loop()
{
	illumination.displayIllumination(gy30.Read()); //上送光照强度
	delay(3000);
}
