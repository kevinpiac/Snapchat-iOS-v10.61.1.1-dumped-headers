//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCAutoLayoutHelpers : NSObject
{
}

+ (void)addBorderConstraintsBetweenView1:(id)arg1 view2:(id)arg2;
+ (id)addBottomConstraintBetweenView:(id)arg1 view2:(id)arg2 offset:(double)arg3;
+ (id)addCenterXConstraintBetweenView:(id)arg1 view2:(id)arg2;
+ (id)addEqualWidthConstraintBetweenView:(id)arg1 view2:(id)arg2 offset:(double)arg3;
+ (id)addHeightConstraint:(id)arg1 height:(double)arg2;
+ (id)addLeftConstraintBetweenView:(id)arg1 view2:(id)arg2 offset:(double)arg3;
+ (id)addRightConstraintBetweenView:(id)arg1 view2:(id)arg2 offset:(double)arg3;
+ (id)addTopConstraintBetweenView:(id)arg1 view2:(id)arg2 offset:(double)arg3;
+ (id)addWidthConstraint:(id)arg1 width:(double)arg2;
+ (id)topOfView:(id)arg1 constrainedToBottomOfView:(id)arg2;

@end

