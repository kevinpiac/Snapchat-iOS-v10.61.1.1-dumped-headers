//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPanGestureRecognizer.h>

@class NSTimer;

@interface SCHovaTabBarVelocityDetectionGestureRecognizer : UIPanGestureRecognizer
{
    double _maximumPressDuration;
    double _beginTime;
    NSTimer *_timer;
}

- (void).cxx_destruct;
@property(nonatomic) double beginTime; // @synthesize beginTime=_beginTime;
- (void)beginTimer;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)invalidateTimer;
@property(nonatomic) double maximumPressDuration; // @synthesize maximumPressDuration=_maximumPressDuration;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
- (void)timerFired:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end

