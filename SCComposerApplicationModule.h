//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNComposerModuleFactory-Protocol.h"

@class SCDataHandlerObserverList;

@interface SCComposerApplicationModule : NSObject <SCNComposerModuleFactory>
{
    SCDataHandlerObserverList *_onBackgroundObserver;
    SCDataHandlerObserverList *_onForegroundObserver;
}

- (void).cxx_destruct;
- (void)_didEnterBackground;
- (void)_didEnterForeground;
- (id)init;
- (id)loadModule;

@end

