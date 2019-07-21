//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUGalleryDrawingStroke-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface SOJUGalleryDrawingStroke : NSObject <SOJUGalleryDrawingStroke>
{
    NSNumber *_color;
    NSNumber *_strokeSize;
    NSArray *_points;
    NSString *_emoji;
    NSString *_drawerType;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSNumber *color; // @synthesize color=_color;
- (int)colorValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *drawerType; // @synthesize drawerType=_drawerType;
- (long long)drawerTypeEnum;
@property(readonly, copy, nonatomic) NSString *emoji; // @synthesize emoji=_emoji;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithColor:(id)arg1 strokeSize:(id)arg2 points:(id)arg3 emoji:(id)arg4 drawerType:(id)arg5;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *points; // @synthesize points=_points;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSNumber *strokeSize; // @synthesize strokeSize=_strokeSize;
- (double)strokeSizeValue;
- (id)toDictionary;
- (id)toJson;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

