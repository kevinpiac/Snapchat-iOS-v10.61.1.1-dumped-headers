//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCBatchCaptureSegment.h"

@class NSLock, UIImage;

@interface SCBatchCaptureImageSegment : SCBatchCaptureSegment
{
    NSLock *_lock;
    _Bool _hasAnimatedContent;
    UIImage *_frameImage;
    UIImage *_thumbnail;
    struct __CVBuffer *_pixelBuffer;
    UIImage *_originalThumbnail;
    UIImage *_contextFilteredFrameImage;
    CDStruct_1b6d18a9 _startTimeOffset;
    CDStruct_1b6d18a9 _duration;
    CDStruct_e83c9415 _contentTimeRange;
}

- (void).cxx_destruct;
- (void)_setupPixelBuffer;
- (void)_setupThumbnail;
- (void)_updateTimeRange;
- (CDStruct_e83c9415)contentTimeRange;
@property(retain, nonatomic) UIImage *contextFilteredFrameImage; // @synthesize contextFilteredFrameImage=_contextFilteredFrameImage;
- (void)dealloc;
- (id)description;
@property(nonatomic) CDStruct_1b6d18a9 duration; // @synthesize duration=_duration;
- (id)frameImage;
@property(nonatomic) _Bool hasAnimatedContent; // @synthesize hasAnimatedContent=_hasAnimatedContent;
- (id)initWithImage:(id)arg1;
- (id)initWithImage:(id)arg1 thumbnailImage:(id)arg2;
@property(readonly, nonatomic) UIImage *originalThumbnail; // @synthesize originalThumbnail=_originalThumbnail;
@property(readonly, nonatomic) struct __CVBuffer *pixelBuffer; // @synthesize pixelBuffer=_pixelBuffer;
- (void)setContentTimeRange:(CDStruct_e83c9415)arg1;
- (void)setFrameImage:(id)arg1;
- (void)setStartTimeOffset:(CDStruct_1b6d18a9)arg1;
- (void)setThumbnail:(id)arg1;
- (CDStruct_1b6d18a9)startTimeOffset;
- (id)thumbnail;

@end
