//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAudioStitch-Protocol.h"
#import "SOJUAudioStitch-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface SOJUAudioStitch : NSObject <SCAudioStitch, SOJUAudioStitch>
{
    NSString *_audioStitchId;
    NSNumber *_snapsPerRow;
    NSNumber *_snapsPerColumn;
    NSArray *_snaps;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *audioStitchId; // @synthesize audioStitchId=_audioStitchId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithAudioStitchId:(id)arg1 snapsPerRow:(id)arg2 snapsPerColumn:(id)arg3 snaps:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSArray *snaps; // @synthesize snaps=_snaps;
@property(readonly, copy, nonatomic) NSNumber *snapsPerColumn; // @synthesize snapsPerColumn=_snapsPerColumn;
- (int)snapsPerColumnValue;
@property(readonly, copy, nonatomic) NSNumber *snapsPerRow; // @synthesize snapsPerRow=_snapsPerRow;
- (int)snapsPerRowValue;
- (id)toDictionary;
- (id)toJson;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

