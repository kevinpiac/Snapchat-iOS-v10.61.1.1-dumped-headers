//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView;

@protocol SCCameraTimerTooltipManaging <NSObject>
- (void)hideMultiSnapTooltip;
- (void)hideTakeASnapTooltipAnimated:(_Bool)arg1;
- (_Bool)isTakeASnapTooltipVisible;
- (void)showMultiSnapTooltip;
- (void)showTakeASnapTooltipView:(UIView *)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) UIView *takeASnapTooltipView;
@end
