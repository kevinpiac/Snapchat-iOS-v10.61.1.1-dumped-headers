//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCVideoTranscodingInputMediaProvider-Protocol.h"

@class AVAsset, NSDate, NSString, NSURL, UIImage;

@interface SCVideoTranscodingInputMediaProvider : NSObject <SCVideoTranscodingInputMediaProvider>
{
    AVAsset *_inputVideoAsset;
    NSURL *_rawVideoDataURL;
    long long _videoOrientation;
    double _videoPlaybackRate;
    NSDate *_videoCreateTimeUtc;
    UIImage *_inputImage;
    unsigned long long _frameRate;
    double _duration;
    struct CGAffineTransform _videoTransform;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly, nonatomic) unsigned long long frameRate; // @synthesize frameRate=_frameRate;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithInputVideoAsset:(id)arg1 rawVideoDataURL:(id)arg2 videoOrientation:(long long)arg3 videoTransform:(struct CGAffineTransform)arg4 videoPlaybackRate:(double)arg5 videoCreateTimeUtc:(id)arg6 inputImage:(id)arg7 frameRate:(unsigned long long)arg8 duration:(double)arg9;
@property(readonly, copy, nonatomic) UIImage *inputImage; // @synthesize inputImage=_inputImage;
@property(readonly, copy, nonatomic) AVAsset *inputVideoAsset; // @synthesize inputVideoAsset=_inputVideoAsset;
- (_Bool)isEqual:(id)arg1;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSURL *rawVideoDataURL; // @synthesize rawVideoDataURL=_rawVideoDataURL;
- (void)setAffineTransform:(struct CGAffineTransform)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setFloat64:(double)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setSInt64:(long long)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setUInt64:(unsigned long long)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSDate *videoCreateTimeUtc; // @synthesize videoCreateTimeUtc=_videoCreateTimeUtc;
@property(readonly, nonatomic) long long videoOrientation; // @synthesize videoOrientation=_videoOrientation;
@property(readonly, nonatomic) double videoPlaybackRate; // @synthesize videoPlaybackRate=_videoPlaybackRate;
@property(readonly, nonatomic) struct CGAffineTransform videoTransform; // @synthesize videoTransform=_videoTransform;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

