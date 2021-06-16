/****************************************************************************
 *                                                                          *
 * Copyright (C) 2015 Neutrino International Inc.                           *
 *                                                                          *
 * Author : Brian Lin <lin.foxman@gmail.com>, Skype: wolfram_lin            *
 *                                                                          *
 ****************************************************************************/

#ifndef QT_INFERENCE_H
#define QT_INFERENCE_H

#include <QtFoundation>

QT_BEGIN_NAMESPACE

#ifndef QT_STATIC
#    if defined(QT_BUILD_QTINFERENCE_LIB)
#      define Q_INFERENCE_EXPORT Q_DECL_EXPORT
#    else
#      define Q_INFERENCE_EXPORT Q_DECL_IMPORT
#    endif
#else
#    define Q_INFERENCE_EXPORT
#endif

namespace N
{

class Q_INFERENCE_EXPORT Inference ;

class Q_INFERENCE_EXPORT Inference
{
  public:

    explicit Inference (void) ;
    virtual ~Inference (void) ;

  protected:

  private:

};

}

QT_END_NAMESPACE

#endif
