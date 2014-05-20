// Copyright (c) 2014 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#include "libcef_dll/cpptoc/dialog_handler_cpptoc.h"
#include "libcef_dll/ctocpp/browser_ctocpp.h"
#include "libcef_dll/ctocpp/file_dialog_callback_ctocpp.h"
#include "libcef_dll/transfer_util.h"


// MEMBER FUNCTIONS - Body may be edited by hand.

int CEF_CALLBACK dialog_handler_on_file_dialog(
    struct _cef_dialog_handler_t* self, cef_browser_t* browser,
    cef_file_dialog_mode_t mode, const cef_string_t* title,
    const cef_string_t* default_file_name, cef_string_list_t accept_types,
    cef_file_dialog_callback_t* callback) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: browser; type: refptr_diff
  DCHECK(browser);
  if (!browser)
    return 0;
  // Verify param: callback; type: refptr_diff
  DCHECK(callback);
  if (!callback)
    return 0;
  // Unverified params: title, default_file_name, accept_types

  // Translate param: accept_types; type: string_vec_byref_const
  std::vector<CefString> accept_typesList;
  transfer_string_list_contents(accept_types, accept_typesList);

  // Execute
  bool _retval = CefDialogHandlerCppToC::Get(self)->OnFileDialog(
      CefBrowserCToCpp::Wrap(browser),
      mode,
      CefString(title),
      CefString(default_file_name),
      accept_typesList,
      CefFileDialogCallbackCToCpp::Wrap(callback));

  // Return type: bool
  return _retval;
}


// CONSTRUCTOR - Do not edit by hand.

CefDialogHandlerCppToC::CefDialogHandlerCppToC(CefDialogHandler* cls)
    : CefCppToC<CefDialogHandlerCppToC, CefDialogHandler, cef_dialog_handler_t>(
        cls) {
  struct_.struct_.on_file_dialog = dialog_handler_on_file_dialog;
}

#ifndef NDEBUG
template<> long CefCppToC<CefDialogHandlerCppToC, CefDialogHandler,
    cef_dialog_handler_t>::DebugObjCt = 0;
#endif

