//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCXRenderLayer, SCXSprite;

@interface SCXSpriteTextureAnimator : NSObject
{
    NSString *_currentAnimationUUID;
    SCXSprite *_sprite;
    SCXSprite *_animationSprite;
    SCXRenderLayer *_renderLayer;
}

+ (void)_animateSprite:(id)arg1 fromScale:(float)arg2 toScale:(float)arg3 scaleInterpolation:(CDUnknownBlockType)arg4 scaleDuration:(double)arg5 fromOpacity:(float)arg6 toOpacity:(float)arg7 opacityInterpolation:(CDUnknownBlockType)arg8 opacityDuration:(double)arg9 completion:(CDUnknownBlockType)arg10;
- (void).cxx_destruct;
- (void)_animateWithOriginalTextures:(id)arg1 animationType:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_animationHasBeenCanceled:(id)arg1;
- (void)_crossfadeAnimationWithOriginalTextures:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_springUpAnimationWithOriginalTextures:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)animateToImageIdentifier:(id)arg1 imageFetcher:(CDUnknownBlockType)arg2 animationType:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) __weak SCXSprite *animationSprite; // @synthesize animationSprite=_animationSprite;
- (id)initWithSprite:(id)arg1 animationSprite:(id)arg2 renderLayer:(id)arg3;
@property(readonly, nonatomic, getter=isAnimating) _Bool animating;
@property(readonly, nonatomic) __weak SCXRenderLayer *renderLayer; // @synthesize renderLayer=_renderLayer;
@property(readonly, nonatomic) __weak SCXSprite *sprite; // @synthesize sprite=_sprite;

@end

