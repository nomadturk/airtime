/*------------------------------------------------------------------------------

    Copyright (c) 2004 Media Development Loan Fund
 
    This file is part of the LiveSupport project.
    http://livesupport.campware.org/
    To report bugs, send an e-mail to bugs@campware.org
 
    LiveSupport is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.
  
    LiveSupport is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
 
    You should have received a copy of the GNU General Public License
    along with LiveSupport; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 
 
    Author   : $Author: fgerlits $
    Version  : $Revision: 1.2 $
    Location : $Source: /home/paul/cvs2svn-livesupport/newcvsrepo/livesupport/modules/authentication/src/AuthenticationClientFactoryTest.h,v $

------------------------------------------------------------------------------*/
#ifndef AuthenticationClientFactoryTest_h
#define AuthenticationClientFactoryTest_h

#ifndef __cplusplus
#error This is a C++ include file
#endif


/* ============================================================ include files */

#ifdef HAVE_CONFIG_H
#include "configure.h"
#endif

#include <cppunit/extensions/HelperMacros.h>

#include "LiveSupport/Authentication/AuthenticationClientFactory.h"

namespace LiveSupport {
namespace Authentication {

using namespace LiveSupport::Core;

/* ================================================================ constants */


/* =================================================================== macros */


/* =============================================================== data types */

/**
 *  Unit test for the AuthenticationClientFactory class.
 *
 *  @author  $Author: fgerlits $
 *  @version $Revision: 1.2 $
 *  @see AuthenticationClientFactory
 */
class AuthenticationClientFactoryTest : public CPPUNIT_NS::TestFixture
{
    CPPUNIT_TEST_SUITE(AuthenticationClientFactoryTest);
    CPPUNIT_TEST(firstTest);
    CPPUNIT_TEST(preferencesTest);
    CPPUNIT_TEST_SUITE_END();

    protected:

        /**
         *  A simple test.
         *
         *  @exception CPPUNIT_NS::Exception on test failures.
         */
        void
        firstTest(void)                         throw (CPPUNIT_NS::Exception);

        /**
         *  Test saving and load of user preferences.
         *
         *  @exception CPPUNIT_NS::Exception on test failures.
         */
        void
        preferencesTest(void)                   throw (CPPUNIT_NS::Exception);

    public:
        
        /**
         *  Set up the environment for the test case.
         */
        void
        setUp(void)                                     throw ();

        /**
         *  Clean up the environment after the test case.
         */
        void
        tearDown(void)                                  throw ();
};


/* ================================================= external data structures */


/* ====================================================== function prototypes */


} // namespace Authentication
} // namespace LiveSupport

#endif // AuthenticationClientFactoryTest_h

