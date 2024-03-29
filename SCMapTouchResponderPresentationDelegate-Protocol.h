//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIViewController;
@protocol NavigationDelegate, SCMapTouchResponder;

@protocol SCMapTouchResponderPresentationDelegate <NSObject>
- (_Bool)isInOnboardingForTouchResponder:(id <SCMapTouchResponder>)arg1;
- (id <NavigationDelegate>)navigationDelegateForTouchResponder:(id <SCMapTouchResponder>)arg1;
- (void)presentationStateDidChangeForTouchResponder:(id <SCMapTouchResponder>)arg1;
- (UIViewController *)presentingViewControllerForTouchResponder:(id <SCMapTouchResponder>)arg1;
@end

