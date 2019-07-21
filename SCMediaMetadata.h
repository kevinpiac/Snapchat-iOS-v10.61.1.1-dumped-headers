//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString, SCMediaDimensions, SCMediaDuration, SCMediaEncryptionInfo;

@interface SCMediaMetadata : NSObject <NSCopying, NSCoding>
{
    NSString *_mediaId;
    long long _type;
    long long _orientation;
    SCMediaDimensions *_dimensions;
    SCMediaEncryptionInfo *_encryptionInfo;
    SCMediaDuration *_duration;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) SCMediaDimensions *dimensions; // @synthesize dimensions=_dimensions;
@property(readonly, copy, nonatomic) SCMediaDuration *duration; // @synthesize duration=_duration;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy, nonatomic) SCMediaEncryptionInfo *encryptionInfo; // @synthesize encryptionInfo=_encryptionInfo;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithMediaId:(id)arg1 type:(long long)arg2 orientation:(long long)arg3 dimensions:(id)arg4 encryptionInfo:(id)arg5 duration:(id)arg6;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(readonly, nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;

@end
