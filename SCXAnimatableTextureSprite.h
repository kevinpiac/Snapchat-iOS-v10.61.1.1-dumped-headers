//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCXSprite.h"

@interface SCXAnimatableTextureSprite : SCXSprite
{
    SCXSprite *_animationSprite;
}

- (void).cxx_destruct;
- (void)animateToLocationInterpolator:(CDUnknownBlockType)arg1 duration:(double)arg2 interpolation:(CDUnknownBlockType)arg3 mapViewport:(id)arg4 completion:(CDUnknownBlockType)arg5;
@property(readonly, nonatomic) SCXSprite *animationSprite; // @synthesize animationSprite=_animationSprite;
- (id)init;
- (void)setLocationInterpolator:(CDUnknownBlockType)arg1;
- (void)setZIndex:(id)arg1;

@end

