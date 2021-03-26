#pragma once

#include "Structs.h"

void UpdateLighting();
void LightingBlackOut();
void LightingCircularFunk();
void LightingVolume(SessionData *item, Color *c1, Color *c2);
Color LerpColor(Color *c1, Color *c2, uint8_t coeff);