/*
  ==============================================================================

    ViatorDial.h
    Created: 12 Feb 2021 5:54:44pm
    Author:  Landon Viator

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"


//==============================================================================
/**
*/

class ViatorDial : public juce::LookAndFeel_V4{
public:
    void drawRotarySlider(juce::Graphics &g, int x, int y, int width, int height, float sliderPos, float rotaryStartAngle, float rotaryEndAngle, juce::Slider &slider) override{
        
        float diameter = fmin(width, height) * 0.9;
        float radius = diameter * 0.5;
        float centerX = x + width * 0.5;
        float centerY = y + height * 0.5;
        float rx = centerX - radius;
        float ry = centerY - radius;
        float angle = rotaryStartAngle + (sliderPos * (rotaryEndAngle - rotaryStartAngle));
        
        juce::Rectangle<float> dialArea (rx, ry, diameter, diameter);
        g.setColour(juce::Colour::fromFloatRGBA(0.392f, 0.584f, 0.929f, 1.0f).darker(1.0)); //center
        g.fillEllipse(dialArea);
        
        g.setColour(juce::Colours::whitesmoke.darker(0.95f)); //outline
        g.drawEllipse(rx, ry, diameter, diameter, 3.0f);
        juce::Path dialTick;
        g.setColour(juce::Colours::whitesmoke.darker(0.95f)); //tick color
        dialTick.addRectangle(0, -radius + 2, 3.0f, radius * 0.6);
        g.fillPath(dialTick, juce::AffineTransform::rotation(angle).translated(centerX, centerY));
    }
};
