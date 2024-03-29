//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, UILongPressGestureRecognizer, UIPanGestureRecognizer, UIPinchGestureRecognizer, UIRotationGestureRecognizer, UITapGestureRecognizer;

@protocol SCMapGestures <NSObject>
- (NSArray *)currentlyRecognizingGestures;
@property(readonly, nonatomic) UITapGestureRecognizer *doubleTapGestureRecognizer;
@property(readonly, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer;
- (void)notifyGestureDidBegin;
- (void)notifyGestureDidEnd;
- (void)notifyGestureIsChanging;
@property(readonly, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property(readonly, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer;
@property(readonly, nonatomic) UILongPressGestureRecognizer *quickZoomGestureRecognizer;
@property(readonly, nonatomic) UIRotationGestureRecognizer *rotationGestureRecognizer;
@property(readonly, nonatomic) UITapGestureRecognizer *singleTapGestureRecognizer;
@property(readonly, nonatomic) UIPanGestureRecognizer *tiltGestureRecognizer;
@property(readonly, nonatomic) UITapGestureRecognizer *twoFingerTapGestureRecognizer;
@end

