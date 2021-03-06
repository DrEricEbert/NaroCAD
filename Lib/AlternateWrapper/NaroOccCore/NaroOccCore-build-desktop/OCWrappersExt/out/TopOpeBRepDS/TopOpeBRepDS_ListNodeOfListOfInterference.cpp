// File generated by CPPExt (CPP file)
//

#include "TopOpeBRepDS_ListNodeOfListOfInterference.h"
#include "../Converter.h"
#include "TopOpeBRepDS_Interference.h"
#include "TopOpeBRepDS_ListOfInterference.h"
#include "TopOpeBRepDS_ListIteratorOfListOfInterference.h"


using namespace OCNaroWrappers;

OCTopOpeBRepDS_ListNodeOfListOfInterference::OCTopOpeBRepDS_ListNodeOfListOfInterference(Handle(TopOpeBRepDS_ListNodeOfListOfInterference)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TopOpeBRepDS_ListNodeOfListOfInterference(*nativeHandle);
}

OCTopOpeBRepDS_ListNodeOfListOfInterference::OCTopOpeBRepDS_ListNodeOfListOfInterference(OCNaroWrappers::OCTopOpeBRepDS_Interference^ I, TCollection_MapNodePtr n) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TopOpeBRepDS_ListNodeOfListOfInterference(new TopOpeBRepDS_ListNodeOfListOfInterference(*((Handle_TopOpeBRepDS_Interference*)I->Handle), n));
}

OCTopOpeBRepDS_Interference^ OCTopOpeBRepDS_ListNodeOfListOfInterference::Value()
{
  Handle(TopOpeBRepDS_Interference) tmp = (*((Handle_TopOpeBRepDS_ListNodeOfListOfInterference*)nativeHandle))->Value();
  return gcnew OCTopOpeBRepDS_Interference(&tmp);
}


