
#include "ModuleFactory.h"

#include <iostream>
#include <stdexcept>
#include <dlfcn.h>

namespace transkribus {

const std::string ModuleFactory::FACTORY_VARIABLE_NAME = "ModuleFactoryInstance";

void* ModuleFactory::loadLibrary(const std::string& libName) {
	void* library_handle = dlopen(libName.c_str(), RTLD_NOW | RTLD_GLOBAL);

	if (!library_handle) {
		throw runtime_error("cannot load library "+libName+" error: "+dlerror());
	}

	return library_handle;
}

IModule* ModuleFactory::createModuleFromLib(const std::string& pathToLib, const std::vector<std::string>& pars)
{
	ModuleFactory* factory;

	cout << "opening lib: " << pathToLib << endl;

	void* library_handle = loadLibrary(pathToLib);
	factory = (ModuleFactory*) dlsym(library_handle, FACTORY_VARIABLE_NAME.c_str());
	if (factory == NULL) {
		throw runtime_error("error extracting factory instance '" + FACTORY_VARIABLE_NAME + "' from lib "+pathToLib+" - error: "+dlerror());
	}

	return factory->create(pars);
}

//ILayoutAnalysis* PluginFactory::createLayoutAnalysis(const std::string& pathToLib)
//{
//	LayoutAnalysisFactory* factory;
//
//	cout << "opening layout analysis lib: " << pathToLib << endl;
//
//	void* library_handle = loadLibrary(pathToLib);
//	factory = (LayoutAnalysisFactory*) dlsym(library_handle, FACTORY_VARIABLE_NAME.c_str());
//	if (factory == NULL) {
//		throw runtime_error("error extracting variable " + FACTORY_VARIABLE_NAME + " from lib "+pathToLib+" - error: "+dlerror());
//	}
//
//	return factory->create();
//}


}