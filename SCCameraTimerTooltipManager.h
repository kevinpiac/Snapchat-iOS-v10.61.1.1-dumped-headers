//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCameraTimerTooltipManaging-Protocol.h"

@class NSString, SCPreviewTooltipBalloon, UIView;

@interface SCCameraTimerTooltipManager : NSObject <SCCameraTimerTooltipManaging>
{
    UIView *_cameraTimerView;
    UIView *_takeASnapTooltipView;
    SCPreviewTooltipBalloon *_multiSnapTooltip;
    _Bool _suppressTooltips;
}

- (void).cxx_destruct;
- (void)hideMultiSnapTooltip;
- (void)hideTakeASnapTooltipAnimated:(_Bool)arg1;
- (id)initWithCameraTimerView:(id)arg1;
- (_Bool)isTakeASnapTooltipVisible;
@property(nonatomic) _Bool suppressTooltips; // @synthesize suppressTooltips=_suppressTooltips;
- (void)showMultiSnapTooltip;
- (void)showTakeASnapTooltipView:(id)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) UIView *takeASnapTooltipView; // @synthesize takeASnapTooltipView=_takeASnapTooltipView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

