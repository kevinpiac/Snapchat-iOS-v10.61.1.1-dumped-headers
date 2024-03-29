//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUGalleryDrawing-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface SOJUGalleryDrawing : NSObject <SOJUGalleryDrawing>
{
    NSString *_type;
    NSArray *_strokes;
    NSString *_imageData;
    NSNumber *_smoothingVersion;
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
@property(readonly, copy, nonatomic) NSString *imageData; // @synthesize imageData=_imageData;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithType:(id)arg1 strokes:(id)arg2 imageData:(id)arg3 smoothingVersion:(id)arg4;
- (_Bool)isEqual:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSNumber *smoothingVersion; // @synthesize smoothingVersion=_smoothingVersion;
- (int)smoothingVersionValue;
@property(readonly, copy, nonatomic) NSArray *strokes; // @synthesize strokes=_strokes;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
- (long long)typeEnum;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

