// File generated by CPPExt (MPV)
//
#ifndef _StepShape_Path_OCWrappers_HeaderFile
#define _StepShape_Path_OCWrappers_HeaderFile

// include native header
#include <StepShape_Path.hxx>
#include "../Converter.h"

#include "StepShape_TopologicalRepresentationItem.h"

#include "StepShape_TopologicalRepresentationItem.h"


namespace OCNaroWrappers
{

ref class OCStepShape_HArray1OfOrientedEdge;
ref class OCTCollection_HAsciiString;
ref class OCStepShape_OrientedEdge;



public ref class OCStepShape_Path  : public OCStepShape_TopologicalRepresentationItem {

protected:
  // dummy constructor;
  OCStepShape_Path(OCDummy^) : OCStepShape_TopologicalRepresentationItem((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepShape_Path(StepShape_Path* nativeHandle);

// Methods PUBLIC

//! Returns a Path <br>
OCStepShape_Path();


virtual /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName) ;


virtual /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, OCNaroWrappers::OCStepShape_HArray1OfOrientedEdge^ aEdgeList) ;


virtual /*instead*/  void SetEdgeList(OCNaroWrappers::OCStepShape_HArray1OfOrientedEdge^ aEdgeList) ;


virtual /*instead*/  OCStepShape_HArray1OfOrientedEdge^ EdgeList() ;


virtual /*instead*/  OCStepShape_OrientedEdge^ EdgeListValue(Standard_Integer num) ;


virtual /*instead*/  Standard_Integer NbEdgeList() ;

~OCStepShape_Path()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif