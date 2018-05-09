// File generated by CPPExt (Transient)
//
#ifndef _TopOpeBRepTool_ListNodeOfListOfC2DF_OCWrappers_HeaderFile
#define _TopOpeBRepTool_ListNodeOfListOfC2DF_OCWrappers_HeaderFile

// include the wrapped class
#include <TopOpeBRepTool_ListNodeOfListOfC2DF.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_MapNode.h"

#include "TopOpeBRepTool_C2DF.h"


namespace OCNaroWrappers
{

ref class OCTopOpeBRepTool_C2DF;
ref class OCTopOpeBRepTool_ListOfC2DF;
ref class OCTopOpeBRepTool_ListIteratorOfListOfC2DF;



public ref class OCTopOpeBRepTool_ListNodeOfListOfC2DF : OCTCollection_MapNode {

protected:
  // dummy constructor;
  OCTopOpeBRepTool_ListNodeOfListOfC2DF(OCDummy^) : OCTCollection_MapNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCTopOpeBRepTool_ListNodeOfListOfC2DF(Handle(TopOpeBRepTool_ListNodeOfListOfC2DF)* nativeHandle);

// Methods PUBLIC


OCTopOpeBRepTool_ListNodeOfListOfC2DF(OCNaroWrappers::OCTopOpeBRepTool_C2DF^ I, TCollection_MapNodePtr n);


 /*instead*/  OCTopOpeBRepTool_C2DF^ Value() ;

~OCTopOpeBRepTool_ListNodeOfListOfC2DF()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif