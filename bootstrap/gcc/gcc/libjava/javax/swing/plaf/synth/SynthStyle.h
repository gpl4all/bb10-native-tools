
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_synth_SynthStyle__
#define __javax_swing_plaf_synth_SynthStyle__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace java
  {
    namespace awt
    {
        class Color;
        class Font;
        class Insets;
    }
  }
  namespace javax
  {
    namespace swing
    {
        class Icon;
      namespace plaf
      {
        namespace synth
        {
            class ColorType;
            class SynthContext;
            class SynthGraphicsUtils;
            class SynthPainter;
            class SynthStyle;
        }
      }
    }
  }
}

class javax::swing::plaf::synth::SynthStyle : public ::java::lang::Object
{

public:
  SynthStyle();
  virtual ::javax::swing::plaf::synth::SynthGraphicsUtils * getGraphicsUtils(::javax::swing::plaf::synth::SynthContext *);
  virtual ::java::awt::Color * getColor(::javax::swing::plaf::synth::SynthContext *, ::javax::swing::plaf::synth::ColorType *);
public: // actually protected
  virtual ::java::awt::Color * getColorForState(::javax::swing::plaf::synth::SynthContext *, ::javax::swing::plaf::synth::ColorType *) = 0;
public:
  virtual ::java::awt::Font * getFont(::javax::swing::plaf::synth::SynthContext *);
public: // actually protected
  virtual ::java::awt::Font * getFontForState(::javax::swing::plaf::synth::SynthContext *) = 0;
public:
  virtual ::java::awt::Insets * getInsets(::javax::swing::plaf::synth::SynthContext *, ::java::awt::Insets *);
  virtual ::javax::swing::plaf::synth::SynthPainter * getPainter(::javax::swing::plaf::synth::SynthContext *);
  virtual jboolean isOpaque(::javax::swing::plaf::synth::SynthContext *);
  virtual ::java::lang::Object * get(::javax::swing::plaf::synth::SynthContext *, ::java::lang::Object *);
  virtual void installDefaults(::javax::swing::plaf::synth::SynthContext *);
  virtual void uninstallDefaults(::javax::swing::plaf::synth::SynthContext *);
  virtual jint getInt(::javax::swing::plaf::synth::SynthContext *, ::java::lang::Object *, jint);
  virtual jboolean getBoolean(::javax::swing::plaf::synth::SynthContext *, ::java::lang::Object *, jboolean);
  virtual ::javax::swing::Icon * getIcon(::javax::swing::plaf::synth::SynthContext *, ::java::lang::Object *);
  virtual ::java::lang::String * getString(::javax::swing::plaf::synth::SynthContext *, ::java::lang::Object *, ::java::lang::String *);
  static ::java::lang::Class class$;
};

#endif // __javax_swing_plaf_synth_SynthStyle__