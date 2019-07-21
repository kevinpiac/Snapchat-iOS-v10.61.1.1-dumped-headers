//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDataVaultEncryption-Protocol.h"

@class CLLocation, NSData, NSString;

@interface SCDataVaultEncryption : NSObject <SCDataVaultEncryption>
{
    _Bool _isEncrypted;
    CLLocation *_location;
    NSData *_key;
    NSData *_IV;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSData *IV; // @synthesize IV=_IV;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocation:(id)arg1 key:(id)arg2 IV:(id)arg3 isEncrypted:(_Bool)arg4;
@property(readonly, nonatomic) _Bool isEncrypted; // @synthesize isEncrypted=_isEncrypted;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSData *key; // @synthesize key=_key;
@property(readonly, copy, nonatomic) CLLocation *location; // @synthesize location=_location;
- (_Bool)preferFasterCoding;
- (void)setBool:(_Bool)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

