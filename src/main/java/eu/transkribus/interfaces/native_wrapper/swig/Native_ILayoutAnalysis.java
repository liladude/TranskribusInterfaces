/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.8
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package eu.transkribus.interfaces.native_wrapper.swig;

public class Native_ILayoutAnalysis extends Native_IModule {
  private transient long swigCPtr;

  protected Native_ILayoutAnalysis(long cPtr, boolean cMemoryOwn) {
    super(transkribus_interfacesJNI.Native_ILayoutAnalysis_SWIGUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Native_ILayoutAnalysis obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        transkribus_interfacesJNI.delete_Native_ILayoutAnalysis(swigCPtr);
      }
      swigCPtr = 0;
    }
    super.delete();
  }

  public void process(Native_Image image, String xmlInOut, StringVector ids, StringVector props) {
    transkribus_interfacesJNI.Native_ILayoutAnalysis_process(swigCPtr, this, Native_Image.getCPtr(image), image, xmlInOut, StringVector.getCPtr(ids), ids, StringVector.getCPtr(props), props);
  }

}
