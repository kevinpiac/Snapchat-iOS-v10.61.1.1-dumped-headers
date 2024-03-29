//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSData;

@interface LSADepthMetadata : NSObject <NSCopying, NSCoding>
{
    NSData *_serializedDepthMapAsPNGRawData;
    NSData *_serializedCameraInfoData;
    NSData *_serializedSegmentationMaskAsPNGRawData;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSerializedDepthMapAsPNGRawData:(id)arg1 serializedCameraInfoData:(id)arg2 serializedSegmentationMaskAsPNGRawData:(id)arg3;
@property(readonly, copy, nonatomic) NSData *serializedCameraInfoData; // @synthesize serializedCameraInfoData=_serializedCameraInfoData;
@property(readonly, copy, nonatomic) NSData *serializedDepthMapAsPNGRawData; // @synthesize serializedDepthMapAsPNGRawData=_serializedDepthMapAsPNGRawData;
@property(readonly, copy, nonatomic) NSData *serializedSegmentationMaskAsPNGRawData; // @synthesize serializedSegmentationMaskAsPNGRawData=_serializedSegmentationMaskAsPNGRawData;

@end

