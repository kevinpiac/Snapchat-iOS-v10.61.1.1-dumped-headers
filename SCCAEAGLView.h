//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAEAGLLayer;

@interface SCCAEAGLView : UIView
{
    unsigned long long _videoPlaybackQuality;
}

+ (Class)layerClass;
@property(readonly, nonatomic) CAEAGLLayer *glLayer;
- (void)renderInContext:(struct CGContext *)arg1;
@property(nonatomic) unsigned long long videoPlaybackQuality; // @synthesize videoPlaybackQuality=_videoPlaybackQuality;

@end

