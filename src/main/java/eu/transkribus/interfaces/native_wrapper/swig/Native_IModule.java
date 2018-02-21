/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.8
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package eu.transkribus.interfaces.native_wrapper.swig;

public class Native_IModule {
  private transient long swigCPtr;
  protected transient boolean swigCMemOwn;

  protected Native_IModule(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Native_IModule obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        transkribus_interfacesJNI.delete_Native_IModule(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public String usage() {
    return transkribus_interfacesJNI.Native_IModule_usage(swigCPtr, this);
  }

  public String getToolName() {
    return transkribus_interfacesJNI.Native_IModule_getToolName(swigCPtr, this);
  }

  public String getVersion() {
    return transkribus_interfacesJNI.Native_IModule_getVersion(swigCPtr, this);
  }

  public String getProvider() {
    return transkribus_interfacesJNI.Native_IModule_getProvider(swigCPtr, this);
  }

}
