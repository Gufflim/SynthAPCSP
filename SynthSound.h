/*
  ==============================================================================

    SynthSound.h
    Created: 25 Mar 2024 1:56:00pm
    Author:  Liam Eichberg

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

class SynthSound : public juce::SynthesiserSound
{
public:
    bool appliesToNote (int midiNoteNumber) override { return true; }
    bool appliesToChannel (int midiChannel) override { return true; }
    
};
