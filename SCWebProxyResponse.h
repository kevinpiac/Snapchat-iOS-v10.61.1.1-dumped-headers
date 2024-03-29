//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSData, NSDictionary;

@interface SCWebProxyResponse : NSObject <NSCopying>
{
    long long _statusCode;
    NSDictionary *_headers;
    NSData *_data;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSData *data; // @synthesize data=_data;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
- (id)initWithStatusCode:(long long)arg1 headers:(id)arg2 data:(id)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;

@end

