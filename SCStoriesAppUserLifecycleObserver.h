//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAppUserLifecycleEventObserver-Protocol.h"

@class NSString, SCLazy;

@interface SCStoriesAppUserLifecycleObserver : NSObject <SCAppUserLifecycleEventObserver>
{
    SCLazy *_storiesFetcher;
    SCLazy *_docObjectContext;
    _Bool _needsFullFetch;
}

- (void).cxx_destruct;
- (id)initWithStoriesFetcher:(id)arg1 docObjectContext:(id)arg2;
- (void)onAppDidBecomeActive;
- (void)onAppDidEnterBackground;
- (void)onAppDidFinishLaunching;
- (void)onAppWillEnterForeground;
- (void)onAppWillResignActive;
- (void)onAppWillTerminate;
- (void)onUserLoggedIn;
- (void)onUserRegistered;
- (void)onUserResumed:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

