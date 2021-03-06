// File generated by CPPExt (MPV)
//
#ifndef _Xw_ListOfMFTSizes_OCWrappers_HeaderFile
#define _Xw_ListOfMFTSizes_OCWrappers_HeaderFile

// include native header
#include <Xw_ListOfMFTSizes.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{




public ref class OCXw_ListOfMFTSizes  {

protected:
  Xw_ListOfMFTSizes* nativeHandle;
  OCXw_ListOfMFTSizes(OCDummy^) {};

public:
  property Xw_ListOfMFTSizes* Handle
  {
    Xw_ListOfMFTSizes* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCXw_ListOfMFTSizes(Xw_ListOfMFTSizes* nativeHandle);

// Methods PUBLIC


OCXw_ListOfMFTSizes(Standard_Integer Low, Standard_Integer Up);


OCXw_ListOfMFTSizes(Standard_ShortReal Item, Standard_Integer Low, Standard_Integer Up);


 /*instead*/  void Init(Standard_ShortReal V) ;


 /*instead*/  System::Boolean IsAllocated() ;


 /*instead*/  OCXw_ListOfMFTSizes^ Assign(OCNaroWrappers::OCXw_ListOfMFTSizes^ Other) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, Standard_ShortReal Value) ;


 /*instead*/  Standard_ShortReal Value(Standard_Integer Index) ;


 /*instead*/  Standard_ShortReal ChangeValue(Standard_Integer Index) ;

~OCXw_ListOfMFTSizes()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
