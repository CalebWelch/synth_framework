/*
  ==============================================================================

    SynthVoice.h
    Created: 2 Mar 2018 1:48:06pm
    Author:  CW056762

  ==============================================================================
*/

#pragma once
#include "JuceHeader.h"
#include "SynthSound.h"

class SytnthVoice : public SynthesiserVoice
{
public: 
	bool canPlaySound(SynthesiserSound *) = 0;
	void startNote(int midiNoteNumber, float velocity, SynthesiserSound *sound, int currentPitchWheelPosition) = 0;
	void stopNote(float velocity, bool allowTailOff) = 0;
	bool isVoiceActive() const;
	void pitchWheelMoved(int newPitchWheelValue) = 0;
	void controllerMoved(int controllerNumber, int newControllerValue) = 0;
	void aftertouchChanged(int newAftertouchValue);
	void renderNextBlock(AudioBuffer< float > &outputBuffer, int startSample, int numSamples) = 0;
	void channelPressureChanged(int newChannelPressureValue);
	void renderNextBlock(AudioBuffer< double > &outputBuffer, int startSample, int numSamples);
	void setCurrentPlaybackSampleRate(double newRate);
	bool isPlayingChannel(int midiChannel) const;
};
