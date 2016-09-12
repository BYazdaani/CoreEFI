// copyright to me, released under GPL V3

#include "efi_id.h"

void setParamShort(ParamTypeId i, int16_t v);
void setParamUnsigned(ParamTypeId i, uint16_t v);
void setParamFloat(ParamTypeId i, float v);

int16_t getParamShort(ParamTypeId i);
uint16_t getParamUnsigned(ParamTypeId i);
float getParamFloat(ParamTypeId i);
bool isParamSet(ParamTypeId i);

void clearParamChanges();
void clearParamCache();

uint16_t initParams();
void sendParam(ParamTypeId id);

void setSensorParam(ParamTypeId id, uint16_t adc);

const char *getParamName(ParamTypeId id, char *buf, int maxlen);
const channel_t *getParamName(ParamTypeId id);
