//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSearchStoryMetadata-Protocol.h"

@class NSString, SCSearchDynamicStory;

@interface SCSearchStoryMetadata : NSObject <SCSearchStoryMetadata>
{
    long long _viewableStatus;
    NSString *_displayText;
    NSString *_snapId;
    SCSearchDynamicStory *_dynamicStory;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *displayText; // @synthesize displayText=_displayText;
@property(readonly, copy, nonatomic) SCSearchDynamicStory *dynamicStory; // @synthesize dynamicStory=_dynamicStory;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithViewableStatus:(long long)arg1 displayText:(id)arg2 snapId:(id)arg3 dynamicStory:(id)arg4;
- (_Bool)isEqual:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setSInt32:(int)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSString *snapId; // @synthesize snapId=_snapId;
@property(readonly, nonatomic) long long viewableStatus; // @synthesize viewableStatus=_viewableStatus;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

