//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCContactPermissionRequesting-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSString, SCLegacyRegistrationFindFriendsService;
@protocol SCContactPermissionRequestDelegate;

@interface SCPermissionRequester : NSObject <SCTraceEnabled, SCContactPermissionRequesting>
{
    id <SCContactPermissionRequestDelegate> _contactPermissionDelegate;
    SCLegacyRegistrationFindFriendsService *_findFriendsService;
}

- (void).cxx_destruct;
- (void)_contactPermissionGranted;
- (void)_contactPermissionRejected;
- (void)_requestUserSpecificContactAccess;
@property(nonatomic) __weak id <SCContactPermissionRequestDelegate> contactPermissionDelegate; // @synthesize contactPermissionDelegate=_contactPermissionDelegate;
- (id)init;
- (void)requestContactPermission;
- (void)requestContactsForBlitzPrepromptRegistrationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)requestContactsForRegistration;
- (void)requestContactsFromAdditionalServicesPermissions;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

