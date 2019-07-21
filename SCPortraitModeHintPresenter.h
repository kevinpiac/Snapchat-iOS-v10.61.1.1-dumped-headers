//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCPortraitModeFaceBoundsView, UILabel;

@interface SCPortraitModeHintPresenter : NSObject
{
    UILabel *_hintLabel;
    SCPortraitModeFaceBoundsView *_faceBoundsView;
}

- (void).cxx_destruct;
- (float)_distanceBetween:(struct CGPoint)arg1 and:(struct CGPoint)arg2;
- (id)_faceBoundsFadeAnimation;
- (void)animateFaceBoundsRectChange:(struct CGRect)arg1;
- (void)hideHintText;
- (id)initWithHintLabel:(id)arg1 faceBoundsView:(id)arg2;
- (void)showHintText:(id)arg1;
- (void)showThenHideFaceBounds;

@end

