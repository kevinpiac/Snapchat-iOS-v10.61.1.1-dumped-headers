//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCFideliusDeviceInfo : NSObject <NSCopying>
{
    NSString *_outBeta;
    long long _version;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithOutBeta:(id)arg1 version:(long long)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *outBeta; // @synthesize outBeta=_outBeta;
@property(readonly, nonatomic) long long version; // @synthesize version=_version;

@end
