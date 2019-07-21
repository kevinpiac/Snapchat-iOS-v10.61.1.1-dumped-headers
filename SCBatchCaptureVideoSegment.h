//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCBatchCaptureSegment.h"

@class NSArray, NSURL, SCMultiSnapConfiguration, UIImage;

@interface SCBatchCaptureVideoSegment : SCBatchCaptureSegment
{
    _Bool _isVideoSegment;
    _Bool _isMultiSnap;
    UIImage *_thumbnail;
    NSURL *_assetURL;
    UIImage *_frameImage;
    NSURL *_rawVideoDataFileURL;
    SCMultiSnapConfiguration *_multiSnapConfiguration;
    long long _codecType;
    CDStruct_1b6d18a9 _startTimeOffset;
    CDStruct_e83c9415 _contentTimeRange;
}

- (void).cxx_destruct;
- (id)assetURL;
@property(nonatomic) long long codecType; // @synthesize codecType=_codecType;
- (CDStruct_e83c9415)contentTimeRange;
- (id)description;
@property(readonly, nonatomic) NSArray *forceSplittedTimeRanges;
@property(readonly, nonatomic) long long forceSplittedTimeRangesCount;
- (id)frameImage;
- (id)initWithURL:(id)arg1;
@property(nonatomic) _Bool isMultiSnap; // @synthesize isMultiSnap=_isMultiSnap;
- (_Bool)isVideoSegment;
@property(retain, nonatomic) SCMultiSnapConfiguration *multiSnapConfiguration; // @synthesize multiSnapConfiguration=_multiSnapConfiguration;
@property(retain, nonatomic) NSURL *rawVideoDataFileURL; // @synthesize rawVideoDataFileURL=_rawVideoDataFileURL;
- (void)setContentTimeRange:(CDStruct_e83c9415)arg1;
- (void)setFrameImage:(id)arg1;
- (void)setStartTimeOffset:(CDStruct_1b6d18a9)arg1;
- (void)setThumbnail:(id)arg1;
- (CDStruct_1b6d18a9)startTimeOffset;
- (id)thumbnail;

@end
