//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class SCButtonWithCustomTouchEdge, SCLazy;

@interface SCOperaWebAppAudioButton : UIControl
{
    SCButtonWithCustomTouchEdge *_audioButton;
    SCLazy *_waveformViewLazy;
    SCLazy *_tailViewLazy;
    _Bool _isAnimatingToggleSelection;
}

- (void).cxx_destruct;
- (void)_toggleAnimation;
- (void)_toggleEnlargeAnimationCompletionWithButtonSelected:(_Bool)arg1;
- (void)_toggleEnlargeAnimationsWithButtonSelected:(_Bool)arg1;
- (void)_toggleShrinkAnimationCompletionWithButtonSelected:(_Bool)arg1;
- (void)_toggleShrinkAnimationsWithButtonSelected:(_Bool)arg1;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setTag:(long long)arg1;
- (void)toggleSelected;

@end

