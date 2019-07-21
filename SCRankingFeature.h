//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface SCRankingFeature : NSObject <NSCopying, NSCoding>
{
    NSString *_name_DEPRECATED;
    NSNumber *_value;
    long long _type;
    NSNumber *_signalKey;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithName_DEPRECATED:(id)arg1 value:(id)arg2 type:(long long)arg3 signalKey:(id)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *name_DEPRECATED; // @synthesize name_DEPRECATED=_name_DEPRECATED;
@property(readonly, copy, nonatomic) NSNumber *signalKey; // @synthesize signalKey=_signalKey;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSNumber *value; // @synthesize value=_value;

@end
