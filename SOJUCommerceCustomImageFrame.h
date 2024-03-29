//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUCommerceCustomImageFrame-Protocol.h"

@class NSNumber, NSString;

@interface SOJUCommerceCustomImageFrame : NSObject <SOJUCommerceCustomImageFrame>
{
    NSNumber *_topLeftX;
    NSNumber *_topLeftY;
    NSNumber *_frameHeight;
    NSNumber *_frameWidth;
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
@property(readonly, copy, nonatomic) NSNumber *frameHeight; // @synthesize frameHeight=_frameHeight;
- (int)frameHeightValue;
@property(readonly, copy, nonatomic) NSNumber *frameWidth; // @synthesize frameWidth=_frameWidth;
- (int)frameWidthValue;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithTopLeftX:(id)arg1 topLeftY:(id)arg2 frameHeight:(id)arg3 frameWidth:(id)arg4;
- (_Bool)isEqual:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) NSNumber *topLeftX; // @synthesize topLeftX=_topLeftX;
- (int)topLeftXValue;
@property(readonly, copy, nonatomic) NSNumber *topLeftY; // @synthesize topLeftY=_topLeftY;
- (int)topLeftYValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

