//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCDocObject.h"

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCCircumstanceEngineEtag : SCDocObject <NSCopying>
{
    NSString *_etagId;
    NSString *_etag;
    double _lastUpdateTimestampInSeconds;
}

+ (id)immutableObjectParse:(const void *)arg1 bufferSize:(unsigned long long)arg2;
+ (struct SCDocObjectClassFunctionPointer)objectClassFunctionPointer;
+ (const char *)table;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property(readonly, copy, nonatomic) NSString *etagId; // @synthesize etagId=_etagId;
- (unsigned long long)hash;
- (id)initWithEtagId:(id)arg1 etag:(id)arg2 lastUpdateTimestampInSeconds:(double)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) double lastUpdateTimestampInSeconds; // @synthesize lastUpdateTimestampInSeconds=_lastUpdateTimestampInSeconds;

@end

