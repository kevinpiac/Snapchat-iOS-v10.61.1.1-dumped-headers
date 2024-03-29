//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOnDemandGeofilterStickerMetadata-Protocol.h"

@class NSString;
@protocol SCStickerProtocol;

@interface SCOnDemandGeofilterStickerMetadata : NSObject <SCOnDemandGeofilterStickerMetadata>
{
    id <SCStickerProtocol> _sticker;
    double _rotation;
    double _scale;
    struct CGPoint _center;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGPoint center; // @synthesize center=_center;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSticker:(id)arg1 center:(struct CGPoint)arg2 rotation:(double)arg3 scale:(double)arg4;
- (_Bool)isEqual:(id)arg1;
- (_Bool)preferFasterCoding;
@property(readonly, nonatomic) double rotation; // @synthesize rotation=_rotation;
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
- (void)setFloat64:(double)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setPoint:(struct CGPoint)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) id <SCStickerProtocol> sticker; // @synthesize sticker=_sticker;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

