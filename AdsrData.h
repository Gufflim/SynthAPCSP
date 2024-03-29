/*
  ==============================================================================

    AdsrData.h
    Created: 25 Mar 2024 2:29:21pm
    Author:  Liam Eichberg
 
  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

class AdsrData : public juce::ADSR
{
public:
    void update (const float attack, const float decay, const float sustain, const float release);
    
private:
    juce::ADSR::Parameters adsrParams;
};
