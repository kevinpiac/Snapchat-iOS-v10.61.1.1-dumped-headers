//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class AVAssetExportSession, NSError, NSURL, SCBatchCaptureVideoSegment;

@interface SCBatchCaptureVideoSegmentExportOperation : NSOperation
{
    NSError *_error;
    SCBatchCaptureVideoSegment *_videoSegment;
    NSURL *_outputURL;
    AVAssetExportSession *_exportSession;
    CDStruct_e83c9415 _timeRange;
}

- (void).cxx_destruct;
- (void)cancel;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) AVAssetExportSession *exportSession; // @synthesize exportSession=_exportSession;
- (id)initWithSegment:(id)arg1 timeRange:(CDStruct_e83c9415)arg2 outputURL:(id)arg3;
- (void)main;
@property(copy, nonatomic) NSURL *outputURL; // @synthesize outputURL=_outputURL;
@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
@property(retain, nonatomic) SCBatchCaptureVideoSegment *videoSegment; // @synthesize videoSegment=_videoSegment;

@end
