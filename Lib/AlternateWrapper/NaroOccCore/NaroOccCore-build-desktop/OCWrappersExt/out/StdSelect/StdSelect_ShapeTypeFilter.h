// File generated by CPPExt (Transient)
//
#ifndef _StdSelect_ShapeTypeFilter_OCWrappers_HeaderFile
#define _StdSelect_ShapeTypeFilter_OCWrappers_HeaderFile

// include the wrapped class
#include <StdSelect_ShapeTypeFilter.hxx>
#include "../Converter.h"

#include "../SelectMgr/SelectMgr_Filter.h"

#include "../TopAbs/TopAbs_ShapeEnum.h"


namespace OCNaroWrappers
{

ref class OCSelectMgr_EntityOwner;


//! A filter framework which allows you to define a filter <br>
//! for a specific shape type. The types available include: <br>
//! -   compound <br>
//! -   compsolid <br>
//! -   solid <br>
//! -   shell <br>
//! -   face <br>
//! -   wire <br>
//! -   edge <br>
//! -   vertex. <br>
public ref class OCStdSelect_ShapeTypeFilter : OCSelectMgr_Filter {

protected:
  // dummy constructor;
  OCStdSelect_ShapeTypeFilter(OCDummy^) : OCSelectMgr_Filter((OCDummy^)nullptr) {};

public:

// constructor from native
OCStdSelect_ShapeTypeFilter(Handle(StdSelect_ShapeTypeFilter)* nativeHandle);

// Methods PUBLIC

//! Constructs a filter object defined by the shape type aType. <br>
OCStdSelect_ShapeTypeFilter(OCTopAbs_ShapeEnum aType);


virtual /*instead*/  System::Boolean IsOk(OCNaroWrappers::OCSelectMgr_EntityOwner^ anobj) ;

//! Returns the type of shape selected by the filter. <br>
 /*instead*/  OCTopAbs_ShapeEnum Type() ;


virtual /*instead*/  System::Boolean ActsOn(OCTopAbs_ShapeEnum aStandardMode) override;

~OCStdSelect_ShapeTypeFilter()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif