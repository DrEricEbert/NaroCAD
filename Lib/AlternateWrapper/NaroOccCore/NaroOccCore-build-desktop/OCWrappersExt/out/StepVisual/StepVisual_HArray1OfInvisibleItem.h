// File generated by CPPExt (Transient)
//
#ifndef _StepVisual_HArray1OfInvisibleItem_OCWrappers_HeaderFile
#define _StepVisual_HArray1OfInvisibleItem_OCWrappers_HeaderFile

// include the wrapped class
#include <StepVisual_HArray1OfInvisibleItem.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "StepVisual_Array1OfInvisibleItem.h"


namespace OCNaroWrappers
{

ref class OCStepVisual_InvisibleItem;
ref class OCStepVisual_Array1OfInvisibleItem;



public ref class OCStepVisual_HArray1OfInvisibleItem : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCStepVisual_HArray1OfInvisibleItem(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepVisual_HArray1OfInvisibleItem(Handle(StepVisual_HArray1OfInvisibleItem)* nativeHandle);

// Methods PUBLIC


OCStepVisual_HArray1OfInvisibleItem(Standard_Integer Low, Standard_Integer Up);


OCStepVisual_HArray1OfInvisibleItem(Standard_Integer Low, Standard_Integer Up, OCNaroWrappers::OCStepVisual_InvisibleItem^ V);


 /*instead*/  void Init(OCNaroWrappers::OCStepVisual_InvisibleItem^ V) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCStepVisual_InvisibleItem^ Value) ;


 /*instead*/  OCStepVisual_InvisibleItem^ Value(Standard_Integer Index) ;


 /*instead*/  OCStepVisual_InvisibleItem^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  OCStepVisual_Array1OfInvisibleItem^ Array1() ;


 /*instead*/  OCStepVisual_Array1OfInvisibleItem^ ChangeArray1() ;

~OCStepVisual_HArray1OfInvisibleItem()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
