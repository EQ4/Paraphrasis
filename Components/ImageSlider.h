/*
  ==============================================================================

    ImageSlider.h
    Created: 28 May 2013 10:07:08pm
    Author:  Nik Reiman

  ==============================================================================
*/

#ifndef __IMAGESLIDER_H_B0B8D694__
#define __IMAGESLIDER_H_B0B8D694__

#include "JuceHeader.h"
#include "PluginParameters.h"
#include "ResourceCache.h"

namespace teragon {

class ImageSlider : public juce::Slider, public PluginParameterObserver {
public:
    ImageSlider(PluginParameter *parameter, const ResourceCache::ImageStates *imageStates);

    virtual ~ImageSlider();

    void valueChanged();
    void onParameterUpdated(const PluginParameter* parameter);

    void paint(Graphics &g);

private:
    Image handleImage;
    Image wellImage;
    PluginParameter *parameter;
};

} // namespace teragon

#endif  // __IMAGESLIDER_H_B0B8D694__
