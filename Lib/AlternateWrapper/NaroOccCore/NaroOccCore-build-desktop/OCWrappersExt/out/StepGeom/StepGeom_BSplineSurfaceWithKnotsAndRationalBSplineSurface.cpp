// File generated by CPPExt (CPP file)
//

#include "StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface.h"
#include "../Converter.h"
#include "../TCollection/TCollection_HAsciiString.h"
#include "StepGeom_HArray2OfCartesianPoint.h"
#include "StepGeom_BSplineSurfaceWithKnots.h"
#include "StepGeom_RationalBSplineSurface.h"
#include "../TColStd/TColStd_HArray1OfInteger.h"
#include "../TColStd/TColStd_HArray1OfReal.h"
#include "../TColStd/TColStd_HArray2OfReal.h"


using namespace OCNaroWrappers;

OCStepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::OCStepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface(StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface* nativeHandle) : OCStepGeom_BSplineSurface((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCStepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::OCStepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface() : OCStepGeom_BSplineSurface((OCDummy^)nullptr)

{
  nativeHandle = new StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface();
}

 void OCStepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, Standard_Integer aUDegree, Standard_Integer aVDegree, OCNaroWrappers::OCStepGeom_HArray2OfCartesianPoint^ aControlPointsList, OCStepGeom_BSplineSurfaceForm aSurfaceForm, OCStepData_Logical aUClosed, OCStepData_Logical aVClosed, OCStepData_Logical aSelfIntersect)
{
  ((StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface*)nativeHandle)->Init(*((Handle_TCollection_HAsciiString*)aName->Handle), aUDegree, aVDegree, *((Handle_StepGeom_HArray2OfCartesianPoint*)aControlPointsList->Handle), (StepGeom_BSplineSurfaceForm)aSurfaceForm, (StepData_Logical)aUClosed, (StepData_Logical)aVClosed, (StepData_Logical)aSelfIntersect);
}

 void OCStepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, Standard_Integer aUDegree, Standard_Integer aVDegree, OCNaroWrappers::OCStepGeom_HArray2OfCartesianPoint^ aControlPointsList, OCStepGeom_BSplineSurfaceForm aSurfaceForm, OCStepData_Logical aUClosed, OCStepData_Logical aVClosed, OCStepData_Logical aSelfIntersect, OCNaroWrappers::OCStepGeom_BSplineSurfaceWithKnots^ aBSplineSurfaceWithKnots, OCNaroWrappers::OCStepGeom_RationalBSplineSurface^ aRationalBSplineSurface)
{
  ((StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface*)nativeHandle)->Init(*((Handle_TCollection_HAsciiString*)aName->Handle), aUDegree, aVDegree, *((Handle_StepGeom_HArray2OfCartesianPoint*)aControlPointsList->Handle), (StepGeom_BSplineSurfaceForm)aSurfaceForm, (StepData_Logical)aUClosed, (StepData_Logical)aVClosed, (StepData_Logical)aSelfIntersect, *((StepGeom_BSplineSurfaceWithKnots*)aBSplineSurfaceWithKnots->Handle), *((StepGeom_RationalBSplineSurface*)aRationalBSplineSurface->Handle));
}

 void OCStepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, Standard_Integer aUDegree, Standard_Integer aVDegree, OCNaroWrappers::OCStepGeom_HArray2OfCartesianPoint^ aControlPointsList, OCStepGeom_BSplineSurfaceForm aSurfaceForm, OCStepData_Logical aUClosed, OCStepData_Logical aVClosed, OCStepData_Logical aSelfIntersect, OCNaroWrappers::OCTColStd_HArray1OfInteger^ aUMultiplicities, OCNaroWrappers::OCTColStd_HArray1OfInteger^ aVMultiplicities, OCNaroWrappers::OCTColStd_HArray1OfReal^ aUKnots, OCNaroWrappers::OCTColStd_HArray1OfReal^ aVKnots, OCStepGeom_KnotType aKnotSpec, OCNaroWrappers::OCTColStd_HArray2OfReal^ aWeightsData)
{
  ((StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface*)nativeHandle)->Init(*((Handle_TCollection_HAsciiString*)aName->Handle), aUDegree, aVDegree, *((Handle_StepGeom_HArray2OfCartesianPoint*)aControlPointsList->Handle), (StepGeom_BSplineSurfaceForm)aSurfaceForm, (StepData_Logical)aUClosed, (StepData_Logical)aVClosed, (StepData_Logical)aSelfIntersect, *((Handle_TColStd_HArray1OfInteger*)aUMultiplicities->Handle), *((Handle_TColStd_HArray1OfInteger*)aVMultiplicities->Handle), *((Handle_TColStd_HArray1OfReal*)aUKnots->Handle), *((Handle_TColStd_HArray1OfReal*)aVKnots->Handle), (StepGeom_KnotType)aKnotSpec, *((Handle_TColStd_HArray2OfReal*)aWeightsData->Handle));
}

 void OCStepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::SetBSplineSurfaceWithKnots(OCNaroWrappers::OCStepGeom_BSplineSurfaceWithKnots^ aBSplineSurfaceWithKnots)
{
  ((StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface*)nativeHandle)->SetBSplineSurfaceWithKnots(*((StepGeom_BSplineSurfaceWithKnots*)aBSplineSurfaceWithKnots->Handle));
}

OCStepGeom_BSplineSurfaceWithKnots^ OCStepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::BSplineSurfaceWithKnots()
{
  StepGeom_BSplineSurfaceWithKnots* tmp = new StepGeom_BSplineSurfaceWithKnots();
  *tmp = ((StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface*)nativeHandle)->BSplineSurfaceWithKnots();
  return gcnew OCStepGeom_BSplineSurfaceWithKnots(tmp);
}

 void OCStepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::SetRationalBSplineSurface(OCNaroWrappers::OCStepGeom_RationalBSplineSurface^ aRationalBSplineSurface)
{
  ((StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface*)nativeHandle)->SetRationalBSplineSurface(*((StepGeom_RationalBSplineSurface*)aRationalBSplineSurface->Handle));
}

OCStepGeom_RationalBSplineSurface^ OCStepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::RationalBSplineSurface()
{
  StepGeom_RationalBSplineSurface* tmp = new StepGeom_RationalBSplineSurface();
  *tmp = ((StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface*)nativeHandle)->RationalBSplineSurface();
  return gcnew OCStepGeom_RationalBSplineSurface(tmp);
}

 void OCStepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::SetUMultiplicities(OCNaroWrappers::OCTColStd_HArray1OfInteger^ aUMultiplicities)
{
  ((StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface*)nativeHandle)->SetUMultiplicities(*((Handle_TColStd_HArray1OfInteger*)aUMultiplicities->Handle));
}

OCTColStd_HArray1OfInteger^ OCStepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::UMultiplicities()
{
  Handle(TColStd_HArray1OfInteger) tmp = ((StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface*)nativeHandle)->UMultiplicities();
  return gcnew OCTColStd_HArray1OfInteger(&tmp);
}

 Standard_Integer OCStepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::UMultiplicitiesValue(Standard_Integer num)
{
  return ((StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface*)nativeHandle)->UMultiplicitiesValue(num);
}

 Standard_Integer OCStepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::NbUMultiplicities()
{
  return ((StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface*)nativeHandle)->NbUMultiplicities();
}

 void OCStepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::SetVMultiplicities(OCNaroWrappers::OCTColStd_HArray1OfInteger^ aVMultiplicities)
{
  ((StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface*)nativeHandle)->SetVMultiplicities(*((Handle_TColStd_HArray1OfInteger*)aVMultiplicities->Handle));
}

OCTColStd_HArray1OfInteger^ OCStepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::VMultiplicities()
{
  Handle(TColStd_HArray1OfInteger) tmp = ((StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface*)nativeHandle)->VMultiplicities();
  return gcnew OCTColStd_HArray1OfInteger(&tmp);
}

 Standard_Integer OCStepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::VMultiplicitiesValue(Standard_Integer num)
{
  return ((StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface*)nativeHandle)->VMultiplicitiesValue(num);
}

 Standard_Integer OCStepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::NbVMultiplicities()
{
  return ((StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface*)nativeHandle)->NbVMultiplicities();
}

 void OCStepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::SetUKnots(OCNaroWrappers::OCTColStd_HArray1OfReal^ aUKnots)
{
  ((StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface*)nativeHandle)->SetUKnots(*((Handle_TColStd_HArray1OfReal*)aUKnots->Handle));
}

OCTColStd_HArray1OfReal^ OCStepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::UKnots()
{
  Handle(TColStd_HArray1OfReal) tmp = ((StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface*)nativeHandle)->UKnots();
  return gcnew OCTColStd_HArray1OfReal(&tmp);
}

 Standard_Real OCStepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::UKnotsValue(Standard_Integer num)
{
  return ((StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface*)nativeHandle)->UKnotsValue(num);
}

 Standard_Integer OCStepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::NbUKnots()
{
  return ((StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface*)nativeHandle)->NbUKnots();
}

 void OCStepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::SetVKnots(OCNaroWrappers::OCTColStd_HArray1OfReal^ aVKnots)
{
  ((StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface*)nativeHandle)->SetVKnots(*((Handle_TColStd_HArray1OfReal*)aVKnots->Handle));
}

OCTColStd_HArray1OfReal^ OCStepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::VKnots()
{
  Handle(TColStd_HArray1OfReal) tmp = ((StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface*)nativeHandle)->VKnots();
  return gcnew OCTColStd_HArray1OfReal(&tmp);
}

 Standard_Real OCStepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::VKnotsValue(Standard_Integer num)
{
  return ((StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface*)nativeHandle)->VKnotsValue(num);
}

 Standard_Integer OCStepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::NbVKnots()
{
  return ((StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface*)nativeHandle)->NbVKnots();
}

 void OCStepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::SetKnotSpec(OCStepGeom_KnotType aKnotSpec)
{
  ((StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface*)nativeHandle)->SetKnotSpec((StepGeom_KnotType)aKnotSpec);
}

 OCStepGeom_KnotType OCStepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::KnotSpec()
{
  return (OCStepGeom_KnotType)(((StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface*)nativeHandle)->KnotSpec());
}

 void OCStepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::SetWeightsData(OCNaroWrappers::OCTColStd_HArray2OfReal^ aWeightsData)
{
  ((StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface*)nativeHandle)->SetWeightsData(*((Handle_TColStd_HArray2OfReal*)aWeightsData->Handle));
}

OCTColStd_HArray2OfReal^ OCStepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::WeightsData()
{
  Handle(TColStd_HArray2OfReal) tmp = ((StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface*)nativeHandle)->WeightsData();
  return gcnew OCTColStd_HArray2OfReal(&tmp);
}

 Standard_Real OCStepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::WeightsDataValue(Standard_Integer num1, Standard_Integer num2)
{
  return ((StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface*)nativeHandle)->WeightsDataValue(num1, num2);
}

 Standard_Integer OCStepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::NbWeightsDataI()
{
  return ((StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface*)nativeHandle)->NbWeightsDataI();
}

 Standard_Integer OCStepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::NbWeightsDataJ()
{
  return ((StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface*)nativeHandle)->NbWeightsDataJ();
}

