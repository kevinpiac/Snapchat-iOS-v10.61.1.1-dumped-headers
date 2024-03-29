//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSNumber;

@protocol SOJUVideoRecordingTranscodingConfig <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSNumber *recordingBitrate1080p;
@property(readonly, copy, nonatomic) NSNumber *recordingBitrate360p;
@property(readonly, copy, nonatomic) NSNumber *recordingBitrate480p;
@property(readonly, copy, nonatomic) NSNumber *recordingBitrate640p;
@property(readonly, copy, nonatomic) NSNumber *recordingBitrate720p;
@property(readonly, copy, nonatomic) NSNumber *transcodingOutputBitrate1080p;
@property(readonly, copy, nonatomic) NSNumber *transcodingOutputBitrate360p;
@property(readonly, copy, nonatomic) NSNumber *transcodingOutputBitrate480p;
@property(readonly, copy, nonatomic) NSNumber *transcodingOutputBitrate640p;
@property(readonly, copy, nonatomic) NSNumber *transcodingOutputBitrate720p;
@property(readonly, copy, nonatomic) NSNumber *transcodingOutputWidth;
@end

