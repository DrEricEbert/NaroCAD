// File generated by CPPExt (CPP file)
//

#include "StepGeom_Line.h"
#include "../Converter.h"
#include "../TCollection/TCollection_HAsciiString.h"
#include "StepGeom_CartesianPoint.h"
#include "StepGeom_Vector.h"


using namespace OCNaroWrappers;

OCStepGeom_Line::OCStepGeom_Line(StepGeom_Line* nativeHandle) : OCStepGeom_Curve((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCStepGeom_Line::OCStepGeom_Line() : OCStepGeom_Curve((OCDummy^)nullptr)

{
  nativeHandle = new StepGeom_Line();
}

 void OCStepGeom_Line::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName)
{
  ((StepGeom_Line*)nativeHandle)->Init(*((Handle_TCollection_HAsciiString*)aName->Handle));
}

 void OCStepGeom_Line::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, OCNaroWrappers::OCStepGeom_CartesianPoint^ aPnt, OCNaroWrappers::OCStepGeom_Vector^ aDir)
{
  ((StepGeom_Line*)nativeHandle)->Init(*((Handle_TCollection_HAsciiString*)aName->Handle), *((StepGeom_CartesianPoint*)aPnt->Handle), *((StepGeom_Vector*)aDir->Handle));
}

 void OCStepGeom_Line::SetPnt(OCNaroWrappers::OCStepGeom_CartesianPoint^ aPnt)
{
  ((StepGeom_Line*)nativeHandle)->SetPnt(*((StepGeom_CartesianPoint*)aPnt->Handle));
}

OCStepGeom_CartesianPoint^ OCStepGeom_Line::Pnt()
{
  StepGeom_CartesianPoint* tmp = new StepGeom_CartesianPoint();
  *tmp = ((StepGeom_Line*)nativeHandle)->Pnt();
  return gcnew OCStepGeom_CartesianPoint(tmp);
}

 void OCStepGeom_Line::SetDir(OCNaroWrappers::OCStepGeom_Vector^ aDir)
{
  ((StepGeom_Line*)nativeHandle)->SetDir(*((StepGeom_Vector*)aDir->Handle));
}

OCStepGeom_Vector^ OCStepGeom_Line::Dir()
{
  StepGeom_Vector* tmp = new StepGeom_Vector();
  *tmp = ((StepGeom_Line*)nativeHandle)->Dir();
  return gcnew OCStepGeom_Vector(tmp);
}


