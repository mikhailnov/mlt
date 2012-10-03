#ifndef _SATURATION_EFFECT_H
#define _SATURATION_EFFECT_H 1

// A simple desaturation/saturation effect. We use the Rec. 709
// definition of luminance (in linear light, of course) and linearly
// interpolate between that (saturation=0) and the original signal
// (saturation=1). Extrapolating that curve further (ie., saturation > 1)
// gives us increased saturation if so desired.

#include "effect.h"

class SaturationEffect : public Effect {
public:
	SaturationEffect();
	std::string output_fragment_shader();

private:
	float saturation;
};

#endif // !defined(_SATURATION_EFFECT_H)
