// File generated by CPPExt (MPV)
//
#ifndef _Intrv_Intervals_OCWrappers_HeaderFile
#define _Intrv_Intervals_OCWrappers_HeaderFile

// include native header
#include <Intrv_Intervals.hxx>
#include "../Converter.h"


#include "Intrv_SequenceOfInterval.h"


namespace OCNaroWrappers
{

ref class OCIntrv_Interval;


//! The class  Intervals is a  sorted  sequence of non <br>
//!          overlapping  Real Intervals. <br>
public ref class OCIntrv_Intervals  {

protected:
  Intrv_Intervals* nativeHandle;
  OCIntrv_Intervals(OCDummy^) {};

public:
  property Intrv_Intervals* Handle
  {
    Intrv_Intervals* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCIntrv_Intervals(Intrv_Intervals* nativeHandle);

// Methods PUBLIC

//! Creates a void sequence of intervals. <br>
OCIntrv_Intervals();

//! Creates a sequence of one interval. <br>
OCIntrv_Intervals(OCNaroWrappers::OCIntrv_Interval^ Int);

//! Creates   by   copying  an   existing  sequence of <br>
//!          intervals. <br>
OCIntrv_Intervals(OCNaroWrappers::OCIntrv_Intervals^ Int);

//! Intersects the intervals with the interval <Tool>. <br>
 /*instead*/  void Intersect(OCNaroWrappers::OCIntrv_Interval^ Tool) ;

//! Intersects the intervals with the intervals in the <br>
//!          sequence  <Tool>. <br>
 /*instead*/  void Intersect(OCNaroWrappers::OCIntrv_Intervals^ Tool) ;


 /*instead*/  void Subtract(OCNaroWrappers::OCIntrv_Interval^ Tool) ;


 /*instead*/  void Subtract(OCNaroWrappers::OCIntrv_Intervals^ Tool) ;


 /*instead*/  void Unite(OCNaroWrappers::OCIntrv_Interval^ Tool) ;


 /*instead*/  void Unite(OCNaroWrappers::OCIntrv_Intervals^ Tool) ;


 /*instead*/  void XUnite(OCNaroWrappers::OCIntrv_Interval^ Tool) ;


 /*instead*/  void XUnite(OCNaroWrappers::OCIntrv_Intervals^ Tool) ;


 /*instead*/  Standard_Integer NbIntervals() ;


 /*instead*/  OCIntrv_Interval^ Value(Standard_Integer Index) ;

~OCIntrv_Intervals()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
