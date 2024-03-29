//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "POPPropertyAnimation.h"

@interface POPDecayAnimation : POPPropertyAnimation
{
}

+ (id)animation;
+ (id)animationWithPropertyNamed:(id)arg1;
- (void)_appendDescription:(id)arg1 debug:(_Bool)arg2;
- (void)_ensureComputedProperties;
- (void)_initState;
- (void)_invalidateComputedProperties;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) double deceleration;
@property(readonly, nonatomic) double duration;
- (id)init;
@property(readonly, copy, nonatomic) id originalVelocity;
- (id)reversedVelocity;
- (void)setFromValue:(id)arg1;
- (void)setToValue:(id)arg1;
@property(copy, nonatomic) id velocity; // @dynamic velocity;
- (id)toValue;

@end

