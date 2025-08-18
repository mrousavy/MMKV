#include "include/mmkv_win32/mmkv_win32_plugin_c_api.h"

#include <flutter/plugin_registrar_windows.h>

#include "mmkv_win32_plugin.h"
#include <MMKV/MMKV.h>

void MmkvWin32PluginCApiRegisterWithRegistrar(
    FlutterDesktopPluginRegistrarRef registrar) {
  mmkv_win32::MmkvWin32Plugin::RegisterWithRegistrar(
      flutter::PluginRegistrarManager::GetInstance()
          ->GetRegistrar<flutter::PluginRegistrarWindows>(registrar));

  // MMKV::initializeMMKV(L"D:/mmkv");
}
