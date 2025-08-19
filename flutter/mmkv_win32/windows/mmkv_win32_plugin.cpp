// #include <windows.h>
// #include <VersionHelpers.h>

#include "include/mmkv_win32/mmkv_win32_plugin.h"

// #include <flutter/plugin_registrar_windows.h>
// #include <flutter/method_channel.h>
// #include <flutter/standard_method_codec.h>
// #include <memory>
// #include <sstream>

// namespace mmkv_win32 {

// class MmkvWin32Plugin : public flutter::Plugin {
//  public:
//   static void RegisterWithRegistrar(flutter::PluginRegistrarWindows *registrar) {
//     auto channel =
//         std::make_unique<flutter::MethodChannel<flutter::EncodableValue>>(
//             registrar->messenger(), "mmkv_win32",
//             &flutter::StandardMethodCodec::GetInstance());

//     auto plugin = std::make_unique<MmkvWin32Plugin>();

//     channel->SetMethodCallHandler(
//         [plugin_pointer = plugin.get()](const auto &call, auto result) {
//           plugin_pointer->HandleMethodCall(call, std::move(result));
//         });

//     registrar->AddPlugin(std::move(plugin));
//   }

//   MmkvWin32Plugin() {};

//   virtual ~MmkvWin32Plugin() {};

//   // Disallow copy and assign.
//   MmkvWin32Plugin(const MmkvWin32Plugin&) = delete;
//   MmkvWin32Plugin& operator=(const MmkvWin32Plugin&) = delete;

//   // Called when a method is called on this plugin's channel from Dart.
//   void HandleMethodCall(
//       const flutter::MethodCall<flutter::EncodableValue> &method_call,
//       std::unique_ptr<flutter::MethodResult<flutter::EncodableValue>> result) {
//           if (method_call.method_name().compare("getPlatformVersion") == 0) {
//       std::ostringstream version_stream;
//       version_stream << "Windows ";
//       if (IsWindows10OrGreater()) {
//         version_stream << "10+";
//       } else if (IsWindows8OrGreater()) {
//         version_stream << "8";
//       } else if (IsWindows7OrGreater()) {
//         version_stream << "7";
//       }
//       result->Success(flutter::EncodableValue(version_stream.str()));
//     } else {
//       result->NotImplemented();
//     }
//   }
// };

// }  // namespace mmkv_win32

void MmkvWin32PluginRegisterWithRegistrar(
    FlutterDesktopPluginRegistrarRef registrar) {
  // mmkv_win32::MmkvWin32Plugin::RegisterWithRegistrar(
  //     flutter::PluginRegistrarManager::GetInstance()
  //         ->GetRegistrar<flutter::PluginRegistrarWindows>(registrar));
}
