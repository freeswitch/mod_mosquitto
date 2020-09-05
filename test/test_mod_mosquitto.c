/*
 * FreeSWITCH Modular Media Switching Software Library / Soft-Switch Application
 * Copyright (C) 2005-2018, Anthony Minessale II <anthm@freeswitch.org>
 *
 * Version: MPL 1.1
 *
 * The contents of this file are subject to the Mozilla Public License Version
 * 1.1 (the "License"); you may not use this file except in compliance with
 * the License. You may obtain a copy of the License at
 * http://www.mozilla.org/MPL/
 *
 * Software distributed under the License is distributed on an "AS IS" basis,
 * WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License
 * for the specific language governing rights and limitations under the
 * License.
 *
 * The Original Code is FreeSWITCH Modular Media Switching Software Library / Soft-Switch Application
 *
 * The Initial Developer of the Original Code is
 * Andrey Volk <andrey@signalwire.com>
 * Portions created by the Initial Developer are Copyright (C)
 * the Initial Developer. All Rights Reserved.
 *
 * Contributor(s):
 *
 *
 * test_mod_mosquitto -- mod_mosquitto tests
 *
 */

#include <test/switch_test.h>

FST_CORE_BEGIN("conf")
{
	FST_SUITE_BEGIN(test_mod_mosquitto)
	{
		FST_SETUP_BEGIN()
		{
			fst_requires_module("mod_mosquitto");
		}
		FST_SETUP_END()

		FST_TEARDOWN_BEGIN()
		{
		}
		FST_TEARDOWN_END()

		FST_TEST_BEGIN(mod_mosquitto_test_example)
		{
			char test[] = "test";
			fst_check_string_equals(test, "test");
		}
		FST_TEST_END()
	}
	FST_SUITE_END()
}
FST_CORE_END()
