//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCGallerySnapOverlayParser : NSObject
{
}

+ (_Bool)audioDisabled:(id)arg1;
+ (_Bool)containsAnimatedContent:(id)arg1;
+ (_Bool)containsColorFilter:(id)arg1;
+ (_Bool)containsFilter:(id)arg1;
+ (_Bool)containsScreenOverlay:(id)arg1;
+ (_Bool)containsTrackingContent:(id)arg1;
+ (_Bool)isReversePlayback:(id)arg1;
+ (_Bool)isVideoBounce:(id)arg1;
+ (double)playbackTimeScale:(id)arg1;
+ (_Bool)requireGLVideoLayerToRenderWithSnap:(id)arg1 overlay:(id)arg2;
+ (_Bool)shouldGenerateAudioFilterMix:(id)arg1;
+ (_Bool)shouldGenerateReverseAudioData:(id)arg1;
+ (struct CGAffineTransform)viewportTransform:(id)arg1 gallerySnapSize:(struct CGSize)arg2;

@end

