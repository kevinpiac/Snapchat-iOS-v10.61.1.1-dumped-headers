//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJURichStoryRichStoryInteractionZone-Protocol.h"

@class NSArray, NSString;

@interface SOJURichStoryRichStoryInteractionZone : NSObject <SOJURichStoryRichStoryInteractionZone>
{
    NSArray *_interactionZoneButtonItems;
    NSString *_interactionZoneType;
    NSString *_interactionZoneHeadline;
    NSArray *_interactionZoneItems;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithInteractionZoneButtonItems:(id)arg1 interactionZoneType:(id)arg2 interactionZoneHeadline:(id)arg3 interactionZoneItems:(id)arg4;
- (id)initWithJSONDictionary:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *interactionZoneButtonItems; // @synthesize interactionZoneButtonItems=_interactionZoneButtonItems;
@property(readonly, copy, nonatomic) NSString *interactionZoneHeadline; // @synthesize interactionZoneHeadline=_interactionZoneHeadline;
@property(readonly, copy, nonatomic) NSArray *interactionZoneItems; // @synthesize interactionZoneItems=_interactionZoneItems;
@property(readonly, copy, nonatomic) NSString *interactionZoneType; // @synthesize interactionZoneType=_interactionZoneType;
- (long long)interactionZoneTypeEnum;
- (_Bool)isEqual:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (id)toDictionary;
- (id)toJson;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
