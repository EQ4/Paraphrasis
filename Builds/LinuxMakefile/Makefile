# Automatically generated makefile, created by the Introjucer
# Don't edit this file! Your changes will be overwritten when you re-save the Introjucer project!

# (this disables dependency generation if multiple architectures are set)
DEPFLAGS := $(if $(word 2, $(TARGET_ARCH)), , -MMD)

ifndef CONFIG
  CONFIG=Release
endif

ifeq ($(CONFIG),Debug)
  BINDIR := build
  LIBDIR := build
  OBJDIR := build/intermediate/Debug
  OUTDIR := build

  CPPFLAGS := $(DEPFLAGS) -D "LINUX=1" -D "DEBUG=1" -D "_DEBUG=1" -D "JUCER_LINUX_MAKE_6D53C8B4=1" -D "JUCE_APP_VERSION=1.0.3" -D "JUCE_APP_VERSION_HEX=0x10003" -I /usr/include -I /usr/include/freetype2 -I ~/SDKs/VST3\ SDK -I ../../JuceLibraryCode -I ../../JuceLibraryCode/modules -I ../.././ThirdParty/Loris/src -I ../../ThirdParty/TeragonGuiComponents/Components/Plugin -I ../../ThirdParty/TeragonGuiComponents/Components/PluginParameters/include -I ../../ThirdParty/TeragonGuiComponents/Components/Source -I ../../ThirdParty/sse2math -fvisibility=hidden
  CFLAGS += $(CPPFLAGS) $(TARGET_ARCH) -g -ggdb -fPIC -O0
  CXXFLAGS += $(CFLAGS) -std=c++11
  LDFLAGS += $(TARGET_ARCH) -L$(BINDIR) -L$(LIBDIR) -Wl,--no-undefined -shared -L/usr/X11R6/lib/ -lX11 -lXext -lXinerama -lasound -ldl -lfreetype -lpthread -lrt 

  TARGET := Paraphrasis.so
  BLDCMD = $(CXX) -o $(OUTDIR)/$(TARGET) $(OBJECTS) $(LDFLAGS) $(RESOURCES) $(TARGET_ARCH)
  CLEANCMD = rm -rf $(OUTDIR)/$(TARGET) $(OBJDIR)
endif

ifeq ($(CONFIG),Release)
  BINDIR := build
  LIBDIR := build
  OBJDIR := build/intermediate/Release
  OUTDIR := build

  ifeq ($(TARGET_ARCH),)
    TARGET_ARCH := -ffast-math -mtune=generic -msse -msse2
  endif

  CPPFLAGS := $(DEPFLAGS) -D "LINUX=1" -D "NDEBUG=1" -D "JUCER_LINUX_MAKE_6D53C8B4=1" -D "JUCE_APP_VERSION=1.0.3" -D "JUCE_APP_VERSION_HEX=0x10003" -I /usr/include -I /usr/include/freetype2 -I ~/SDKs/VST3\ SDK -I ../../JuceLibraryCode -I ../../JuceLibraryCode/modules -I ../.././ThirdParty/Loris/src -I ../../ThirdParty/TeragonGuiComponents/Components/Plugin -I ../../ThirdParty/TeragonGuiComponents/Components/PluginParameters/include -I ../../ThirdParty/TeragonGuiComponents/Components/Source -I ../../ThirdParty/sse2math -fvisibility=hidden
  CFLAGS += $(CPPFLAGS) $(TARGET_ARCH) -fPIC -O3
  CXXFLAGS += $(CFLAGS) -std=c++11
  LDFLAGS += $(TARGET_ARCH) -L$(BINDIR) -L$(LIBDIR) -Wl,--no-undefined -shared -fvisibility=hidden -L/usr/X11R6/lib/ -lX11 -lXext -lXinerama -lasound -ldl -lfreetype -lpthread -lrt 

  TARGET := Paraphrasis.so
  BLDCMD = $(CXX) -o $(OUTDIR)/$(TARGET) $(OBJECTS) $(LDFLAGS) $(RESOURCES) $(TARGET_ARCH)
  CLEANCMD = rm -rf $(OUTDIR)/$(TARGET) $(OBJDIR)
endif

OBJECTS := \
  $(OBJDIR)/Base64_5d2c67c8.o \
  $(OBJDIR)/TeragonPluginBase_eff57048.o \
  $(OBJDIR)/ImageKnob_5a3869b7.o \
  $(OBJDIR)/ImageSlider_809cb3a2.o \
  $(OBJDIR)/IndicatorLight_714c910b.o \
  $(OBJDIR)/PushButton_2bf264b0.o \
  $(OBJDIR)/ResourceCache_4ca9fd5a.o \
  $(OBJDIR)/StatusBar_99ce5207.o \
  $(OBJDIR)/ThinButton_c72df16f.o \
  $(OBJDIR)/phasefix_2adedc00.o \
  $(OBJDIR)/LorisExceptions_b6cc3101.o \
  $(OBJDIR)/AiffData_39170618.o \
  $(OBJDIR)/AiffFile_a29cd2ea.o \
  $(OBJDIR)/Analyzer_692ada0c.o \
  $(OBJDIR)/AssociateBandwidth_aab2c8d9.o \
  $(OBJDIR)/BigEndian_3820aa5f.o \
  $(OBJDIR)/Breakpoint_98c40b97.o \
  $(OBJDIR)/BreakpointUtils_12637724.o \
  $(OBJDIR)/Channelizer_98793805.o \
  $(OBJDIR)/Collator_a32991a8.o \
  $(OBJDIR)/Dilator_4e5cd6c1.o \
  $(OBJDIR)/Distiller_e8cc8b54.o \
  $(OBJDIR)/Envelope_9d2f836.o \
  $(OBJDIR)/F0Estimate_3f7edaf8.o \
  $(OBJDIR)/fftsg_470458cc.o \
  $(OBJDIR)/Filter_7c93581e.o \
  $(OBJDIR)/FourierTransform_4ab0cac2.o \
  $(OBJDIR)/FrequencyReference_a40788f5.o \
  $(OBJDIR)/Fundamental_b5ad8c29.o \
  $(OBJDIR)/Harmonifier_af727b0a.o \
  $(OBJDIR)/ImportLemur_5bc0c70.o \
  $(OBJDIR)/KaiserWindow_f16bc563.o \
  $(OBJDIR)/LinearEnvelope_ac25833b.o \
  $(OBJDIR)/Marker_1ba0efe0.o \
  $(OBJDIR)/Morpher_4810c419.o \
  $(OBJDIR)/NoiseGenerator_e88263ff.o \
  $(OBJDIR)/Notifier_8dbac70c.o \
  $(OBJDIR)/Oscillator_d3b110c6.o \
  $(OBJDIR)/Partial_77fdabe5.o \
  $(OBJDIR)/PartialBuilder_d512c580.o \
  $(OBJDIR)/PartialUtils_5b47d796.o \
  $(OBJDIR)/RealtimeOscillator_432c3211.o \
  $(OBJDIR)/RealtimeSynthesizer_91275501.o \
  $(OBJDIR)/ReassignedSpectrum_758d8218.o \
  $(OBJDIR)/Resampler_a4535b19.o \
  $(OBJDIR)/SdifFile_217f4930.o \
  $(OBJDIR)/Sieve_b9658f62.o \
  $(OBJDIR)/SpcFile_3ee37e26.o \
  $(OBJDIR)/SpectralPeakSelector_3ed3bb48.o \
  $(OBJDIR)/SpectralSurface_9358c60d.o \
  $(OBJDIR)/Synthesizer_113e4cec.o \
  $(OBJDIR)/Resources_78b0aa10.o \
  $(OBJDIR)/LorisSynthesiser_1233ef51.o \
  $(OBJDIR)/SampleAnalyzer_6b582ff9.o \
  $(OBJDIR)/PluginProcessor_a059e380.o \
  $(OBJDIR)/PluginEditor_94d4fb09.o \
  $(OBJDIR)/dRowAudio_6123b5ea.o \
  $(OBJDIR)/juce_audio_basics_2442e4ea.o \
  $(OBJDIR)/juce_audio_devices_a4c8a728.o \
  $(OBJDIR)/juce_audio_formats_d349f0c8.o \
  $(OBJDIR)/juce_audio_processors_44a134a2.o \
  $(OBJDIR)/juce_audio_utils_f63b12e8.o \
  $(OBJDIR)/juce_core_aff681cc.o \
  $(OBJDIR)/juce_data_structures_bdd6d488.o \
  $(OBJDIR)/juce_events_79b2840.o \
  $(OBJDIR)/juce_graphics_c8f1e7a4.o \
  $(OBJDIR)/juce_gui_basics_a630dd20.o \
  $(OBJDIR)/juce_gui_extra_7767d6a8.o \
  $(OBJDIR)/juce_PluginUtilities_e2e19a34.o \
  $(OBJDIR)/juce_VST_Wrapper_bb62e93d.o \
  $(OBJDIR)/juce_VST3_Wrapper_77e7c73b.o \

.PHONY: clean

$(OUTDIR)/$(TARGET): $(OBJECTS) $(RESOURCES)
	@echo Linking Paraphrasis
	-@mkdir -p $(BINDIR)
	-@mkdir -p $(LIBDIR)
	-@mkdir -p $(OUTDIR)
	@$(BLDCMD)

clean:
	@echo Cleaning Paraphrasis
	@$(CLEANCMD)

strip:
	@echo Stripping Paraphrasis
	-@strip --strip-unneeded $(OUTDIR)/$(TARGET)

$(OBJDIR)/Base64_5d2c67c8.o: ../../ThirdParty/TeragonGuiComponents/Components/Plugin/arduino-base64/Base64.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling Base64.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/TeragonPluginBase_eff57048.o: ../../ThirdParty/TeragonGuiComponents/Components/Plugin/TeragonPluginBase.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling TeragonPluginBase.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/ImageKnob_5a3869b7.o: ../../ThirdParty/TeragonGuiComponents/Components/Source/ImageKnob.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling ImageKnob.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/ImageSlider_809cb3a2.o: ../../ThirdParty/TeragonGuiComponents/Components/Source/ImageSlider.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling ImageSlider.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/IndicatorLight_714c910b.o: ../../ThirdParty/TeragonGuiComponents/Components/Source/IndicatorLight.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling IndicatorLight.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/PushButton_2bf264b0.o: ../../ThirdParty/TeragonGuiComponents/Components/Source/PushButton.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling PushButton.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/ResourceCache_4ca9fd5a.o: ../../ThirdParty/TeragonGuiComponents/Components/Source/ResourceCache.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling ResourceCache.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/StatusBar_99ce5207.o: ../../ThirdParty/TeragonGuiComponents/Components/Source/StatusBar.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling StatusBar.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/ThinButton_c72df16f.o: ../../ThirdParty/TeragonGuiComponents/Components/Source/ThinButton.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling ThinButton.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/phasefix_2adedc00.o: ../../ThirdParty/Loris/src/phasefix.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling phasefix.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/LorisExceptions_b6cc3101.o: ../../ThirdParty/Loris/src/LorisExceptions.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling LorisExceptions.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/AiffData_39170618.o: ../../ThirdParty/Loris/src/AiffData.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling AiffData.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/AiffFile_a29cd2ea.o: ../../ThirdParty/Loris/src/AiffFile.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling AiffFile.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/Analyzer_692ada0c.o: ../../ThirdParty/Loris/src/Analyzer.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling Analyzer.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/AssociateBandwidth_aab2c8d9.o: ../../ThirdParty/Loris/src/AssociateBandwidth.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling AssociateBandwidth.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/BigEndian_3820aa5f.o: ../../ThirdParty/Loris/src/BigEndian.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling BigEndian.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/Breakpoint_98c40b97.o: ../../ThirdParty/Loris/src/Breakpoint.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling Breakpoint.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/BreakpointUtils_12637724.o: ../../ThirdParty/Loris/src/BreakpointUtils.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling BreakpointUtils.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/Channelizer_98793805.o: ../../ThirdParty/Loris/src/Channelizer.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling Channelizer.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/Collator_a32991a8.o: ../../ThirdParty/Loris/src/Collator.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling Collator.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/Dilator_4e5cd6c1.o: ../../ThirdParty/Loris/src/Dilator.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling Dilator.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/Distiller_e8cc8b54.o: ../../ThirdParty/Loris/src/Distiller.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling Distiller.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/Envelope_9d2f836.o: ../../ThirdParty/Loris/src/Envelope.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling Envelope.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/F0Estimate_3f7edaf8.o: ../../ThirdParty/Loris/src/F0Estimate.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling F0Estimate.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/fftsg_470458cc.o: ../../ThirdParty/Loris/src/fftsg.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling fftsg.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/Filter_7c93581e.o: ../../ThirdParty/Loris/src/Filter.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling Filter.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/FourierTransform_4ab0cac2.o: ../../ThirdParty/Loris/src/FourierTransform.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling FourierTransform.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/FrequencyReference_a40788f5.o: ../../ThirdParty/Loris/src/FrequencyReference.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling FrequencyReference.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/Fundamental_b5ad8c29.o: ../../ThirdParty/Loris/src/Fundamental.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling Fundamental.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/Harmonifier_af727b0a.o: ../../ThirdParty/Loris/src/Harmonifier.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling Harmonifier.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/ImportLemur_5bc0c70.o: ../../ThirdParty/Loris/src/ImportLemur.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling ImportLemur.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/KaiserWindow_f16bc563.o: ../../ThirdParty/Loris/src/KaiserWindow.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling KaiserWindow.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/LinearEnvelope_ac25833b.o: ../../ThirdParty/Loris/src/LinearEnvelope.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling LinearEnvelope.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/Marker_1ba0efe0.o: ../../ThirdParty/Loris/src/Marker.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling Marker.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/Morpher_4810c419.o: ../../ThirdParty/Loris/src/Morpher.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling Morpher.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/NoiseGenerator_e88263ff.o: ../../ThirdParty/Loris/src/NoiseGenerator.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling NoiseGenerator.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/Notifier_8dbac70c.o: ../../ThirdParty/Loris/src/Notifier.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling Notifier.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/Oscillator_d3b110c6.o: ../../ThirdParty/Loris/src/Oscillator.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling Oscillator.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/Partial_77fdabe5.o: ../../ThirdParty/Loris/src/Partial.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling Partial.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/PartialBuilder_d512c580.o: ../../ThirdParty/Loris/src/PartialBuilder.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling PartialBuilder.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/PartialUtils_5b47d796.o: ../../ThirdParty/Loris/src/PartialUtils.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling PartialUtils.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/RealtimeOscillator_432c3211.o: ../../ThirdParty/Loris/src/RealtimeOscillator.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling RealtimeOscillator.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/RealtimeSynthesizer_91275501.o: ../../ThirdParty/Loris/src/RealtimeSynthesizer.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling RealtimeSynthesizer.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/ReassignedSpectrum_758d8218.o: ../../ThirdParty/Loris/src/ReassignedSpectrum.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling ReassignedSpectrum.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/Resampler_a4535b19.o: ../../ThirdParty/Loris/src/Resampler.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling Resampler.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/SdifFile_217f4930.o: ../../ThirdParty/Loris/src/SdifFile.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling SdifFile.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/Sieve_b9658f62.o: ../../ThirdParty/Loris/src/Sieve.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling Sieve.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/SpcFile_3ee37e26.o: ../../ThirdParty/Loris/src/SpcFile.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling SpcFile.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/SpectralPeakSelector_3ed3bb48.o: ../../ThirdParty/Loris/src/SpectralPeakSelector.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling SpectralPeakSelector.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/SpectralSurface_9358c60d.o: ../../ThirdParty/Loris/src/SpectralSurface.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling SpectralSurface.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/Synthesizer_113e4cec.o: ../../ThirdParty/Loris/src/Synthesizer.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling Synthesizer.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/Resources_78b0aa10.o: ../../Resources/Resources.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling Resources.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/LorisSynthesiser_1233ef51.o: ../../Source/LorisSynthesiser.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling LorisSynthesiser.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/SampleAnalyzer_6b582ff9.o: ../../Source/SampleAnalyzer.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling SampleAnalyzer.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/PluginProcessor_a059e380.o: ../../Source/PluginProcessor.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling PluginProcessor.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/PluginEditor_94d4fb09.o: ../../Source/PluginEditor.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling PluginEditor.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/dRowAudio_6123b5ea.o: ../../JuceLibraryCode/modules/dRowAudio/dRowAudio.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling dRowAudio.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_audio_basics_2442e4ea.o: ../../JuceLibraryCode/modules/juce_audio_basics/juce_audio_basics.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_audio_basics.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_audio_devices_a4c8a728.o: ../../JuceLibraryCode/modules/juce_audio_devices/juce_audio_devices.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_audio_devices.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_audio_formats_d349f0c8.o: ../../JuceLibraryCode/modules/juce_audio_formats/juce_audio_formats.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_audio_formats.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_audio_processors_44a134a2.o: ../../JuceLibraryCode/modules/juce_audio_processors/juce_audio_processors.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_audio_processors.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_audio_utils_f63b12e8.o: ../../JuceLibraryCode/modules/juce_audio_utils/juce_audio_utils.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_audio_utils.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_core_aff681cc.o: ../../JuceLibraryCode/modules/juce_core/juce_core.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_core.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_data_structures_bdd6d488.o: ../../JuceLibraryCode/modules/juce_data_structures/juce_data_structures.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_data_structures.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_events_79b2840.o: ../../JuceLibraryCode/modules/juce_events/juce_events.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_events.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_graphics_c8f1e7a4.o: ../../JuceLibraryCode/modules/juce_graphics/juce_graphics.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_graphics.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_gui_basics_a630dd20.o: ../../JuceLibraryCode/modules/juce_gui_basics/juce_gui_basics.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_gui_basics.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_gui_extra_7767d6a8.o: ../../JuceLibraryCode/modules/juce_gui_extra/juce_gui_extra.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_gui_extra.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_PluginUtilities_e2e19a34.o: ../../JuceLibraryCode/modules/juce_audio_plugin_client/utility/juce_PluginUtilities.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_PluginUtilities.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_VST_Wrapper_bb62e93d.o: ../../JuceLibraryCode/modules/juce_audio_plugin_client/VST/juce_VST_Wrapper.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_VST_Wrapper.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_VST3_Wrapper_77e7c73b.o: ../../JuceLibraryCode/modules/juce_audio_plugin_client/VST3/juce_VST3_Wrapper.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_VST3_Wrapper.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

-include $(OBJECTS:%.o=%.d)
