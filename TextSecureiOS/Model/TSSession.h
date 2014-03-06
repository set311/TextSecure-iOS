//
//  TSSession.h
//  TextSecureiOS
//
//  Created by Frederic Jacobs on 01/03/14.
//  Copyright (c) 2014 Open Whisper Systems. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TSContact.h"
#import "RKCK.h"
#import "TSChainKey.h"
#import "TSWhisperMessageKeys.h"
#import "TSPrekey.h"
#import "TSEncryptedWhisperMessage.hh"

@interface TSSession : NSObject

@property(readonly)NSString *sessionIdentifier;
@property(readonly)int deviceId;
@property(readonly)TSContact *contact;

@property(readonly)NSData *theirIdentityKey;
@property(copy)NSData *theirEphemeralKey;
@property(readwrite)NSData *rootKey;

#pragma mark Constructors



@end