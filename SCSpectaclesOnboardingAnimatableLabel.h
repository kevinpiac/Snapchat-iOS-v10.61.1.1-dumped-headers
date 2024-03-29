//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

#import "CAAnimationDelegate-Protocol.h"

@class CABasicAnimation, CAGradientLayer, NSString;

@interface SCSpectaclesOnboardingAnimatableLabel : UILabel <CAAnimationDelegate>
{
    CABasicAnimation *_bottomColorAnimation;
    CABasicAnimation *_topColorAnimation;
    CAGradientLayer *_maskLayer;
    CDUnknownBlockType _fullAnimationCompletionBlock;
}

- (void).cxx_destruct;
- (void)_prepareAnimations;
- (void)animateWithCompletion:(CDUnknownBlockType)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (id)initWithText:(id)arg1 textFont:(id)arg2 textColor:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

