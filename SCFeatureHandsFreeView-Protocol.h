//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCFeatureHandsFreeTooltipDelegate-Protocol.h"

@class SCVideoCaptureConfiguration, UIView;

@protocol SCFeatureHandsFreeView <SCFeatureHandsFreeTooltipDelegate>
@property(copy, nonatomic) CDUnknownBlockType cancelBlock;
@property(nonatomic) struct CGPoint gestureCurrentPosition;
@property(nonatomic) struct CGPoint gestureStartPosition;
@property(readonly, nonatomic) UIView *handsFreeView;
- (_Bool)isPointInCancelButton:(struct CGPoint)arg1;
- (_Bool)isPointInCaptureButton:(struct CGPoint)arg1;
- (_Bool)isPointInHitBox:(struct CGPoint)arg1;
@property(nonatomic) unsigned long long state;
@property(copy, nonatomic) SCVideoCaptureConfiguration *videoCaptureConfiguration;
- (_Bool)shouldActivateHandsFree;
@end
