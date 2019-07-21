//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCImpalaViewControllerProvider-Protocol.h"

@class IMPEpisodeLaunchInfo, IMPShowProfileLaunchInfo, NSString, SCUserSession;
@protocol NavigationDelegate;

@interface SCImpalaShowProfileViewControllerProvider : NSObject <SCImpalaViewControllerProvider>
{
    SCUserSession *_userSession;
    id <NavigationDelegate> _navigationDelegate;
    IMPShowProfileLaunchInfo *_launchInfo;
    IMPEpisodeLaunchInfo *_episodeLaunchInfo;
    long long _sourcePageType;
    long long _pageEntryType;
}

- (void).cxx_destruct;
- (id)initWithUserSession:(id)arg1 navigationDelegate:(id)arg2 launchInfo:(id)arg3 episodeLaunchInfo:(id)arg4 sourcePageType:(long long)arg5 pageEntryType:(long long)arg6;
- (id)viewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

