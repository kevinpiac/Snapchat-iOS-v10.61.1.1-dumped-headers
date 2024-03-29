//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILongPressGestureRecognizer.h>

@class NSDictionary;

@interface SCLongPressGestureRecognizer : UILongPressGestureRecognizer
{
    struct CGPoint _initialPoint;
    double _initialTime;
    _Bool _failedByMovement;
    double _allowableMovementAfterBegan;
    double _timeBeforeUnlimitedMovementAllowed;
    double _forceOfAllTouches;
    double _maximumPossibleForceOfAllTouches;
    NSDictionary *_userInfo;
}

- (void).cxx_destruct;
@property(nonatomic) double allowableMovementAfterBegan; // @synthesize allowableMovementAfterBegan=_allowableMovementAfterBegan;
@property(nonatomic) _Bool failedByMovement; // @synthesize failedByMovement=_failedByMovement;
@property(readonly, nonatomic) double forceOfAllTouches; // @synthesize forceOfAllTouches=_forceOfAllTouches;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (_Bool)isUnlimitedMovementAllowed;
@property(readonly, nonatomic) double maximumPossibleForceOfAllTouches; // @synthesize maximumPossibleForceOfAllTouches=_maximumPossibleForceOfAllTouches;
- (void)reset;
- (void)setEnabled:(_Bool)arg1;
@property(nonatomic) double timeBeforeUnlimitedMovementAllowed; // @synthesize timeBeforeUnlimitedMovementAllowed=_timeBeforeUnlimitedMovementAllowed;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end

