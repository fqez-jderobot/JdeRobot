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
// Generated from file `emSensor.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

package jderobot;

public interface EMSensorPrx extends Ice.ObjectPrx
{
    public EMSensorData getEMSensorData();

    public EMSensorData getEMSensorData(java.util.Map<String, String> __ctx);

    public Ice.AsyncResult begin_getEMSensorData();

    public Ice.AsyncResult begin_getEMSensorData(java.util.Map<String, String> __ctx);

    public Ice.AsyncResult begin_getEMSensorData(Ice.Callback __cb);

    public Ice.AsyncResult begin_getEMSensorData(java.util.Map<String, String> __ctx, Ice.Callback __cb);

    public Ice.AsyncResult begin_getEMSensorData(Callback_EMSensor_getEMSensorData __cb);

    public Ice.AsyncResult begin_getEMSensorData(java.util.Map<String, String> __ctx, Callback_EMSensor_getEMSensorData __cb);

    public EMSensorData end_getEMSensorData(Ice.AsyncResult __result);
}