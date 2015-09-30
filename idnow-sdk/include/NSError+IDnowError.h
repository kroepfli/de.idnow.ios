//
//  NSError+IDnowError.h
//  idnow-sdk
//
//  Created by Matthias Redlin on 21/08/15.
//  Copyright (c) 2015 IDnow GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>


FOUNDATION_EXPORT NSString *const IDnowErrorDomain;

FOUNDATION_EXPORT NSString *const IDnowStatusCodeErrorKey;

FOUNDATION_EXPORT NSString *const IDnowExceptionIDErrorKey;

FOUNDATION_EXPORT NSString *const IDnowCauseErrorKey;


typedef NS_ENUM (NSInteger, IDnowError)
{
    /**
     *  Can occur during initialization (e.g. triggered by [IDnowController initialize]).
     *  Occurs when the IDnowSettings instance does not contain a transactionToken.
     */
    IDnowErrorMissingTransactionToken		  = 1000,
    /**
     *  Can occur during initialization (e.g. triggered by [IDnowController initialize]).
     *  Occurs when the IDnowSettings instance does not contain a companyID.
     */
    IDnowErrorMissingCompanyID				  = 1001,
    /**
     *  Can occur during initialization (e.g. triggered by [IDnowController initialize]).
     *  Occurs when the user tries to initialize a video ident on an iPhone 4 (not supported).
     */
    IDnowErrorVideoIdentNotSupportedOniPhone4 = 1002,
    /**
     *  Can occur during initialization (e.g. triggered by [IDnowController initialize]).
     *  Occurs when an identification cannot be initialized because the time is outside business hours.
     */
    IDnowErrorOfficeClosed	= 1003,
    /**
     *  Can occur during initialization (e.g. triggered by [IDnowController initialize]).
     *  Occurs when the device does either have no front camera or no back camera.
     */
    IDnowErrorMissingCamera = 1004,
    /**
     *  Can occur during initialization (e.g. triggered by [IDnowController initialize]).
     *  Occurs when a video ident was request, but the camera access was not granted by the user.
     */
    IDnowErrorCameraAccessNotGranted	 = 1005,
    /**
     *  Can occur during initialization (e.g. triggered by [IDnowController initialize]).
     *  Occurs when a video ident was requested, but the microphone access was not granted by the user.
     */
    IDnowErrorMicrophoneAccessNotGranted = 1006,
    /**
     *  Can occur during initialization (e.g. triggered by [IDnowController initialize]).
     *  Occurs when a video ident was requested, but the device does not provide a microphone.
     */
    IDnowErrorMissingMicrophone = 1007,
    /**
     *  Can occur during initialization (e.g. triggered by [IDnowController initialize]).
     *  Occurs when a video ident was requested, but no internet connection is present.
     */
    IDnowErrorNoInternetConnection		 = 1008,
    /**
     *  Can occur during initialization (e.g. triggered by [IDnowController initialize])
     *  and identification process (e.g. triggered by [IDnowController startIdentificationFromViewController:]).
     *  The IDnowError object will also contain the status code returned by the server.
     */
    IDnowErrorServer = 1009,
    /**
     *  Can occur during an identification process (e.g. triggered by [IDnowController startIdentificationFromViewController:]).
     */
    IDnowErrorTokbox = 1010,
    /**
     *  Can occur during an identification process (e.g. triggered by [IDnowController startIdentificationFromViewController:]).
     *  Describes that an identification failed.
     */
    IDnowErrorIdentificationFailed = 1011
};

@interface NSError (IDnowError)

@end