/*
  ==============================================================================

    AdsrData.cpp
    Created: 25 Mar 2024 2:29:21pm
    Author:  Liam Eichberg

  ==============================================================================
*/

#include "AdsrData.h"

void AdsrData::update (const float attack, const float decay, const float sustain, const float release)
{
    adsrParams.attack = attack;
    adsrParams.decay = decay;
    adsrParams.sustain = sustain;
    adsrParams.release = release;
    
    setParameters (adsrParams);
}
