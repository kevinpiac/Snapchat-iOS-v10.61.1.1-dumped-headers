//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCImpalaPresentationControlling-Protocol.h"

@class NSString, UIViewController;

@interface SCImpalaPresentationController : NSObject <SCImpalaPresentationControlling>
{
    _Bool _forceAnimatedDismiss;
    UIViewController *_viewController;
}

- (void).cxx_destruct;
- (void)dismissWithAnimated:(_Bool)arg1;
@property(nonatomic) _Bool forceAnimatedDismiss; // @synthesize forceAnimatedDismiss=_forceAnimatedDismiss;
- (id)initWithViewController:(id)arg1;
- (id)toJavaScript;
@property(readonly, nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
