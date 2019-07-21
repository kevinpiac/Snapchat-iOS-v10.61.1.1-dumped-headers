//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCDeepLinkURL, SCMainCameraViewController, SCScopedAccess, SCUserSession;

@interface SCDeepLinkBitmojiController : NSObject
{
    SCDeepLinkURL *_deepLinkURL;
    SCUserSession *_userSession;
    SCScopedAccess *_settingsLauncher;
    SCMainCameraViewController *_parentViewController;
}

+ (id)controllerWithParentViewController:(id)arg1 userSession:(id)arg2;
- (void).cxx_destruct;
- (void)_linkToBitmoji:(id)arg1;
- (void)_showCreateBitmojiAlert;
- (void)_showLoginBitmojiAlert;
- (id)initWithUserSession:(id)arg1;
- (void)presentDeepLink:(id)arg1;

@end

