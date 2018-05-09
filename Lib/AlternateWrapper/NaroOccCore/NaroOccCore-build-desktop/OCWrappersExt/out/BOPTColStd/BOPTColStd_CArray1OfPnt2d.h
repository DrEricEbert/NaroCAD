// File generated by CPPExt (MPV)
//
#ifndef _BOPTColStd_CArray1OfPnt2d_OCWrappers_HeaderFile
#define _BOPTColStd_CArray1OfPnt2d_OCWrappers_HeaderFile

// include native header
#include <BOPTColStd_CArray1OfPnt2d.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCgp_Pnt2d;



public ref class OCBOPTColStd_CArray1OfPnt2d  {

protected:
  BOPTColStd_CArray1OfPnt2d* nativeHandle;
  OCBOPTColStd_CArray1OfPnt2d(OCDummy^) {};

public:
  property BOPTColStd_CArray1OfPnt2d* Handle
  {
    BOPTColStd_CArray1OfPnt2d* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBOPTColStd_CArray1OfPnt2d(BOPTColStd_CArray1OfPnt2d* nativeHandle);

// Methods PUBLIC


OCBOPTColStd_CArray1OfPnt2d(Standard_Integer Length, Standard_Integer BlockLength);


 /*instead*/  void Resize(Standard_Integer theNewLength) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Extent() ;


 /*instead*/  Standard_Integer FactLength() ;


 /*instead*/  Standard_Integer Append(OCNaroWrappers::OCgp_Pnt2d^ Value) ;


 /*instead*/  void Remove(Standard_Integer Index) ;


 /*instead*/  OCgp_Pnt2d^ Value(Standard_Integer Index) ;


 /*instead*/  OCgp_Pnt2d^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  void SetBlockLength(Standard_Integer aBL) ;


 /*instead*/  Standard_Integer BlockLength() ;


 /*instead*/  void Purge() ;

~OCBOPTColStd_CArray1OfPnt2d()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif