#ifndef __ERROR_CORRECTION_LEVEL_TEST_H__
#define __ERROR_CORRECTION_LEVEL_TEST_H__

/*
 *  ErrorCorrectionLevelTest.h
 *  zxing
 *
 *  Created by Christian Brunschen on 19/05/2008.
 *  Copyright 2008 Google Inc. All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>
#include "../../../../src/qrcode/decoder/ErrorCorrectionLevel.h"

namespace qrcode {
  namespace decoder {
    
    class ErrorCorrectionLevelTest : public CPPUNIT_NS::TestFixture {
      CPPUNIT_TEST_SUITE (ErrorCorrectionLevelTest);
      CPPUNIT_TEST (testForBits);
      CPPUNIT_TEST_SUITE_END ();
      
    public:
      
    protected:
      void testForBits();
      
    private:
    };
  }
}

#endif // __ERROR_CORRECTION_LEVEL_TEST_H__
