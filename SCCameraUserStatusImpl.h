//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCameraUserStatus-Protocol.h"

@class NSString, User;

@interface SCCameraUserStatusImpl : NSObject <SCCameraUserStatus>
{
    User *_user;
}

- (void).cxx_destruct;
- (id)initWithUser:(id)arg1;
- (_Bool)isFirstUseLens;
- (_Bool)isFirstUseScan;
- (_Bool)isUserLoggedIn;
- (void)logHasSeenLens;
- (void)logHasSeenScan;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

