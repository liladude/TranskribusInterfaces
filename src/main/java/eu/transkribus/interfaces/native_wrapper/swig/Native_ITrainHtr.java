/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.5
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package eu.transkribus.interfaces.native_wrapper.swig;

public class Native_ITrainHtr extends Native_IModule {
  private long swigCPtr;

  protected Native_ITrainHtr(long cPtr, boolean cMemoryOwn) {
    super(transkribus_interfacesJNI.Native_ITrainHtr_SWIGUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Native_ITrainHtr obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        transkribus_interfacesJNI.delete_Native_ITrainHtr(swigCPtr);
      }
      swigCPtr = 0;
    }
    super.delete();
  }

  public void trainHtr(String pathToModelsIn, String pathToModelsOut, StringVector props, String inputDir) {
    transkribus_interfacesJNI.Native_ITrainHtr_trainHtr(swigCPtr, this, pathToModelsIn, pathToModelsOut, StringVector.getCPtr(props), props, inputDir);
  }

  public void createTrainData(StringVector pageXmls, String outputDir, StringVector props) {
    transkribus_interfacesJNI.Native_ITrainHtr_createTrainData(swigCPtr, this, StringVector.getCPtr(pageXmls), pageXmls, outputDir, StringVector.getCPtr(props), props);
  }

}
