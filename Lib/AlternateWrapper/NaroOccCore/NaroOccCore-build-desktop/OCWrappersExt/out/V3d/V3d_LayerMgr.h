// File generated by CPPExt (Transient)
//
#ifndef _V3d_LayerMgr_OCWrappers_HeaderFile
#define _V3d_LayerMgr_OCWrappers_HeaderFile

// include the wrapped class
#include <V3d_LayerMgr.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"



namespace OCNaroWrappers
{

ref class OCVisual3d_Layer;
ref class OCV3d_ColorScale;
ref class OCV3d_ColorScaleLayerItem;
ref class OCV3d_View;
ref class OCAspect_ColorScale;


//! Class to manage layers <br>
public ref class OCV3d_LayerMgr : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCV3d_LayerMgr(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCV3d_LayerMgr(Handle(V3d_LayerMgr)* nativeHandle);

// Methods PUBLIC


OCV3d_LayerMgr(OCNaroWrappers::OCV3d_View^ aView);


 /*instead*/  OCVisual3d_Layer^ Overlay() ;


 /*instead*/  OCV3d_View^ View() ;


 /*instead*/  void ColorScaleDisplay() ;


 /*instead*/  void ColorScaleErase() ;


 /*instead*/  System::Boolean ColorScaleIsDisplayed() ;


 /*instead*/  OCAspect_ColorScale^ ColorScale() ;

//! Recompute layer with objects <br>
 /*instead*/  void Compute() ;


 /*instead*/  void Resized() ;

~OCV3d_LayerMgr()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
