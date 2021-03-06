// File generated by CPPExt (CPP file)
//

#include "SelectMgr_OrFilter.h"
#include "../Converter.h"
#include "SelectMgr_EntityOwner.h"


using namespace OCNaroWrappers;

OCSelectMgr_OrFilter::OCSelectMgr_OrFilter(Handle(SelectMgr_OrFilter)* nativeHandle) : OCSelectMgr_CompositionFilter((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_SelectMgr_OrFilter(*nativeHandle);
}

OCSelectMgr_OrFilter::OCSelectMgr_OrFilter() : OCSelectMgr_CompositionFilter((OCDummy^)nullptr)

{
  nativeHandle = new Handle_SelectMgr_OrFilter(new SelectMgr_OrFilter());
}

 System::Boolean OCSelectMgr_OrFilter::IsOk(OCNaroWrappers::OCSelectMgr_EntityOwner^ anobj)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_SelectMgr_OrFilter*)nativeHandle))->IsOk(*((Handle_SelectMgr_EntityOwner*)anobj->Handle)));
}


