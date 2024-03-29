//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLocationSharingSettingsPresenting-Protocol.h"

@class NSString, SCUserSession, UINavigationController, UIViewController;

@interface SCLocationSharingSettingsPresenter : NSObject <SCLocationSharingSettingsPresenting>
{
    SCUserSession *_userSession;
    UIViewController *_baseViewController;
    UINavigationController *_navigationController;
}

- (void).cxx_destruct;
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithUserSession:(id)arg1;
- (void)presentLocationSharingSettingsOnViewController:(id)arg1 attributionInfo:(id)arg2 options:(unsigned long long)arg3 source:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)presentLocationSharingSettingsWithNavigationController:(id)arg1 attributionInfo:(id)arg2 options:(unsigned long long)arg3 source:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

