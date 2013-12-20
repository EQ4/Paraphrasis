/*
Copyright (c) 2013 Teragon Audio. All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

- Redistributions of source code must retain the above copyright notice,
  this list of conditions and the following disclaimer.
- Redistributions in binary form must reproduce the above copyright notice,
  this list of conditions and the following disclaimer in the documentation
  and/or other materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
POSSIBILITY OF SUCH DAMAGE.
*/

#ifndef IMAGECACHE_H_INCLUDED
#define IMAGECACHE_H_INCLUDED

#include "JuceHeader.h"

namespace teragon {

/**
* This class provides storage for image resources. In order to make editing
* plugins efficient in Introjucer, all graphics are saved as resources in
* the Resources class and cached here. Each image can have three states:
* normal, alternate, and background.
*
* Usually you want to create a ResourceCache with the Resources::getCache()
* method, and passing the associated pointer to the GUI Component. Note that
* you must delete the ResourceCache created from this call when the GUI
* is destructed or closed, otherwise memory will be leaked.
*/
class ResourceCache {
public:
    class ImageStates {
    public:
        ImageStates(Image normal = Image::null, Image alternate = Image::null,
                    Image background = Image::null) :
                    normal(normal), alternate(alternate), background(background) {}
        virtual ~ImageStates() {}

    public:
        Image normal;
        Image alternate;
        Image background;
    };

public:
    ResourceCache() {}
    virtual ~ResourceCache();

    virtual void add(String name, const char* normalImage, const int normalImageSize,
                     const char* alternateImage = nullptr, const int alternateImageSize = 0,
                     const char* backgroundImage = nullptr, const int backgroundImageSize = 0);

    virtual ImageStates* get(const String &name) const;
    virtual ImageStates* operator[](const String &name) const { return get(name); }

private:
    typedef juce::HashMap<String, ImageStates*> ResourceMap;
    ResourceMap resources;
};

} // namespace teragon

#endif  // IMAGECACHE_H_INCLUDED
