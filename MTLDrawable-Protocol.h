//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol MTLDrawable <NSObject>
- (void)addPresentedHandler:(void (^)(id <MTLDrawable>))arg1;
@property(readonly, nonatomic) unsigned long long drawableID;
- (void)present;
- (void)presentAfterMinimumDuration:(double)arg1;
- (void)presentAtTime:(double)arg1;
@property(readonly, nonatomic) double presentedTime;
@end

