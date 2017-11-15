
#include "WidgetIllumination.h"


WidgetIllumination::WidgetIllumination(uint8_t ucItem)
{
    _Item=ucItem;
    memset(pDataIlluminationTopic,0,sizeof(pDataIlluminationTopic));
    sprintf(pDataIlluminationTopic,"channel/illumination_%d/data/intensity",_Item);
}

WidgetIllumination::~WidgetIllumination()
{
    
}

void WidgetIllumination::begin(void (*UserCallBack)(void))
{

}

void WidgetIllumination::displayIllumination(float fIllumination)
{
	IntoRobot.publish(pDataIlluminationTopic,fIllumination);
}









