//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAsset, NSDate, NSURL, UIImage;

@interface SCVideoTranscodingInputMediaProviderBuilder : NSObject
{
    AVAsset *_inputVideoAsset;
    NSURL *_rawVideoDataURL;
    long long _videoOrientation;
    struct CGAffineTransform _videoTransform;
    double _videoPlaybackRate;
    NSDate *_videoCreateTimeUtc;
    UIImage *_inputImage;
    unsigned long long _frameRate;
    double _duration;
}

+ (id)withVideoTranscodingInputMediaProvider:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setDuration:(double)arg1;
- (id)setFrameRate:(unsigned long long)arg1;
- (id)setInputImage:(id)arg1;
- (id)setInputVideoAsset:(id)arg1;
- (id)setRawVideoDataURL:(id)arg1;
- (id)setVideoCreateTimeUtc:(id)arg1;
- (id)setVideoOrientation:(long long)arg1;
- (id)setVideoPlaybackRate:(double)arg1;
- (id)setVideoTransform:(struct CGAffineTransform)arg1;

@end

