//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCMapPoiShareMetadata-Protocol.h"

@class NSString, SCMTGetPoiSharePlaylistResponse;

@interface SCMapPoiShareMetadata : NSObject <SCMapPoiShareMetadata>
{
    NSString *_poiId;
    SCMTGetPoiSharePlaylistResponse *_playlistResponse;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (id)friendStoriesWithStreamingEnabled:(_Bool)arg1 mapSourceType:(long long)arg2;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPoiId:(id)arg1 playlistResponse:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCMTGetPoiSharePlaylistResponse *playlistResponse; // @synthesize playlistResponse=_playlistResponse;
@property(readonly, copy, nonatomic) NSString *poiId; // @synthesize poiId=_poiId;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

