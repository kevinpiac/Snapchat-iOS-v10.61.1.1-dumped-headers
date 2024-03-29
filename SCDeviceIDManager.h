//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCEndpointDeviceIDManager-Protocol.h"

@class NSData, NSString, SCSessionRequestManager;

@interface SCDeviceIDManager : NSObject <SCEndpointDeviceIDManager>
{
    SCSessionRequestManager *_requestManager;
    NSData *_deviceTokenKey;
    NSData *_deviceTokenVal;
}

+ (void)setPushNotificationDeviceToken:(id)arg1;
+ (id)shared;
- (void).cxx_destruct;
- (_Bool)_deviceIdentifierExists;
- (void)_fetchDeviceID;
- (void)_loadFromKeychain;
- (void)_migrateOldDeviceID;
- (void)_populateDeviceId;
- (void)_populateDeviceIdOnNotification;
- (void)_writeToKeychain;
- (id)deviceIDParameters:(id)arg1;
- (id)deviceTokenIdHash;
@property(copy) NSData *deviceTokenKey; // @synthesize deviceTokenKey=_deviceTokenKey;
@property(copy) NSData *deviceTokenVal; // @synthesize deviceTokenVal=_deviceTokenVal;
- (id)getChallengeResponseParametersForChallenge:(id)arg1 endpoint:(id)arg2 username:(id)arg3;
- (id)initWithRequestManager:(id)arg1;
- (void)storeDeviceIDWithKey:(id)arg1 value:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

