
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_CORBA_GIOP_v1_2_RequestHeader__
#define __gnu_CORBA_GIOP_v1_2_RequestHeader__

#pragma interface

#include <gnu/CORBA/GIOP/v1_0/RequestHeader.h>
extern "Java"
{
  namespace gnu
  {
    namespace CORBA
    {
      namespace CDR
      {
          class AbstractCdrInput;
          class AbstractCdrOutput;
      }
      namespace GIOP
      {
        namespace v1_2
        {
            class RequestHeader;
        }
      }
    }
  }
}

class gnu::CORBA::GIOP::v1_2::RequestHeader : public ::gnu::CORBA::GIOP::v1_0::RequestHeader
{

public:
  RequestHeader();
  virtual void setResponseExpected(jboolean);
  virtual jboolean isResponseExpected();
  virtual void read(::gnu::CORBA::CDR::AbstractCdrInput *);
  virtual ::java::lang::String * toString();
  virtual void write(::gnu::CORBA::CDR::AbstractCdrOutput *);
private:
  static const jlong serialVersionUID = 1LL;
public:
  static const jshort KeyAddr = 0;
  static const jshort ProfileAddr = 1;
  static const jshort ReferenceAddr = 2;
  jbyte __attribute__((aligned(__alignof__( ::gnu::CORBA::GIOP::v1_0::RequestHeader)))) response_flags;
  jshort AddressingDisposition;
  static ::java::lang::Class class$;
};

#endif // __gnu_CORBA_GIOP_v1_2_RequestHeader__