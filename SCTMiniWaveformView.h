//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface SCTMiniWaveformView : UIView
{
    NSArray *_lines;
    struct SCTMiniWaveformAttributes _attributes;
}

- (void).cxx_destruct;
- (void)_initLines;
- (void)_layoutLines;
- (struct CGRect)_lineBoundsFromLineHeight:(double)arg1;
- (struct CGRect)_maxLineBounds;
- (struct CGRect)_midLineBounds;
- (struct CGRect)_minLineBounds;
- (id)initWithAttributes:(struct SCTMiniWaveformAttributes)arg1;
@property(readonly, nonatomic) _Bool isAnimating;
- (void)layoutSubviews;
- (void)startAnimation;
- (void)stopAnimation;

@end

