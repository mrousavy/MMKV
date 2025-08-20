/*
 * Tencent is pleased to support the open source community by making
 * MMKV available.
 *
 * Copyright (C) 2025 THL A29 Limited, a Tencent company.
 * All rights reserved.
 *
 * Licensed under the BSD 3-Clause License (the "License"); you may not use
 * this file except in compliance with the License. You may obtain a copy of
 * the License at
 *
 *       https://opensource.org/licenses/BSD-3-Clause
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

 #include "include/mmkv_linux/mmkv_linux_plugin.h"

// #include <flutter_linux/flutter_linux.h>
// #include <gtk/gtk.h>
// #include <sys/utsname.h>

// #include <cstring>

// // Handles the getPlatformVersion method call.
// FlMethodResponse *get_platform_version();

// #define MMKV_LINUX_PLUGIN(obj) \
//   (G_TYPE_CHECK_INSTANCE_CAST((obj), mmkv_linux_plugin_get_type(), \
//                               MmkvLinuxPlugin))

// struct _MmkvLinuxPlugin {
//   GObject parent_instance;
// };

// G_DEFINE_TYPE(MmkvLinuxPlugin, mmkv_linux_plugin, g_object_get_type())

// // Called when a method call is received from Flutter.
// static void mmkv_linux_plugin_handle_method_call(
//     MmkvLinuxPlugin* self,
//     FlMethodCall* method_call) {
//   g_autoptr(FlMethodResponse) response = nullptr;

//   const gchar* method = fl_method_call_get_name(method_call);

//   if (strcmp(method, "getPlatformVersion") == 0) {
//     response = get_platform_version();
//   } else {
//     response = FL_METHOD_RESPONSE(fl_method_not_implemented_response_new());
//   }

//   fl_method_call_respond(method_call, response, nullptr);
// }

// FlMethodResponse* get_platform_version() {
//   struct utsname uname_data = {};
//   uname(&uname_data);
//   g_autofree gchar *version = g_strdup_printf("Linux %s", uname_data.version);
//   g_autoptr(FlValue) result = fl_value_new_string(version);
//   return FL_METHOD_RESPONSE(fl_method_success_response_new(result));
// }

// static void mmkv_linux_plugin_dispose(GObject* object) {
//   G_OBJECT_CLASS(mmkv_linux_plugin_parent_class)->dispose(object);
// }

// static void mmkv_linux_plugin_class_init(MmkvLinuxPluginClass* klass) {
//   G_OBJECT_CLASS(klass)->dispose = mmkv_linux_plugin_dispose;
// }

// static void mmkv_linux_plugin_init(MmkvLinuxPlugin* self) {}

// static void method_call_cb(FlMethodChannel* channel, FlMethodCall* method_call,
//                            gpointer user_data) {
//   MmkvLinuxPlugin* plugin = MMKV_LINUX_PLUGIN(user_data);
//   mmkv_linux_plugin_handle_method_call(plugin, method_call);
// }

void mmkv_linux_plugin_register_with_registrar(FlPluginRegistrar* registrar) {
  // MmkvLinuxPlugin* plugin = MMKV_LINUX_PLUGIN(
  //     g_object_new(mmkv_linux_plugin_get_type(), nullptr));

  // g_autoptr(FlStandardMethodCodec) codec = fl_standard_method_codec_new();
  // g_autoptr(FlMethodChannel) channel =
  //     fl_method_channel_new(fl_plugin_registrar_get_messenger(registrar),
  //                           "mmkv_linux",
  //                           FL_METHOD_CODEC(codec));
  // fl_method_channel_set_method_call_handler(channel, method_call_cb,
  //                                           g_object_ref(plugin),
  //                                           g_object_unref);

  // g_object_unref(plugin);
}
