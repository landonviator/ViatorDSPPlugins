/*
  ==============================================================================

    LV_Fader.h
    Created: 21 Jul 2021 12:58:40pm
    Author:  landon viator

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "../Widgets/LV_Label.h"
#include "../Widgets/StyleSheet.h"

//==============================================================================
/*
*/
namespace juce
{
    class LV_Fader  : public Slider
    {
    public:
        LV_Fader(
                          String suffix,
                          double rangeStart,
                          double rangeEnd,
                          double intervalValue,
                          double returnValue)
        {
            initShadows();
            initProps(suffix, rangeStart, rangeEnd, intervalValue, returnValue);
        }
        
        ~LV_Fader() override
        {
            setLookAndFeel(nullptr);
        }
        
    private:
        
        /** Slider ================================================================*/
        juce::Slider slider;
        juce::LV_FaderLAF customFader;
        
        /** Methods ===============================================================*/
        void initProps(
                       juce::String suffix,
                       double rangeStart,
                       double rangeEnd,
                       double intervalValue,
                       double returnValue)
        {
            setSliderStyle(juce::Slider::SliderStyle::LinearHorizontal);
            setTextBoxStyle(juce::Slider::TextBoxBelow, true, 72, 32);
            setColour(juce::Slider::ColourIds::backgroundColourId, juce::Colours::black.withAlpha(0.35f));
            setColour(juce::Slider::ColourIds::trackColourId, juce::Colours::black.withAlpha(0.0f));
            setColour(juce::Slider::ColourIds::textBoxOutlineColourId, juce::Colours::black.withAlpha(0.0f));
            setColour(juce::Slider::ColourIds::textBoxTextColourId, juce::Colours::whitesmoke.withAlpha(0.25f));
            setColour(juce::Slider::ColourIds::thumbColourId, juce::Colour::fromFloatRGBA(0.392f, 0.584f, 0.929f, 1.0f).darker(1.0));
            setRange(rangeStart, rangeEnd, intervalValue);
            setDoubleClickReturnValue(true, returnValue);
            setTextValueSuffix(suffix);
            setLookAndFeel(&customFader);
            setComponentEffect(&sliderShadow);
        }
        
        /** Fader shadow ===========================================================*/
        void initShadows()
        {
            sliderShadowProperties.radius = 8;
            sliderShadowProperties.offset = juce::Point<int> (0, 0);
            sliderShadowProperties.colour = juce::Colours::black.withAlpha(1.0f);
            sliderShadow.setShadowProperties (sliderShadowProperties);
        }
        
        juce::DropShadow sliderShadowProperties;
        juce::DropShadowEffect sliderShadow;
    };
}
