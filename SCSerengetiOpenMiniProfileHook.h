//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSerengetiHookWithSession.h"

#import "SCMiniProfileViewControllerDelegate-Protocol.h"

@class NSString;

@interface SCSerengetiOpenMiniProfileHook : SCSerengetiHookWithSession <SCMiniProfileViewControllerDelegate>
{
}

- (void)_presentMiniProfileWithSnapchatter:(id)arg1 snapchatterServices:(id)arg2 onViewController:(id)arg3;
- (id)javascriptFunctionName;
- (void)miniProfileController:(id)arg1 wantsToNavigateToChatWithDeepLinkURL:(id)arg2;
- (void)viewController:(id)arg1 performHookWithParameters:(id)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
