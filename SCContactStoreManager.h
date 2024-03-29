//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCQueuePerformer;

@interface SCContactStoreManager : NSObject
{
    SCQueuePerformer *_performer;
    long long _cnAuthorizationStatus;
}

+ (_Bool)hasAuthorizedDeviceContactsAccess;
+ (_Bool)hasBeenPromptedForDeviceContactsAccess;
+ (_Bool)hasDeniedDeviceContactsAccess;
+ (_Bool)hasRestrictedDeviceContactsAccess;
+ (void)requestAddressBookAccessWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (id)shared;
- (void).cxx_destruct;
- (id)_getLocalNumbersDict;
@property long long cnAuthorizationStatus; // @synthesize cnAuthorizationStatus=_cnAuthorizationStatus;
- (void)getLocalNumbersDictWithQueue:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)getPhoneNumberFromArray:(id)arg1;
- (id)init;
- (void)setObjectsForNumbersDict:(id)arg1 withContact:(id)arg2;
- (void)updateCNAuthorizationStatus;

@end

