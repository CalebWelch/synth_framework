/*
  ==============================================================================

    SynthSound.h
    Created: 2 Mar 2018 1:47:52pm
    Author:  CW056762

  ==============================================================================
*/

#pragma once
#include "JuceHeader.h"

class SynthSound : public SynthesiserSound
{
public:
	bool appliesToNote(int midinote);
	bool appliesToChannel(int midichannel);

};