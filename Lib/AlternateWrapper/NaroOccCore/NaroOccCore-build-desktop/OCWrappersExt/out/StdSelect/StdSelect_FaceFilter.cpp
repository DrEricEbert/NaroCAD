// File generated by CPPExt (CPP file)
//

#include "StdSelect_FaceFilter.h"
#include "../Converter.h"
#include "../SelectMgr/SelectMgr_EntityOwner.h"


using namespace OCNaroWrappers;

OCStdSelect_FaceFilter::OCStdSelect_FaceFilter(Handle(StdSelect_FaceFilter)* nativeHandle) : OCSelectMgr_Filter((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StdSelect_FaceFilter(*nativeHandle);
}

OCStdSelect_FaceFilter::OCStdSelect_FaceFilter(OCStdSelect_TypeOfFace aTypeOfFace) : OCSelectMgr_Filter((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StdSelect_FaceFilter(new StdSelect_FaceFilter((StdSelect_TypeOfFace)aTypeOfFace));
}

 void OCStdSelect_FaceFilter::SetType(OCStdSelect_TypeOfFace aNewType)
{
  (*((Handle_StdSelect_FaceFilter*)nativeHandle))->SetType((StdSelect_TypeOfFace)aNewType);
}

 OCStdSelect_TypeOfFace OCStdSelect_FaceFilter::Type()
{
  return (OCStdSelect_TypeOfFace)((*((Handle_StdSelect_FaceFilter*)nativeHandle))->Type());
}

 System::Boolean OCStdSelect_FaceFilter::IsOk(OCNaroWrappers::OCSelectMgr_EntityOwner^ anobj)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_StdSelect_FaceFilter*)nativeHandle))->IsOk(*((Handle_SelectMgr_EntityOwner*)anobj->Handle)));
}

 System::Boolean OCStdSelect_FaceFilter::ActsOn(OCTopAbs_ShapeEnum aStandardMode)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_StdSelect_FaceFilter*)nativeHandle))->ActsOn((TopAbs_ShapeEnum)aStandardMode));
}


