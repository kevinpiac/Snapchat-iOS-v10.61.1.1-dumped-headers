//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, UIImage;

@interface SCMultiSnapSegment : NSObject
{
    UIImage *_thumbnail;
    UIImage *_editedThumbnail;
    long long _uniqueId;
    NSArray *_editedThumbnails;
    NSArray *_thumbnailFutures;
    CDStruct_1b6d18a9 _thumbnailTime;
    CDStruct_e83c9415 _timeRange;
    CDStruct_e83c9415 _trimmedTimeRange;
}

- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) UIImage *editedThumbnail; // @synthesize editedThumbnail=_editedThumbnail;
@property(readonly, nonatomic) NSArray *editedThumbnails; // @synthesize editedThumbnails=_editedThumbnails;
- (id)initWithThumbnail:(id)arg1 editedThumbnail:(id)arg2 thumbnailTime:(CDStruct_1b6d18a9)arg3 timeRange:(CDStruct_e83c9415)arg4;
- (id)initWithThumbnail:(id)arg1 thumbnailTime:(CDStruct_1b6d18a9)arg2;
- (id)initWithTimeRange:(CDStruct_e83c9415)arg1 trimmedTimeRange:(CDStruct_e83c9415)arg2 editedThumbnails:(id)arg3 thumbnailFutures:(id)arg4;
- (void)setTrimmedTimeRange:(CDStruct_e83c9415)arg1;
- (void)setUniqueId:(long long)arg1;
@property(readonly, nonatomic) UIImage *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(readonly, nonatomic) NSArray *thumbnailFutures; // @synthesize thumbnailFutures=_thumbnailFutures;
@property(readonly, nonatomic) CDStruct_1b6d18a9 thumbnailTime; // @synthesize thumbnailTime=_thumbnailTime;
@property(readonly, nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
@property(readonly, nonatomic) CDStruct_e83c9415 trimmedTimeRange; // @synthesize trimmedTimeRange=_trimmedTimeRange;
@property(readonly, nonatomic) long long uniqueId; // @synthesize uniqueId=_uniqueId;

@end

