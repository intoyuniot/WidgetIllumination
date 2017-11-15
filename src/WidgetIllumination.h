#ifndef WIDGET_ILLUMINATION_H_
#define WIDGET_ILLUMINATION_H_

#include "application.h"


class WidgetIllumination
{
public:
    WidgetIllumination(uint8_t ucItem = 0);
    ~WidgetIllumination();
    void begin(void (*UserCallBack)(void) = NULL);
    void displayIllumination(float fIllumination);

    
private:
    char pDataIlluminationTopic[64];
    uint8_t _Item=0;         
};

#endif
