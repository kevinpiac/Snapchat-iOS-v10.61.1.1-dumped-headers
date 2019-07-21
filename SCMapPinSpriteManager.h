//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCXRenderLayer, SCXSpriteCluster, SCXSpriteTextureAnimator;

@interface SCMapPinSpriteManager : NSObject
{
    SCXSpriteCluster *_pinSpriteCluster;
    SCXSpriteTextureAnimator *_currentTextureAnimator;
    SCXRenderLayer *_renderLayer;
}

- (void).cxx_destruct;
- (void)_bindTexureToPinSprite:(id)arg1 imageIdentifier:(id)arg2 imageFetcher:(CDUnknownBlockType)arg3 animated:(_Bool)arg4;
- (void)hidePin;
- (id)initWithRenderLayer:(id)arg1;
@property(readonly, nonatomic) _Bool isShowingPin;
@property(readonly, nonatomic) __weak SCXRenderLayer *renderLayer; // @synthesize renderLayer=_renderLayer;
- (void)showDefaultPinAtCoordinate:(struct CLLocationCoordinate2D)arg1 animated:(_Bool)arg2;
- (void)showPinAtCoordinate:(struct CLLocationCoordinate2D)arg1 pinDescriptor:(id)arg2 animated:(_Bool)arg3;

@end

