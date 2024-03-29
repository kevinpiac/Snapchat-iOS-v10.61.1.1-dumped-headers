//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCDocObject.h"

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCSnapchattersDeltaSyncMetadata : SCDocObject <NSCopying>
{
    unsigned int _type;
    NSString *_token;
    long long _version;
    double _expirationTimestamp;
}

+ (id)immutableObjectParse:(const void *)arg1 bufferSize:(unsigned long long)arg2;
+ (struct SCDocObjectClassFunctionPointer)objectClassFunctionPointer;
+ (const char *)table;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) double expirationTimestamp; // @synthesize expirationTimestamp=_expirationTimestamp;
- (unsigned long long)hash;
- (id)initWithType:(unsigned int)arg1 token:(id)arg2 version:(long long)arg3 expirationTimestamp:(double)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(readonly, nonatomic) unsigned int type; // @synthesize type=_type;
@property(readonly, nonatomic) long long version; // @synthesize version=_version;

@end

