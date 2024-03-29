//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol SCPreviewTooltipProvider <NSObject>
- (NSString *)accessibilityIdentifier;
- (double)helpLabelCornerRadius;
- (struct CGSize)helpLabelFrameSize;
- (double)initialAlpha;
- (double)initialTransformScale;
- (NSString *)labelText;
- (void)setDisplayedAnimatedTooltip;
- (void)setDisplayedBounceTeachingTooltip;
- (void)setDisplayedCropToolTooltip;
- (void)setDisplayedGiphyStickerTooltip;
- (void)setDisplayedTrackingCaptionTooltip;
- (void)setDisplayedUnlockableStickerTooltip;
- (void)setDisplayedVenueStickerStyleTooltip;
- (void)setDisplayedVenueStickerTooltip;
- (_Bool)shouldDisplayAnimatedTooltip;
- (_Bool)shouldDisplayAutoCreativeFilterTooltip;
- (_Bool)shouldDisplayBounceTeachingTooltip;
- (_Bool)shouldDisplayCaptionHelp;
- (_Bool)shouldDisplayCropToolTooltip;
- (_Bool)shouldDisplayGiphyStickerTooltip;
- (_Bool)shouldDisplayHelpLabel;
- (_Bool)shouldDisplayTrackingCaptionTooltip;
- (_Bool)shouldDisplayUnlockableStickerTooltip;
- (_Bool)shouldDisplayUnlockedStickerPackagesTooltip;
- (_Bool)shouldDisplayVenueStickerStyleTooltip;
- (_Bool)shouldDisplayVenueStickerTooltip;
@end

