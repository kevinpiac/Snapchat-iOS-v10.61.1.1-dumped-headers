//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCacheDataHandlerCacheEntry-Protocol.h"

@class NSString;
@protocol NSCoding;

@interface SCCacheDataHandlerCacheEntry : NSObject <SCCacheDataHandlerCacheEntry>
{
    NSString *_cacheMetadata;
    id <NSCoding> _cacheData;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) id <NSCoding> cacheData; // @synthesize cacheData=_cacheData;
@property(readonly, copy, nonatomic) NSString *cacheMetadata; // @synthesize cacheMetadata=_cacheMetadata;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithCacheMetadata:(id)arg1 cacheData:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

