#pragma once

#include "Structs.h"

// ThirdParty
#include <ButtonEvents.h>
#include <Adafruit_NeoPixel.h>
#include <Rotary.h>

//********************************************************
// *** VARIABLES
//*******************************************************
// State
extern DeviceSettings g_Settings;
extern SessionInfo g_SessionInfo;
extern SessionData g_Sessions[];
extern ModeStates g_ModeStates;
extern uint8_t g_DisplayDirty;
extern bool g_DisplayAsleep;

// Encoder Button
extern ButtonEvents g_EncoderButton;
extern volatile ButtonEvent g_ButtonEvent;

// Rotary Encoder
extern Rotary g_Encoder;
extern int8_t g_PreviousSteps;
extern volatile int8_t g_EncoderSteps;

// Lighting
extern Adafruit_NeoPixel g_Pixels;

// Function prototypes
void UpdateLighting();
void ResetState();
void loop();
int8_t ComputeAcceleratedVolume(int8_t encoderDelta, uint32_t deltaTime, int16_t volume);
void PreviousSession(void);
void NextSession(void);
bool CanScrollLeft(void);
bool CanScrollRight(void);
uint8_t GetIndexForMode(DisplayMode mode);
void LightingBlackOut();
bool ProcessEncoderRotation();
bool ProcessEncoderButton();
bool ProcessSleep();
bool ProcessDisplayScroll();
void UpdateDisplay();