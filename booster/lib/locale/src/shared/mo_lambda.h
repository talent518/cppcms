//
//  Copyright (c) 2009-2011 Artyom Beilis (Tonkikh)
//
//  Distributed under the Boost Software License, Version 1.0. (See
//  accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)
//
#ifndef BOOSTER_SRC_LOCALE_MO_LAMBDA_H_INCLUDED
#define BOOSTER_SRC_LOCALE_MO_LAMBDA_H_INCLUDED

#include <memory>

namespace booster {
    namespace locale {
        namespace gnu_gettext {
            namespace lambda {
                
                struct plural {

                    virtual int operator()(int n) const = 0;
                    virtual plural *clone() const = 0;
                    virtual ~plural()
                    {
                    }
                };

                typedef std::unique_ptr<plural> plural_ptr;

                plural_ptr compile(char const *c_expression);

            } // lambda 
        } // gnu_gettext
     } // locale 
} // boost

#endif
// vim: tabstop=4 expandtab shiftwidth=4 softtabstop=4 

