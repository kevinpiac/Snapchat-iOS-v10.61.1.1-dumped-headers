//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAEmitterCell, CAEmitterLayer, SCLongPressParticleAnimationConfiguration;

@interface SCLongPressParticleAnimationView : UIView
{
    SCLongPressParticleAnimationConfiguration *_layerConfiguration;
    CAEmitterLayer *_emitterLayer;
    CAEmitterCell *_emitterCellMusic;
    CAEmitterCell *_emitterCellSnapcode;
    CAEmitterCell *_emitterCellLens;
}

+ (id)longPressParticleAnimationViewWithConfiguration:(id)arg1;
- (void).cxx_destruct;
- (void)_configureEmitterCell:(id)arg1;
- (double)_degreesToRadians:(double)arg1;
- (void)_setUpEmitterCell;
- (void)_setUpEmitterLayer;
- (id)initWithFrame:(struct CGRect)arg1 configuration:(id)arg2;
- (void)updateEmitterPosition:(struct CGPoint)arg1;

@end

