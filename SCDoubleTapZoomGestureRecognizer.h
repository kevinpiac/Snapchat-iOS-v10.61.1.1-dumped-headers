//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@class NSTimer;

@interface SCDoubleTapZoomGestureRecognizer : UIGestureRecognizer
{
    struct CGPoint _startingLocation;
    struct CGPoint _doubleTapStartingLocation;
    NSTimer *_doubleTapFailureTimer;
    double _zoom;
}

- (void).cxx_destruct;
- (void)_onDoubleTapFailure:(id)arg1;
- (void)_setZoomInternal:(double)arg1;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)reset;
- (void)setState:(long long)arg1;
@property(nonatomic) double zoom; // @synthesize zoom=_zoom;
- (void)supportPreInitializationTouch:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end

