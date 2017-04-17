// **********************************************************************
//
// Copyright (c) 2003-2013 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************
//
// Ice version 3.5.1
//
// <auto-generated>
//
// Generated from file `pose3dencoders.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#include <jderobot/pose3dencoders.h>
#include <Ice/LocalException.h>
#include <Ice/ObjectFactory.h>
#include <Ice/BasicStream.h>
#include <Ice/Object.h>
#include <IceUtil/Iterator.h>

#ifndef ICE_IGNORE_VERSION
#   if ICE_INT_VERSION / 100 != 305
#       error Ice version mismatch!
#   endif
#   if ICE_INT_VERSION % 100 > 50
#       error Beta header file detected
#   endif
#   if ICE_INT_VERSION % 100 < 1
#       error Ice patch level mismatch!
#   endif
#endif

namespace
{

const ::std::string __jderobot__Pose3DEncoders__getPose3DEncodersData_name = "getPose3DEncodersData";

}
::IceProxy::Ice::Object* ::IceProxy::jderobot::upCast(::IceProxy::jderobot::Pose3DEncodersData* p) { return p; }

void
::IceProxy::jderobot::__read(::IceInternal::BasicStream* __is, ::IceInternal::ProxyHandle< ::IceProxy::jderobot::Pose3DEncodersData>& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::jderobot::Pose3DEncodersData;
        v->__copyFrom(proxy);
    }
}

const ::std::string&
IceProxy::jderobot::Pose3DEncodersData::ice_staticId()
{
    return ::jderobot::Pose3DEncodersData::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::jderobot::Pose3DEncodersData::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::jderobot::Pose3DEncodersData);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::jderobot::Pose3DEncodersData::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::jderobot::Pose3DEncodersData);
}

::IceProxy::Ice::Object*
IceProxy::jderobot::Pose3DEncodersData::__newInstance() const
{
    return new Pose3DEncodersData;
}
::IceProxy::Ice::Object* ::IceProxy::jderobot::upCast(::IceProxy::jderobot::Pose3DEncoders* p) { return p; }

void
::IceProxy::jderobot::__read(::IceInternal::BasicStream* __is, ::IceInternal::ProxyHandle< ::IceProxy::jderobot::Pose3DEncoders>& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::jderobot::Pose3DEncoders;
        v->__copyFrom(proxy);
    }
}

::jderobot::Pose3DEncodersDataPtr
IceProxy::jderobot::Pose3DEncoders::getPose3DEncodersData(const ::Ice::Context* __ctx)
{
    ::IceInternal::InvocationObserver __observer(this, __jderobot__Pose3DEncoders__getPose3DEncodersData_name, __ctx);
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__jderobot__Pose3DEncoders__getPose3DEncodersData_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::jderobot::Pose3DEncoders* __del = dynamic_cast< ::IceDelegate::jderobot::Pose3DEncoders*>(__delBase.get());
            return __del->getPose3DEncodersData(__ctx, __observer);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapperRelaxed(__delBase, __ex, true, __cnt, __observer);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, true, __cnt, __observer);
        }
    }
}

::Ice::AsyncResultPtr
IceProxy::jderobot::Pose3DEncoders::begin_getPose3DEncodersData(const ::Ice::Context* __ctx, const ::IceInternal::CallbackBasePtr& __del, const ::Ice::LocalObjectPtr& __cookie)
{
    __checkAsyncTwowayOnly(__jderobot__Pose3DEncoders__getPose3DEncodersData_name);
    ::IceInternal::OutgoingAsyncPtr __result = new ::IceInternal::OutgoingAsync(this, __jderobot__Pose3DEncoders__getPose3DEncodersData_name, __del, __cookie);
    try
    {
        __result->__prepare(__jderobot__Pose3DEncoders__getPose3DEncodersData_name, ::Ice::Idempotent, __ctx);
        __result->__writeEmptyParams();
        __result->__send(true);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __result->__exceptionAsync(__ex);
    }
    return __result;
}

::jderobot::Pose3DEncodersDataPtr
IceProxy::jderobot::Pose3DEncoders::end_getPose3DEncodersData(const ::Ice::AsyncResultPtr& __result)
{
    ::Ice::AsyncResult::__check(__result, this, __jderobot__Pose3DEncoders__getPose3DEncodersData_name);
    ::jderobot::Pose3DEncodersDataPtr __ret;
    bool __ok = __result->__wait();
    try
    {
        if(!__ok)
        {
            try
            {
                __result->__throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::IceInternal::BasicStream* __is = __result->__startReadParams();
        __is->read(__ret);
        __is->readPendingObjects();
        __result->__endReadParams();
        return __ret;
    }
    catch(const ::Ice::LocalException& ex)
    {
        __result->__getObserver().failed(ex.ice_name());
        throw;
    }
}

const ::std::string&
IceProxy::jderobot::Pose3DEncoders::ice_staticId()
{
    return ::jderobot::Pose3DEncoders::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::jderobot::Pose3DEncoders::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::jderobot::Pose3DEncoders);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::jderobot::Pose3DEncoders::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::jderobot::Pose3DEncoders);
}

::IceProxy::Ice::Object*
IceProxy::jderobot::Pose3DEncoders::__newInstance() const
{
    return new Pose3DEncoders;
}

::jderobot::Pose3DEncodersDataPtr
IceDelegateM::jderobot::Pose3DEncoders::getPose3DEncodersData(const ::Ice::Context* __context, ::IceInternal::InvocationObserver& __observer)
{
    ::IceInternal::Outgoing __og(__handler.get(), __jderobot__Pose3DEncoders__getPose3DEncodersData_name, ::Ice::Idempotent, __context, __observer);
    __og.writeEmptyParams();
    bool __ok = __og.invoke();
    ::jderobot::Pose3DEncodersDataPtr __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.startReadParams();
        __is->read(__ret);
        __is->readPendingObjects();
        __og.endReadParams();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::jderobot::Pose3DEncodersDataPtr
IceDelegateD::jderobot::Pose3DEncoders::getPose3DEncodersData(const ::Ice::Context* __context, ::IceInternal::InvocationObserver&)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::jderobot::Pose3DEncodersDataPtr& __result, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::jderobot::Pose3DEncoders* servant = dynamic_cast< ::jderobot::Pose3DEncoders*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getPose3DEncodersData(_current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::jderobot::Pose3DEncodersDataPtr& _result;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __jderobot__Pose3DEncoders__getPose3DEncodersData_name, ::Ice::Idempotent, __context);
    ::jderobot::Pose3DEncodersDataPtr __result;
    try
    {
        _DirectI __direct(__result, __current);
        try
        {
            __direct.getServant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

::Ice::Object* jderobot::upCast(::jderobot::Pose3DEncodersData* p) { return p; }
::Ice::ObjectPtr
jderobot::Pose3DEncodersData::ice_clone() const
{
    ::Ice::Object* __p = new Pose3DEncodersData(*this);
    return __p;
}

namespace
{
const ::std::string __jderobot__Pose3DEncodersData_ids[2] =
{
    "::Ice::Object",
    "::jderobot::Pose3DEncodersData"
};

}

bool
jderobot::Pose3DEncodersData::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__jderobot__Pose3DEncodersData_ids, __jderobot__Pose3DEncodersData_ids + 2, _s);
}

::std::vector< ::std::string>
jderobot::Pose3DEncodersData::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__jderobot__Pose3DEncodersData_ids[0], &__jderobot__Pose3DEncodersData_ids[2]);
}

const ::std::string&
jderobot::Pose3DEncodersData::ice_id(const ::Ice::Current&) const
{
    return __jderobot__Pose3DEncodersData_ids[1];
}

const ::std::string&
jderobot::Pose3DEncodersData::ice_staticId()
{
    return __jderobot__Pose3DEncodersData_ids[1];
}

void
jderobot::Pose3DEncodersData::__writeImpl(::IceInternal::BasicStream* __os) const
{
    __os->startWriteSlice(ice_staticId(), -1, true);
    __os->write(x);
    __os->write(y);
    __os->write(z);
    __os->write(pan);
    __os->write(tilt);
    __os->write(roll);
    __os->write(clock);
    __os->write(maxPan);
    __os->write(maxTilt);
    __os->write(minPan);
    __os->write(minTilt);
    __os->endWriteSlice();
}

void
jderobot::Pose3DEncodersData::__readImpl(::IceInternal::BasicStream* __is)
{
    __is->startReadSlice();
    __is->read(x);
    __is->read(y);
    __is->read(z);
    __is->read(pan);
    __is->read(tilt);
    __is->read(roll);
    __is->read(clock);
    __is->read(maxPan);
    __is->read(maxTilt);
    __is->read(minPan);
    __is->read(minTilt);
    __is->endReadSlice();
}

namespace
{

class __F__jderobot__Pose3DEncodersData : public ::Ice::ObjectFactory
{
public:
#ifndef NDEBUG
virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
#else
virtual ::Ice::ObjectPtr
    create(const ::std::string&)
#endif
    {
        assert(type == ::jderobot::Pose3DEncodersData::ice_staticId());
        return new ::jderobot::Pose3DEncodersData;
    }

    virtual void
    destroy()
    {
    }
};
const ::Ice::ObjectFactoryPtr __F__jderobot__Pose3DEncodersData_Ptr = new __F__jderobot__Pose3DEncodersData;

class __F__jderobot__Pose3DEncodersData__Init
{
public:

    __F__jderobot__Pose3DEncodersData__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::jderobot::Pose3DEncodersData::ice_staticId(), __F__jderobot__Pose3DEncodersData_Ptr);
    }

    ~__F__jderobot__Pose3DEncodersData__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::jderobot::Pose3DEncodersData::ice_staticId());
    }
};

const __F__jderobot__Pose3DEncodersData__Init __F__jderobot__Pose3DEncodersData__i;

}

const ::Ice::ObjectFactoryPtr&
jderobot::Pose3DEncodersData::ice_factory()
{
    return __F__jderobot__Pose3DEncodersData_Ptr;
}

void 
jderobot::__patch(Pose3DEncodersDataPtr& handle, const ::Ice::ObjectPtr& v)
{
    handle = ::jderobot::Pose3DEncodersDataPtr::dynamicCast(v);
    if(v && !handle)
    {
        IceInternal::Ex::throwUOE(::jderobot::Pose3DEncodersData::ice_staticId(), v);
    }
}

::Ice::Object* jderobot::upCast(::jderobot::Pose3DEncoders* p) { return p; }

namespace
{
const ::std::string __jderobot__Pose3DEncoders_ids[2] =
{
    "::Ice::Object",
    "::jderobot::Pose3DEncoders"
};

}

bool
jderobot::Pose3DEncoders::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__jderobot__Pose3DEncoders_ids, __jderobot__Pose3DEncoders_ids + 2, _s);
}

::std::vector< ::std::string>
jderobot::Pose3DEncoders::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__jderobot__Pose3DEncoders_ids[0], &__jderobot__Pose3DEncoders_ids[2]);
}

const ::std::string&
jderobot::Pose3DEncoders::ice_id(const ::Ice::Current&) const
{
    return __jderobot__Pose3DEncoders_ids[1];
}

const ::std::string&
jderobot::Pose3DEncoders::ice_staticId()
{
    return __jderobot__Pose3DEncoders_ids[1];
}

::Ice::DispatchStatus
jderobot::Pose3DEncoders::___getPose3DEncodersData(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Idempotent, __current.mode);
    __inS.readEmptyParams();
    ::jderobot::Pose3DEncodersDataPtr __ret = getPose3DEncodersData(__current);
    ::IceInternal::BasicStream* __os = __inS.__startWriteParams(::Ice::DefaultFormat);
    __os->write(__ret);
    __os->writePendingObjects();
    __inS.__endWriteParams(true);
    return ::Ice::DispatchOK;
}

namespace
{
const ::std::string __jderobot__Pose3DEncoders_all[] =
{
    "getPose3DEncodersData",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping"
};

}

::Ice::DispatchStatus
jderobot::Pose3DEncoders::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< const ::std::string*, const ::std::string*> r = ::std::equal_range(__jderobot__Pose3DEncoders_all, __jderobot__Pose3DEncoders_all + 5, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __jderobot__Pose3DEncoders_all)
    {
        case 0:
        {
            return ___getPose3DEncodersData(in, current);
        }
        case 1:
        {
            return ___ice_id(in, current);
        }
        case 2:
        {
            return ___ice_ids(in, current);
        }
        case 3:
        {
            return ___ice_isA(in, current);
        }
        case 4:
        {
            return ___ice_ping(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
jderobot::Pose3DEncoders::__writeImpl(::IceInternal::BasicStream* __os) const
{
    __os->startWriteSlice(ice_staticId(), -1, true);
    __os->endWriteSlice();
}

void
jderobot::Pose3DEncoders::__readImpl(::IceInternal::BasicStream* __is)
{
    __is->startReadSlice();
    __is->endReadSlice();
}

void 
jderobot::__patch(Pose3DEncodersPtr& handle, const ::Ice::ObjectPtr& v)
{
    handle = ::jderobot::Pose3DEncodersPtr::dynamicCast(v);
    if(v && !handle)
    {
        IceInternal::Ex::throwUOE(::jderobot::Pose3DEncoders::ice_staticId(), v);
    }
}