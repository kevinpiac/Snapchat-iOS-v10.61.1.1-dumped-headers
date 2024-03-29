//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSearchDynamicStory-Protocol.h"

@class NSArray, NSData, NSDictionary, NSString, SCMedia, SCSearchDynamicStoryReportingInfo, SCSearchStoryIcon, SCSearchThumbnail;

@interface SCSearchDynamicStory : NSObject <SCSearchDynamicStory>
{
    _Bool _isSubscribable;
    _Bool _isSubscribed;
    _Bool _isHidden;
    _Bool _isCampusStory;
    float _storyScore;
    float _latitude;
    float _longitude;
    NSString *_storyId;
    NSArray *_snaps;
    NSString *_coverSnapId;
    SCSearchThumbnail *_searchThumbnailMedia;
    SCMedia *_videoThumbnailMedia;
    NSString *_title;
    NSArray *_subtitles;
    SCSearchStoryIcon *_icon;
    NSString *_snippet;
    NSString *_emoji;
    double _displayTimestampSecs;
    NSDictionary *_attachmentsByType;
    unsigned long long _totalNumSnaps;
    double _totalDuration;
    SCSearchDynamicStoryReportingInfo *_reportingInfo;
    NSData *_adPlacementMetadata;
    NSDictionary *_debugInfo;
    long long _storyType;
    NSString *_placeId;
    NSString *_placeRating;
    long long _dynamicStoryType;
    unsigned long long _corpus;
    NSString *_identifier;
    long long _version;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSData *adPlacementMetadata; // @synthesize adPlacementMetadata=_adPlacementMetadata;
@property(readonly, copy, nonatomic) NSDictionary *attachmentsByType; // @synthesize attachmentsByType=_attachmentsByType;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) unsigned long long corpus; // @synthesize corpus=_corpus;
@property(readonly, copy, nonatomic) NSString *coverSnapId; // @synthesize coverSnapId=_coverSnapId;
@property(readonly, copy, nonatomic) NSDictionary *debugInfo; // @synthesize debugInfo=_debugInfo;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) double displayTimestampSecs; // @synthesize displayTimestampSecs=_displayTimestampSecs;
@property(readonly, nonatomic) long long dynamicStoryType; // @synthesize dynamicStoryType=_dynamicStoryType;
@property(readonly, copy, nonatomic) NSString *emoji; // @synthesize emoji=_emoji;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) SCSearchStoryIcon *icon; // @synthesize icon=_icon;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithStoryId:(id)arg1 snaps:(id)arg2 coverSnapId:(id)arg3 searchThumbnailMedia:(id)arg4 videoThumbnailMedia:(id)arg5 title:(id)arg6 subtitles:(id)arg7 icon:(id)arg8 snippet:(id)arg9 emoji:(id)arg10 displayTimestampSecs:(double)arg11 attachmentsByType:(id)arg12 storyScore:(float)arg13 totalNumSnaps:(unsigned long long)arg14 totalDuration:(double)arg15 reportingInfo:(id)arg16 adPlacementMetadata:(id)arg17 debugInfo:(id)arg18 storyType:(long long)arg19 placeId:(id)arg20 placeRating:(id)arg21 dynamicStoryType:(long long)arg22 latitude:(float)arg23 longitude:(float)arg24 isSubscribable:(_Bool)arg25 isSubscribed:(_Bool)arg26 isHidden:(_Bool)arg27 isCampusStory:(_Bool)arg28 corpus:(unsigned long long)arg29 identifier:(id)arg30 version:(long long)arg31;
@property(readonly, nonatomic) _Bool isCampusStory; // @synthesize isCampusStory=_isCampusStory;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isHidden; // @synthesize isHidden=_isHidden;
@property(readonly, nonatomic) _Bool isSubscribable; // @synthesize isSubscribable=_isSubscribable;
@property(readonly, nonatomic) _Bool isSubscribed; // @synthesize isSubscribed=_isSubscribed;
@property(readonly, nonatomic) float latitude; // @synthesize latitude=_latitude;
@property(readonly, nonatomic) float longitude; // @synthesize longitude=_longitude;
@property(readonly, copy, nonatomic) NSString *placeId; // @synthesize placeId=_placeId;
@property(readonly, copy, nonatomic) NSString *placeRating; // @synthesize placeRating=_placeRating;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) SCSearchDynamicStoryReportingInfo *reportingInfo; // @synthesize reportingInfo=_reportingInfo;
@property(readonly, copy, nonatomic) SCSearchThumbnail *searchThumbnailMedia; // @synthesize searchThumbnailMedia=_searchThumbnailMedia;
- (void)setBool:(_Bool)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setFloat32:(float)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setFloat64:(double)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setSInt32:(int)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setSInt64:(long long)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setUInt64:(unsigned long long)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSArray *snaps; // @synthesize snaps=_snaps;
@property(readonly, copy, nonatomic) NSString *snippet; // @synthesize snippet=_snippet;
@property(readonly, copy, nonatomic) NSString *storyId; // @synthesize storyId=_storyId;
@property(readonly, nonatomic) float storyScore; // @synthesize storyScore=_storyScore;
@property(readonly, nonatomic) long long storyType; // @synthesize storyType=_storyType;
@property(readonly, copy, nonatomic) NSArray *subtitles; // @synthesize subtitles=_subtitles;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) double totalDuration; // @synthesize totalDuration=_totalDuration;
@property(readonly, nonatomic) unsigned long long totalNumSnaps; // @synthesize totalNumSnaps=_totalNumSnaps;
@property(readonly, nonatomic) long long version; // @synthesize version=_version;
@property(readonly, copy, nonatomic) SCMedia *videoThumbnailMedia; // @synthesize videoThumbnailMedia=_videoThumbnailMedia;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

