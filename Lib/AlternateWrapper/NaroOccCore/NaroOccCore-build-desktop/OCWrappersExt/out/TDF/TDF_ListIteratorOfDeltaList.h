// File generated by CPPExt (MPV)
//
#ifndef _TDF_ListIteratorOfDeltaList_OCWrappers_HeaderFile
#define _TDF_ListIteratorOfDeltaList_OCWrappers_HeaderFile

// include native header
#include <TDF_ListIteratorOfDeltaList.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCTDF_DeltaList;
ref class OCTDF_Delta;
ref class OCTDF_ListNodeOfDeltaList;



public ref class OCTDF_ListIteratorOfDeltaList  {

protected:
  TDF_ListIteratorOfDeltaList* nativeHandle;
  OCTDF_ListIteratorOfDeltaList(OCDummy^) {};

public:
  property TDF_ListIteratorOfDeltaList* Handle
  {
    TDF_ListIteratorOfDeltaList* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCTDF_ListIteratorOfDeltaList(TDF_ListIteratorOfDeltaList* nativeHandle);

// Methods PUBLIC


OCTDF_ListIteratorOfDeltaList();


OCTDF_ListIteratorOfDeltaList(OCNaroWrappers::OCTDF_DeltaList^ L);


 /*instead*/  void Initialize(OCNaroWrappers::OCTDF_DeltaList^ L) ;


 /*instead*/  System::Boolean More() ;


 /*instead*/  void Next() ;


 /*instead*/  OCTDF_Delta^ Value() ;

~OCTDF_ListIteratorOfDeltaList()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
