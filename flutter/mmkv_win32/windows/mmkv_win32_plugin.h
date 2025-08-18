#ifndef FLUTTER_PLUGIN_MMKV_WIN32_PLUGIN_H_
#define FLUTTER_PLUGIN_MMKV_WIN32_PLUGIN_H_

#include <flutter/method_channel.h>
#include <flutter/plugin_registrar_windows.h>

#include <memory>

namespace mmkv_win32 {

class MmkvWin32Plugin : public flutter::Plugin {
 public:
  static void RegisterWithRegistrar(flutter::PluginRegistrarWindows *registrar);

  MmkvWin32Plugin();

  virtual ~MmkvWin32Plugin();

  // Disallow copy and assign.
  MmkvWin32Plugin(const MmkvWin32Plugin&) = delete;
  MmkvWin32Plugin& operator=(const MmkvWin32Plugin&) = delete;

  // Called when a method is called on this plugin's channel from Dart.
  void HandleMethodCall(
      const flutter::MethodCall<flutter::EncodableValue> &method_call,
      std::unique_ptr<flutter::MethodResult<flutter::EncodableValue>> result);
};

}  // namespace mmkv_win32

#endif  // FLUTTER_PLUGIN_MMKV_WIN32_PLUGIN_H_
