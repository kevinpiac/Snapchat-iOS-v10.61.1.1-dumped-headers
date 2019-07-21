//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIWindow.h>

#import "FBTweakViewControllerDelegate-Protocol.h"

@class NSString;

@interface FBTweakShakeWindow : UIWindow <FBTweakViewControllerDelegate>
{
    _Bool _shaking;
    _Bool _active;
}

- (void)_applicationDidBecomeActiveWithNotification:(id)arg1;
- (void)_applicationWillResignActiveWithNotification:(id)arg1;
- (void)_presentTweaks;
- (_Bool)_shouldPresentTweaks;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)motionBegan:(long long)arg1 withEvent:(id)arg2;
- (void)motionEnded:(long long)arg1 withEvent:(id)arg2;
- (void)tweakViewControllerPressedDone:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

