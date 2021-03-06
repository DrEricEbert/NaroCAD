// File generated by CPPExt (CPP file)
//

#include "StepShape_OrientedFace.h"
#include "../Converter.h"
#include "../TCollection/TCollection_HAsciiString.h"
#include "StepShape_HArray1OfFaceBound.h"
#include "StepShape_Face.h"
#include "StepShape_FaceBound.h"


using namespace OCNaroWrappers;

OCStepShape_OrientedFace::OCStepShape_OrientedFace(StepShape_OrientedFace* nativeHandle) : OCStepShape_Face((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCStepShape_OrientedFace::OCStepShape_OrientedFace() : OCStepShape_Face((OCDummy^)nullptr)

{
  nativeHandle = new StepShape_OrientedFace();
}

 void OCStepShape_OrientedFace::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, OCNaroWrappers::OCStepShape_HArray1OfFaceBound^ aBounds)
{
  ((StepShape_OrientedFace*)nativeHandle)->Init(*((Handle_TCollection_HAsciiString*)aName->Handle), *((Handle_StepShape_HArray1OfFaceBound*)aBounds->Handle));
}

 void OCStepShape_OrientedFace::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, OCNaroWrappers::OCStepShape_Face^ aFaceElement, System::Boolean aOrientation)
{
  ((StepShape_OrientedFace*)nativeHandle)->Init(*((Handle_TCollection_HAsciiString*)aName->Handle), *((StepShape_Face*)aFaceElement->Handle), OCConverter::BooleanToStandardBoolean(aOrientation));
}

 void OCStepShape_OrientedFace::SetFaceElement(OCNaroWrappers::OCStepShape_Face^ aFaceElement)
{
  ((StepShape_OrientedFace*)nativeHandle)->SetFaceElement(*((StepShape_Face*)aFaceElement->Handle));
}

OCStepShape_Face^ OCStepShape_OrientedFace::FaceElement()
{
  StepShape_Face* tmp = new StepShape_Face();
  *tmp = ((StepShape_OrientedFace*)nativeHandle)->FaceElement();
  return gcnew OCStepShape_Face(tmp);
}

 void OCStepShape_OrientedFace::SetOrientation(System::Boolean aOrientation)
{
  ((StepShape_OrientedFace*)nativeHandle)->SetOrientation(OCConverter::BooleanToStandardBoolean(aOrientation));
}

 System::Boolean OCStepShape_OrientedFace::Orientation()
{
  return OCConverter::StandardBooleanToBoolean(((StepShape_OrientedFace*)nativeHandle)->Orientation());
}

 void OCStepShape_OrientedFace::SetBounds(OCNaroWrappers::OCStepShape_HArray1OfFaceBound^ aBounds)
{
  ((StepShape_OrientedFace*)nativeHandle)->SetBounds(*((Handle_StepShape_HArray1OfFaceBound*)aBounds->Handle));
}

OCStepShape_HArray1OfFaceBound^ OCStepShape_OrientedFace::Bounds()
{
  Handle(StepShape_HArray1OfFaceBound) tmp = ((StepShape_OrientedFace*)nativeHandle)->Bounds();
  return gcnew OCStepShape_HArray1OfFaceBound(&tmp);
}

OCStepShape_FaceBound^ OCStepShape_OrientedFace::BoundsValue(Standard_Integer num)
{
  StepShape_FaceBound* tmp = new StepShape_FaceBound();
  *tmp = ((StepShape_OrientedFace*)nativeHandle)->BoundsValue(num);
  return gcnew OCStepShape_FaceBound(tmp);
}

 Standard_Integer OCStepShape_OrientedFace::NbBounds()
{
  return ((StepShape_OrientedFace*)nativeHandle)->NbBounds();
}


